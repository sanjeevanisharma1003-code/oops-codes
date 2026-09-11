// import java.io.BufferedReader;
// import java.io.FileReader;
// import java.io.IOException;

// public class w7l2 {
//     public static void main(String[] args) {
//         try{
//             BufferedReader reader=new BufferedReader(new FileReader("example.txt"));
//             String Line;
//             while ((Line=reader.readLine())!=null){
//                 System.out.println(Line);
//             }
//             reader.close();
//         }
//         catch(IOException e){
//             e.printStackTrace();
//         }
//     }
    
// } 


// checking if a file exists in java
import java.io.File;
public class w7l2{
    public static void main(String[] args) {
        File file=new File("example.txt");
        if(file.exists()){
            System.out.println("FILE EXISTS\n");
        }
        else{
            System.out.println("File does not exist\n");
        } 
    }
}