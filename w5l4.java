//ABSTRACT CLASS IN JAVA
//DECLARED USING ABSTRACT KEYWORD
//can have both abstract n non abstract methods
//abstraction- hiding implementation details and showing only functionality to user
//->two ways of achieving abstraction are interface,and abstract classes
//abstract method in java is just like pure virtual function in c++
//abstract class may have both abstract and non abstract methods they should be extended(have derived class)
//abstract method in base class is not defined no implementation

abstract class Bike{
    abstract void run();
}
class Honda extends Bike{
    void run(){
        System.out.println("running safely");
    }
}
public class w5l4 {
    public static void main(String[] args) {
        Bike obj=new Honda();     //Bike obj=new Bike(); not possible 
                              //because u can't instantiate an object under abstract class
        obj.run(); 
    }
}
