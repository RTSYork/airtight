 #!/bin/sh
JNI=-Djava.library.path=/home/jharbin/tinyos-install-tools/lib/tinyos
java $JNI net.tinyos.tools.PrintfClient -comm serial@/dev/ttyUSB1:iris
