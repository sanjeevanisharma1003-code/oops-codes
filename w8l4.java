//GENERICS IN JAVA
//calculate gcd
// public class w8l4 {
//     public static<T extends Number> T gcd(T a,T b){
//         long num1=a.longValue();//cannot perform % on generic type i.e T 
//         long num2=b.longValue();
//         while(num2!=0){
//             long temp=num2;
//             num2=num1%num2;
//             num1=temp;  
//         }
//         return (T) Long.valueOf(num1);//converting num1 to object long and then typecasting
//         //                               it to object T because gcd returns T object

//     }
//     public static void main(String[] args) {
//             Integer a=56,b=98;
//             Long x=123456789L, y=987654321L;
//             System.out.println("GCD of 56 and 98: "+gcd(a,b));
//             System.out.println("GCD of 123456789 and 987654321: "+gcd(x,y));

//     }

    
// }
//T inherits from Number which has objects->
//Integer,Double etc
//not primitive types like int,double
//and so T also return objects 

// public class w8l4{
//     public static<T extends Number> double dotproduct(T[] vectora, T[] vectorb){//bounded type
//         if(vectora.length !=vectorb.length){
//             throw new IllegalArgumentException("Vectors must be of the same length");
//         }
//         double sum=0.0;
//         for (int i=0;i<vectora.length;i++){
//             sum+=vectora[i].doubleValue() *vectorb[i].doubleValue();
//         }
//         return sum;
//     }
//     public static void main(String[] args) {
//         Integer[] vectora={1,2,3};
//         Integer[] vectorb={4,5,6};
//         Double[] vectorc={1.1,2.2,3.3};
//         Double[] vectord={4.4,5.5,6.6};
//         System.out.println("Dotproduct of intarray: "+dotproduct(vectora, vectorb));
//         System.out.println("Dotproduct of doublearray: "+dotproduct(vectorc, vectord));
//     }
// }


//Bounded type in Java generics
// <T extends Number>
// Wildcard type in java generics
//upper bounded wild card
//(List<? extends Number>list)



import java.util.List;
public class w8l4{
    public static void printList(List<? extends Number> list){
        for (Number n:list){
            System.out.print(n+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        List<Integer> intlist =List.of(1,2,3,4);
        List<Double> doublelist=List.of(1.1,2.2,3.3);
        System.out.println("Integer list: ");
        printList(intlist);
        System.out.print("Double list: ");
        printList(doublelist);
    }
}