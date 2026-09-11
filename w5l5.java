// abstract class Shape{
//     abstract void draw();
// }
// class Rectangle extends Shape{
//     void draw(){
//         System.out.println("drawing rectangle");
//     }

// }
// class Circle extends Shape{
//     void draw(){
//         System.out.println("draawing circle");
//     }
// }
// public class w5l5 {
//     public static void main(String[] args) {
//         Shape s=new Circle();
//         s.draw();
//     }
    
// }
// abstract class with constructor,methods
// abstract class Bike{
//     Bike(){
//         System.out.println("Bike is created");
//     }
//     abstract void run();
//     void changegear(){
//         System.out.println("gear changed...");
//     }
// } 
// class Honda extends Bike{
//     void run(){
//         System.out.println("running safely...");
//     }
// }
// public class w5l5{
//     public static void main(String[] args) {
//         Bike b=new Honda(); 
//         b.run();
//         b.changegear();
//     }
// }


// //INTERFACE IN JAVA 
// // FOR 100% ABSTRACTION.... and  supports multiple inheritance
// it is a blueprint of a class which only contains static constants and abstract methods
// even if we dont mention interface by default assume all method as abstract and static const  


// interface printable{
//     void print(); //abstract
// }
// class A implements printable{
//     public void print(){
//         System.out.println("learning interface...");
//     }
// }
// public class w5l5{
//     public static void main(String[] args) {
//         A obj=new A();
//         obj.print();
//     }
// }


//MULTIPLE INHERITANCE IN JAVA
// interface printable{
//     void print();
// }
// interface showable{
//     void show();
// }
// class A implements printable,showable{
//     public void print(){
//         System.out.println("Printing interface...");
//     }
//     public void show(){
//         System.out.println("Showing interface...");
//     }
// }
// public class w5l5{
//     public static void main(String[] args) {
//         A obj= new A();
//         obj.print();
//         obj.show();
//     }
// }


//now multiple inheritance is possible in interface but not in class why?
//because in interface there is no ambiguity as implementation is in implementation class ex:->

interface printable{
    void print();
}
interface showable{
    void print();
}
class A implements printable,showable{
    public void print(){
        System.out.println("printing interface...");
    }
}
public class w5l5{
    public static void main(String[] args) {
        A obj=new A();
        obj.print();
    }
}