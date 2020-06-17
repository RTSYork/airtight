#!/usr/bin/ruby
require "pty"

def print_all(cmd, debug_print)

  puts "Timestamps are in milliseconds"
  
  first_pkt = true
  PTY.spawn("#{cmd}") do |stdout, stdin, pid|
    starttime = Time.now
    lasttime = starttime
    stdout.each_line do |l|

      if first_pkt then
        starttime = Time.now
        lasttime = starttime
        first_pkt = false
      end
      
      tnow = Time.now
      tstart = '%u' % ((tnow - starttime) * 1000)
      tdiff = '%u' % ((tnow - lasttime) * 1000)
      lasttime = tnow
      
      puts "#{tstart}\t\t#{tdiff}\t\t#{l}"
      STDOUT.flush
    end
  end
end

print_all("./listen.sh", true)
