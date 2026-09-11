//FILE HANDLING IN JAVA

import java.io.FileWriter;
import java.io.IOException;

public class w7l1j {
    public static void main(String[] args) {

       try (FileWriter myWriter = new FileWriter(args[0])) {
           myWriter.write("Good coding!" + args[1]);
           chinu();
           Test test = new Test();
           test.chinu1();
        } 
        catch(IOException e){
            e.printStackTrace();
        }
    }
    
    public static void chinu() {
        System.out.println("Chinu");
    }
}

class Test {
    public static void main(String[] args) {
        w7l1j.chinu();   // required
    }

    public void chinu1() {
        System.err.println("Chinu1");
    }
}