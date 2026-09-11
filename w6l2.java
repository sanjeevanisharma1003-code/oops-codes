//EXCEPTIONS IN JAVA -->
//CHECKED AND UNCHECKED EXCEPTIONS
//checked exceptions- they are checked during compile time
//unchecked exceptions- they are checked during run time
//example of unchecked(arithmetic) exception


// public class w6l2{
//     public static void main(String[] args) {
//         int a=50/0;
//         System.out.println(a);

//     }
// }


//unchecked(nullpointer) exception


// public class w6l2{
//     public static void main(String[] args) {
//         String s=null;
//         System.out.println(s.length());
//     }
// }

//unchecked(numberformat) exception

// public class w6l2{
//     public static void main(String[] args) {
//         String s="abc";
//         int i=Integer.parseInt(s);
//         System.out.println(i);
//     }
// }


//unchecked (arrayindexoutofbound) exception

// public class w6l2{
//     public static void main(String[] args) {
//         int a[]=new int[5];
//         a[10]=50;                        //same thing is possible in c++ but not in java
//         System.out.println(a[10]);
//     }
// }

//use of throw catch...

public class w6l2{
    public static void main(String[] args) {
        try {
            int data=50/0;
        } catch ( ArithmeticException e) {
            System.out.println(e);
        }
        
    }
}