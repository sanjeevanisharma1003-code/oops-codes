//Access modifiers in java
//private,protected,default,public
class Bike{
    protected int speedlimit=80;
}
class Honda extends Bike{
    int speedlimit=100;
    
}

public class w5l3{
public static void main(String[] args) {
        Bike obj=new Honda();
        System.out.println(obj);
        System.out.println(obj.speedlimit);// if upcasting :
        // variables compile time i.e reference class k consider honge
        //aur methods run time i.e object class ki consider hogi
        //variables are not overridden in java  
    }
}
