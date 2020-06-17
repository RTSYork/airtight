#!/bin/sh

# Only show the packet result info
./track_results.rb | grep "Failed ack"
