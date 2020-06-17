#!/usr/bin/ruby

def wait_for_ready(node)
  puts "Please attach..."
  system("banner 'Node #{node}'");
  puts "or press Ctrl-C to cancel"
  while (gets != "\n") do
  end
end

def install_node(node)
  wait_for_ready(node) if node > 0
  puts "Installing node #{node}..."
  system("./install.rb #{node}")
  
end

(0..4).each { |n| install_node(n) }
