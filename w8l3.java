
//Generic class
// public class w8l3<T> {
//     private T value;
//     public w8l3(T value){
//         this.value=value;
//     }
//     public T getvalue(){
//         return value;
//     }
//     public void setvalue(T value){
//         this.value=value;
//     }
//     public static void main(String[] args) {
//         w8l3<Integer> obj1=new w8l3<>(180);
//         w8l3<String> obj2=new w8l3<>("generics in java");
//         System.out.println("integer value:"+obj1.getvalue());
//         System.out.println("string value:"+obj2.getvalue());

//     }
    
// }


// Generic method
// public class w8l3{
//     public static <T> void printarray(T[] array){
//         for(T element:array){
//             System.out.print(element+" ");
//         }
//         System.out.println( );
//     }
//     public static void main(String[] args) {
//         Integer[] intarray={1,2,3,4};
//         String[] stringarray={"java","generics","example"};
//         System.out.println("Integer array:");
//         printarray(intarray);
//         System.out.println("String array:");
//         printarray(stringarray);

//     }
// }


// public class w8l3{
//     public static<T extends Comparable<T>> T findmax(T a,T b ,T c){
//         T max=a;
//         if(b.compareTo(max)>0)max=b;
//         if(c.compareTo(max)>0)max=c;
//         return max;
//     }
//     public static void main(String[] args) {
//         System.out.println("Max of 3,5,4: "+findmax(3,5,4));
//         System.out.println("Max of A,Z,M: "+findmax("A","Z","M"));

//     }
// }

// import java.util.Arrays;
// public class w8l3{
//     public static<T> void swap(T[] array,int index1,int index2){
//         T temp=array[index1];
//         array[index1]=array[index2];
//         array[index2]=temp;
//     }
//     public static void main(String[] args) {
//         Integer[] intarray={1,2,3,4};
//         swap(intarray,0,3); //we are calling swap without any object
//         //because it is sattic function and so it belongs to class n can be called
//         //without object
//         System.out.println("Swapped integer array: "+Arrays.toString(intarray));
//         String[] strarray={"A","B","C","D"};
//         swap(strarray,1,2);
//         System.out.println("Swapped string array: "+Arrays.toString(strarray));
//     }
// }

// public class w8l3{
//     public static <T> int countoccurences(T[] array, T element){
//         int count=0;
//         for(T item:array){
//             if (item==element){ //or (item.equals(element))
//                 count++;
//             }
//         }
//         return count;

//     }
//     public static void main(String[] args) {
//         Integer[] intarray={1,2,3,2,5,2,7};
//         System.out.println("occurences of 2 in array: "+countoccurences(intarray, 2));
//     }
// }


public class w8l3{
    public static <T extends Number> double mean(T[] numbers){
        double sum=0.0;
        for(T num:numbers){
            sum+=num.doubleValue();
        }
        return sum/numbers.length;

    }
    public static void main(String[] args) {
        Integer[] intnumbers={1,2,3,4,5};
        System.out.println("Mean of intnumbers: "+ mean(intnumbers));
    }
}
