// Formatting data in java
// import java.io.FileWriter;
// import java.io.IOException;

// public class w7l4 {
//     public static void main(String[] args) {
//         try {
//             FileWriter writer=new FileWriter("data.txt");
//             writer.write(String.format("Value: %.2f",123.456));
//             //string.format is used because we neeed decimal precision
//             //also the result is in integer
//             writer.close();

            
//         } 
//         catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
    
// }

// import java.io.*;
// import java.util.Formatter;
// public class w7l4{
//     public static void main(String[] args) {
//     try {
//        BufferedWriter writer=new BufferedWriter(new FileWriter( "output.txt")) ;
//        Formatter formatter=new Formatter(writer);
//        formatter.format("%-20s %10s%n","Name","Score");
//        formatter.format("%-20s %10d%n","ram",78);
//        formatter.format("%-20s %10d%n","shyam",85);
//        formatter.format("%-20s %10d%n","mohan",95); 
//        formatter.close();
//     } 
//     catch (IOException e) {
//         e.printStackTrace();
//     }
//     }
// }



//Reading character by character in java
// import java.io.*;
// public class w7l4{
//     public static void main(String[] args) {
//         try {
//             System.out.println("Reading character by character:\n");
//             FileReader fr=new FileReader("output.txt");
//             int i;
//             while ((i=fr.read())!=-1){
//                 char c=(char)i;
//                 if(c=='\n'){
//                     System.out.println("\\n");
//                 }
//                 else if(c==' '){
//                     System.out.println('_');
//                 }
//                 else{
//                     System.out.println(c);
//                 }

//             }

            
//         } 
//         catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
// }

// Reading line by line in java
// import java.io.*;
// public class w7l4 {
//     public static void main(String[] args) {
//         try {
//             BufferedReader br=new BufferedReader(new FileReader("output.txt"));
//             String line;
//             while((line=br.readLine())!=null){
//                 System.out.println("Line: "+line);
//             }
//        } 
//         catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
    
// }


//Reading from a csv file
import java.io.*;
public class w7l4{
    public static void main(String[] args) {
        try {
            BufferedReader reader=new BufferedReader(new FileReader("data.csv"));
            String line;
            while((line=reader.readLine())!=null){
                String[] cells=line.split(",");
                for (String cell: cells){
                    System.out.print(cell+"\t");

                }
                System.out.println();

            }
        } 
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}