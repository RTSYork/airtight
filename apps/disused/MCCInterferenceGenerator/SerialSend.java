import net.tinyos.util.*;
import net.tinyos.packet.*;
import java.io.*;

public class SerialSend {
    public static void main(String[] argv) throws IOException
    {
        PacketSource sfw = BuildSource.makePacketSource();
        sfw.open(PrintStreamMessenger.err);

	// Standard packet structure
        byte[] packet = new byte[3];
	packet[0] = 20;
	packet[1] = 20;
	packet[2] = 20;

        try {
            sfw.writePacket(packet);
        }
        catch (IOException e) {
            System.exit(2);
        }
        Dump.printPacket(System.out, packet);
        System.out.println();
        System.exit(0);
    }
}    
