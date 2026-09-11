//METHOD OVERRIDING-Run time polymorphism
// class Vehicle{
//     void run(){
//         System.out.println("Vehicle is running");
//     }
// }
// class Bike extends Vehicle{
//     void run(){
//         System.out.println("Bike is running");
//     }
// }
// public class w4l5 {
//     public static void main(String[] args) {
//         Bike b=new Bike();
//         b.run();
        
//     }
// }



// class X
// {
//     public void methodA(){
//         System.out.println("Method A of class x");
//     }

// }
// class Y extends X{
//     public void methodA(){
//         System.out.println("Method A of class Y");
//     }
//     //public void methodb(){
//     //    System.out.println("Method B of class Y");
//     //}
// }
// public class w4l5{
//     public static void main(String[] args) {
//         X x1=new X();//x reference and object x         UPCASTING
//         X x2=new Y();//x referencee and y object 
// // xy 's method A is the method A under class Y because during compile time xy is checked under X
// //but during run time it is under Y that is reference is checked during compilation and object type during runtime
//         x1.methodA();
//         x2.methodA();
//         //x2.methodb(); THIS WILL SHOW AN ERROR AS DURING COMPILATION X2 IS CONSIDERED AN OBJECT 
//         //OF CLASS X BUT X HAS NO METHOD B SO UPCASTING WON'T WORK
//     }
// }


