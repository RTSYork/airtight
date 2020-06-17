#!/usr/bin/ruby

require "pty"

MCCDATA = 12
MCCRECEPTIONS_COUNT = 4

# Adding a 12% increment to account for the measured time
SLOT_TIME_DEFINITION = 115
SLOTS_OR_TIMERS = :slots

@packets = {}
@last_create_time = []
@last_tx_slot = []

SENDER_ID_FOR_FLOWS = [nil, 1, 1, 2, 2, 0, 0, 0, 3, 3, 3, 4]

# Defines the flow ID numbers for priorities 1,2 3 of each node
# First element is nil to skip zero in array access
FLOW_IDS_FOR_NODES = {
  0 => [ nil,6,7,5 ],
  1 => [ nil,2,1 ],
  2 => [ nil,4,3 ],
  3 => [ nil,8,9,10 ],
  4 => [ nil,11 ]
}

# 
@node_prev_reception_counters = [0, 0]
# Store the timing of the duplicates in local slot ids
@node_faults = [[], []]

# Store the output fault tracking for different counters
@node_fault_files = []

@node_success_count = [0, 0]

# These are not zero based, so the first element is unused
@packet_count_for_flows = [0,0,0,0,0,0,0,0,0,0,0,0]; # Recv count
@sent_count_for_flows =   [0,0,0,0,0,0,0,0,0,0,0,0];

# Pads num to include leading zeros up to depth
def lz(num, depth)
  s = '%0' + depth.to_s + 'd'
  return s % num
end

def div_array_one_based(packet_count, sent_count)
  res = Array.new(packet_count.length, 0)

  packet_count.each_with_index do |pc, i|
    if i > 0 && i < 12 then
      if sent_count[i] > 0 then
        res[i] = sprintf("%3.2f", ((pc.to_f / sent_count[i]) * 100.0))
      else
        res[i] = "-|-"
      end
    else
      "ZERO"
    end
  end
  
  return res
end

def start_gnuplot(filename)
  cmd_str = "cd results && gnuplot -c liveplot.gnu #{filename}"
  Process.spawn(cmd_str)
end

# Convert 4 hex bytes (big endian) to an integer
def hex_bytes_to_int(hsl)
  puts "Hex bytes - #{hsl.join(" ")}"
  out = hsl[0] * 16777216 + hsl[1] * 65536 + hsl[2] * 256 + hsl[3]
  puts "output bytes = #{out}"
  return out
end

def log_pkt_to_file(tdiff, resfile, short, pkt)
  resfile.print "#{lz(pkt[:flow_id], 2)},#{lz(pkt[:seq_num], 5)},#{lz(pkt[:retrans_count],1)},#{lz(pkt[:response_time], 2)},#{pkt[:burst_num]},#{pkt[:failed_ack_count]},#{tdiff}\n"
  short.print "#{lz(pkt[:flow_id], 2)},#{lz(pkt[:retrans_count],1)},#{lz(pkt[:response_time], 2)}\n"
  resfile.flush
end

def id_for_packet(flow_id, seq_num)
  if flow_id == 0
    return nil
  else 
    return "#{lz(flow_id,1)}|#{lz(seq_num,5)}"
  end
end

def check_create_slot(slot, flow_id)
  if @last_create_time[flow_id].nil?
    @last_create_time[flow_id] = slot
  else
    if @last_create_time[flow_id] != slot
      measured_period = slot - @last_create_time[flow_id]
      puts "Flow ID = #{flow_id}, measured_period = #{measured_period}"
      @last_create_time[flow_id] = slot
    end
  end
end

def check_flow_id(slot, flow_id)
  if (flow_id < 0 || flow_id > 1)
    raise "Invalid flow_id found = #{flow_id}"
  end
end

def track_flow_discard(current_discard, flow_id)

  @sent_count_for_flows[flow_id] += 1
  
  # find sender from the flow_id
  sender_id = SENDER_ID_FOR_FLOWS[flow_id]
  # validate this

  # Flow IDs for the different priority
  flow_ids = FLOW_IDS_FOR_NODES[sender_id]

  # check each element of current_discard. resolve for the
  # current flow_id what its previous value was
  [1,2,3].each do |i|
    puts "Sender ID = #{sender_id}, Flow_prio = #{flow_ids[i]}"

    if (not flow_ids[i].nil?) && (flow_ids[i] >= 1 && flow_ids[i] < 12) then
      puts "current_discard = #{current_discard.join(",")}"
      @packet_count_for_flows[flow_ids[i]] += current_discard[i]
    end
  end
end

def handle_reception_counter(sender_id, slot_id, reception_counter)
  if sender_id < 0 || sender_id > 1 then
    raise "Sender_id = #{sender_id} invalid in load testing"
  end
  
  # If a duplicate reception counter, that is a fault
  if @node_prev_reception_counters[sender_id] == reception_counter then
    success_str = ""
    if @node_success_count[sender_id] > 0 then
      fl = @node_faults[sender_id].length
      fault_percentage = (fl.to_f / (fl + @node_success_count[sender_id])) * 100.0
      success_str = " - percentage faults is #{fault_percentage}"
    end
    
    puts "Fault receiving from node_id #{sender_id} at receiver_slot_id = #{slot_id}#{success_str}"
    @node_faults[sender_id].push(slot_id)
    @node_fault_files[sender_id].puts "#{slot_id}"
    @node_fault_files[sender_id].flush
  else
    @node_success_count[sender_id] += 1
    @node_prev_reception_counters[sender_id] = reception_counter
  end
end

def decode_pkt(dec, del_file)
  create_slot = dec[-(5+MCCDATA)]*256 + dec[-(4+MCCDATA)]
  send_slot = dec[-(3+MCCDATA)]*256 + dec[-(2+MCCDATA)]
  flow_id = dec[-(14+MCCDATA)]
  seq_num = dec[-(7+MCCDATA)]
  retrans_count = dec[-(6+MCCDATA)]
  burst_num = dec[-(1+MCCDATA)]
  failed_ack_count = dec[-4]

  # Reads a current counter from the flow
  reception_counter = dec[-3]*256 + dec[-2]
  # For the 2 node testing case, flow_id = sender_id
  handle_reception_counter(flow_id, send_slot, reception_counter)
  
  puts "Reception_counter for sender_id = #{flow_id} is #{reception_counter}"
  STDOUT.flush

  del_file.print "#{@packet_count_for_flows[1..-1].join(",")}\n"
  del_file.flush
  
  puts "Failed ack count = #{failed_ack_count}"

  slot_delay = send_slot - create_slot

  # Validate that the periods for application flows are
  # being respected (and the overall slot schedule)
  check_create_slot(create_slot, flow_id)
  check_flow_id(send_slot, flow_id)

  puts (dec.to_s)
  inject_time = hex_bytes_to_int(dec[24..27])
  transmit_time = hex_bytes_to_int(dec[28..31])

  # slot_time_ratio should come out very close to SLOT_TIME_DEFINITION

  time_diff = (transmit_time - inject_time)
  
  # Avoid division by zero
  if (inject_time != transmit_time) then
    slot_time_ratio = time_diff / slot_delay
  else
    slot_time_ratio = SLOT_TIME_DEFINITION
  end
    
  response_time = time_diff / SLOT_TIME_DEFINITION

  # Slot delays less than zero occur when the 16-bit slot counter rolls around.
  # Just ignore these values
  if slot_delay < 0 then
    return nil
  else
    pkt = {
    :id => id_for_packet(flow_id, seq_num),
    :create_slot => create_slot,
    :send_slot => send_slot,
    :flow_id => flow_id,
    :seq_num => seq_num,
    :retrans_count => retrans_count,
    :burst_num => burst_num,
    :confirmed_received => false,
    :slot_delay => slot_delay,
    :response_time => begin
                        if SLOTS_OR_TIMERS == :timers then
                          response_time
                        else
                          slot_delay
                        end
                      end,
    :slot_time_ratio => slot_time_ratio,
    :failed_ack_count => failed_ack_count
    }
  end
end

def decode_reception_record(dec, record_num)
  # End of record
  rbase = 3*record_num + 1
  rcv_seq_num = dec[-(rbase+2)]*256 + dec[-(rbase+1)]
  rcv_flow_id = dec[-rbase]
  return { :flow_id => rcv_flow_id,
           :seq_num => rcv_seq_num }
end

def register_receptions(dec, confirming_pkt)
  (0..(MCCRECEPTIONS_COUNT-1)).each do |rnum|
    rec = decode_reception_record(dec, rnum)
    recvd_id = id_for_packet(rec[:flow_id], rec[:seq_num])

    if (not recvd_id.nil?) 
      if @packets[recvd_id].nil?
        puts "WARNING: Packet ID #{recvd_id} reported received, but not logged as sent"
      else
        @packets[recvd_id][:confirmed_received] = true
        @packets[recvd_id][:confirming_receiver] = confirming_pkt
      end
    end
  end
end

def date_str
  return Time.now.to_s[0..18].gsub(":", "_").gsub(" ", "_")
end

def process_data_packet(data_line, del_file)
  bytes = data_line.split(" ")
  dec = bytes.map do |b| b.to_i(16) end
  pkt = decode_pkt(dec, del_file)
  if pkt.nil? then
    return nil
  else 
    register_receptions(dec, pkt)
    @packets[pkt[:id]] = pkt

    # The null flow_ids are the fault injection packets - ignore them
    if pkt[:flow_id] != 0 then
      return pkt
    end
  end
end

def setup_fault_files
  @node_fault_files[0] = File.open("node-faults0", "w")
  @node_fault_files[1] = File.open("node-faults1", "w")
end

def load_info(cmd, debug_print)
  res_file = "pkt-res-long-#{date_str}"
  short_file = "pkt-res-#{date_str}"
  discards_file = "discards-#{date_str}"

  setup_fault_files

  File.open("results/#{res_file}", "a") do |res|
    File.open("results/#{short_file}", "a") do |short|
      File.open("results/#{discards_file}", "a") do |delfile|
        PTY.spawn("#{cmd}") do |stdout, stdin, pid|
          starttime = Time.now
          stdout.each_line do |l|
            if l.match("1C 22") then # Search for packets of correct length
              pkt = process_data_packet(l, delfile)
              if not pkt.nil? then
                # A nil here is the lack of any valid packet
                tdiff = '%.4f' % (Time.now - starttime)
                puts "#{tdiff}-#{pkt}"
                STDOUT.flush
                log_pkt_to_file(tdiff, res, short, pkt)
              end
            end
            puts l if debug_print
          end
        end
      end
    end
  end
end

load_info("./listen-port1.sh", true)
