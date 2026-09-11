//MULTIPLE CATCHING IN JAVA
// public class w6l3 {
//     public static void main(String[] args) {
//         try {
//            int a[]=new int[5];
//            a[5]=100/0; 
//         }
//         catch(ArithmeticException e){
//             System.out.println("task 1");
//         }
//         catch(ArrayIndexOutOfBoundsException e){
//             System.out.println("task 2");
//         }
//         catch(Exception e){
//             System.out.println("task completed");
//         }
//     }
// }
//there is a hierarchy in catches and at a time only one exception occur catched by
//only one catch block

//MULTIPLE TRY
public class w6l3{
    public static void main(String[] args) {
        int c=100;
        try {
          try {
              System.out.println("going to divide");
              int b=39/0;
          } catch (ArithmeticException e) {
            System.out.println(e);
          }  
          try {
              int a[]=new int[5];
              a[5]=4;
          } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
          }
          System.out.println("other codes");
          c=c/0;
        } 
        catch(Exception e){
            System.out.println("Handeled");
        }
    }
}