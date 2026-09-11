
//     void m()throws IOException{
//         throw new IOException("device error");
//     }
//     void n()throws IOException{
//         m();
//     }

// void p(){
//     try{
//         n();
//      }
//      catch(Exception e){
//         System.out.println("Exception handled...");
//     }
// }

//     public static void main(String args[]){
//         w6l4 l=new w6l4();
//         l.p();

//     }
// }


// import java.io.*;
// class M{
//     void method()throws IOException{
//         //System.out.println("device operstion performed...");
//         throw new IOException("device error");
//     }
// }
// class w6l4{
//     public static void main(String[] args) throws IOException{
//         M m=new M();
//         m.method();
//         System.out.println("normal flow");  

//     }
// }


//CASE STUDY 1
 
// class InvalidMarksException extends Exception{            //USER DEFINED EXCEPTION CLASS
//     public InvalidMarksException(String message){
//         super(message);
//     }
// }
// class Student{
//     private String name;
//     private int marks;
//     public Student(String name,int marks)throws InvalidMarksException{
//         this.name=name;
//         setmarks(marks);
//     }
//     public void setmarks(int marks) throws InvalidMarksException{
//         if(marks<0 || marks>100){
//             throw new InvalidMarksException("MARKS SHOULD BE GREATER THAN 0");
//         }
//         else{
//             this.marks=marks;
//         }
//     }
//     public char getgrade(){
//         if (marks>=90){
//             return 'A';
//         }
//         else if(marks>=80){
//             return 'B';
//         }
//         else if (marks>=70){
//             return 'C';
//         }
//         else if(marks>=60){
//             return 'D';
//         }
//         else{
//             return 'f';
//         }
//     }
//     public void display(){
//         System.out.println(name);
//         System.out.println(marks);
//         System.out.println(getgrade());
//     }
// }
// public class w6l4{
//     public static void main(String[] args) {
//         try {
//             Student s=new Student("Ansh",70);
//             s.display();
//             Student s2=new Student("Jane", 105);
//             s2.display();
        
//         } 
//         catch (InvalidMarksException e) {
//             System.out.println("Exception caught");
//         }
//     }
// }


//CASE STUDY 2
//UNIVERSITY ADMISSION SYSTEM

class InvalidAgeException extends Exception{
    public InvalidAgeException(String message){
        super(message);
    }
}
class InsufficientScoreException extends Exception{
    public InsufficientScoreException(String message){
        super(message);
    }
}

class Student{
    private String name;
    private int age;
    private int score;
    public Student(String name,int age,int score)throws InvalidAgeException,InsufficientScoreException{
        this.name=name;
        setage(age);
        setscore(score);
    }
    public void setage(int age)throws InvalidAgeException{
        if(age<18){
            throw new InvalidAgeException("age must be above 18");
        }
        this.age=age;
    }
    public void setscore(int score)throws InsufficientScoreException{
        if (score<60){
            throw new InsufficientScoreException("Score must be or above for admission");
        }
        this.score=score;
    }
    public void display(){
        System.out.println("Student name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Score: "+score);
        System.out.println("Status: Admitted");
    }
}
class w6l4{
    public static void main(String[] args) {
        try {
           // Student s1=new Student("SHIVANI", 30, 56);
           // s1.display();
            Student s2=new Student("avni",23,80);
            s2.display();
        } catch (InvalidAgeException e) {
            System.out.println("Admission failed");
        }
        catch (InsufficientScoreException e) {
            System.out.println("Admission failed");
        }
        
    }
}
