// import java.io.FileWriter;
// import java.io.IOException;
// public class w7l3{
//     public static void main(String[] args) {
//         try {
//             FileWriter myfile=new FileWriter("examplejava.txt",true);
//             myfile.write("Appended something\n");
//             myfile.close();
            
//         } 
//         catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
// }

// Multiplying two numbers by taking input from an input file and storing 
// the output in an output file

import java.io.*;//installs all packages bufferedread ,bufferwrite,file read,write,ioexception all
public class w7l3{
    public static void main(String[] args) {
        int num1=0,num2=0;//in java initialization is imp
        try{
            BufferedReader reader=new BufferedReader(new FileReader("input.txt"));
            num1=Integer.parseInt(reader.readLine());//parseint because readline gives string
            num2=Integer.parseInt(reader.readLine());//converts str->int
        }
        catch(IOException e){
            System.out.println("unable to take input from input file");
            e.printStackTrace();
            return;
        }
        int result=num1*num2;
        try {
            BufferedWriter writer=new BufferedWriter(new FileWriter("output.txt"));
            writer.write(Integer.toString(result));//tostring because writer wants string
        } catch (IOException e) {
            System.out.println("unable to write output in output file");
            e.printStackTrace();
        }
        System.out.println("Result in output.txt is "+result);
    }
}
        
