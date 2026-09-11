//CONFIGURATION MANAGER USING SINGLETON PATTERN 
import java.util.HashMap;
public class w10l1{
    private static w10l1 instance;
    private HashMap<String,String> config;
    private w10l1(){
        config=new HashMap<>();
    }
    public static w10l1 getinstance(){
        if(instance==null){
            instance=new w10l1();
        }
        return instance;

    }
    public void setconfig(String key,String value){
        config.put(key,value);
    }
    public String getconfig(String key){
        return config.get(key);
    }
public static void main (String[] args){
    w10l1 cm=w10l1.getinstance();
    cm.setconfig("appname", "singleton app");
    System.out.println("Appname "+cm.getconfig("appname"));

}
}