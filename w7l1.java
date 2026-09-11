import java.io.FileWriter;
import java.io.IOException;
public class w7l1 {
    public static void main(String[] args) {
        try {
            FileWriter myWriter=new FileWriter("example.txt");
            myWriter.write("Writing!");
            myWriter.close();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    
}
