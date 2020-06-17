#!/usr/bin/ruby

def insert_file(outfile, splice)
  File.open(splice, "r") do |s|
    s.each_line do |l|
      outfile.print l
    end
  end
end

def transfer_file(in_file, out_file, match_str, splice_filename)
  outfile = File.open(out_file, "w")
  File.open(in_file, "r") do |f|
    f.each_line do |l|
      if l.match(match_str).nil? then
        outfile.print l
      else
        insert_file(outfile, splice_filename)
      end
    end
  end
  outfile.close
end

def splice_mccc_file(node_id)
  # Splice in the content from the node<n>.nc flow definition
  transfer_file("MCCC_orig.nc", "MCCC.nc", "SPLICE_FLOWS_RUBY_HERE", "node#{node_id}.nc")
end

def splice_hi_crit_definitions(node_id)
  transfer_file("TdmaMacC_orig.nc", "TdmaMacC.nc", "SPLICE_COMPONENT_DEFS_HERE", "priocrit#{node_id}.nc");
end

def port_num(node_id)
  if node_id == 0 then
    return 0
  else 
    return 2
  end
end

if ARGV.length > 0 then
  node_id = ARGV[0].to_i
  port_num = port_num(node_id)
  port_devid = "ttyUSB#{port_num}"
  puts "Node id = #{node_id}, port_devid = #{port_devid}"
  splice_mccc_file(node_id)
  splice_hi_crit_definitions(node_id)
  system("make iris install.#{node_id} mib520,/dev/#{port_devid}")
else
  puts "Please input node number"
end
