function plot_faults(id)
  slots = dlmread(sprintf("node-faults%u", id))
  delay = diff(slots)
  if length(delay) > 0
  hist(delay, 100)
  end
end
