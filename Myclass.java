// SERIALIZATION AND DESERIALIZATION
//w7l5.java->
import java.io.*;
public class Myclass implements Serializable {
    private static final long serialVersionUID=1L;
    int data;
    public Myclass(int data){
        this.data=data;
    }
    public void serialize(String filename){
        try{
            ObjectOutputStream oos=new ObjectOutputStream(new FileOutputStream(filename));
            oos.writeObject(this);
            System.out.println("Data serialized to "+ filename);
        }
        catch(IOException e){
            System.err.println("Error during Serialization: "+e.getMessage());
        }
    }
    public static Myclass deserialize(String filename){
        try{
            ObjectInputStream ois=new ObjectInputStream(new FileInputStream(filename));
            return(Myclass) ois.readObject();
        }
        catch(IOException |ClassNotFoundException e){
            System.err.println("Error during Serialization: "+e.getMessage());
            return null;
        }
    }
    
}
