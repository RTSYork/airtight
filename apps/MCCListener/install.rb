#!/usr/bin/ruby

if ARGV.length > 0 then
  node_id = 9
  port_num = ARGV[0]
  port_devid = "ttyUSB#{port_num}"
  puts "Node id = #{node_id}, port_devid = #{port_devid}"
  system("make iris install.#{node_id} mib520,/dev/#{port_devid}")
else
  puts "Please input port number"
end
