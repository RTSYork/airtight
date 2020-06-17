#!/bin/sh
make
JNI=-Djava.library.path=/home/jharbin/tinyos-install-tools/lib/tinyos
java $JNI RssiDemo -comm serial@/dev/ttyUSB1:iris
