 #!/bin/sh

JNI=-Djava.library.path=/home/jharbin/tinyos-install-tools/lib/tinyos
java $JNI SerialSend -comm serial@/dev/ttyUSB3:iris
