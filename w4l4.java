//METHOD OVERLOADING-compile time polymorphism
// class Calculator{
//     public int add(int a,int b){
//         return a+b;
//     }
//     public int add(int a,int b,int c){
//         return a+b+c;
//     }
//     public double add(double a,double b){
//         return a+b;
//     }
// }
// public class w4l4{
//     public static void main(String[] args) {
//         Calculator calc=new Calculator();
//         System.out.println("Sum of 2 integers: "+calc.add(10,20));
//         System.out.println("Sum of 3 integers: "+calc.add(10,20,30));
//         System.out.println("Sum of 2 doubles: "+calc.add(10.5,20.5));

//     }
// }


// class Maxcalculator{
//     public int max(int a,int b){
//         if(a>b){
//             return a;
//         }
//         else{
//             return b;
//         }
//     }
//     public int max(int a,int b,int c){
//         if(a>b &&a>c){
//             return a;
//         }
//         else if(b>c){
//             return b;
//         }
//         else{
//             return c;
//         }
//     }
// }
// public class w4l4{
//     public static void main(String[] args) {
//         Maxcalculator calculator=new Maxcalculator();
//         System.out.println("maximum of two numbers: "+calculator.max(20,30));
//         System.out.println("max of 3 numbers: " +calculator.max(20,80,100));
//     }
// }


class Student{
    public String name;
    public Student(String name){
        this.name=name;
    }
    public void calculategrade(double percentage){
        if(percentage>=90){
            System.out.println(name+" has secured grade a ");

        }
        else if(percentage>=80){
            System.out.println(name+" has secured grade b ");
        }
        else if(percentage>=70){
            System.out.println(name+ " has secured grade c ");
        }
        else if(percentage>=60){
            System.out.println(name+ " has secured grade d ");
        }
        else {
            System.out.println(name+ " has failed ");
        }
    }
    public void calculategrade(char lettergrade){
        switch(lettergrade){
            case 'A':
                System.out.println(name +" has secured grade A");
                break;
            case 'B':
                System.out.println(name +" has secured grade B");
                break;
            case 'C':
                System.out.println(name +" has secured grade C");
                break;
            case 'D':
                System.out.println(name +" has secured grade D");
                break;
            default:
                System.out.println(name +" has failed");
                break;
            
        }
    }
    public void calculategrade(float gpa){
        if(gpa>=4.0){
            System.out.println(name+ " has secured grade A");
        }
        else if(gpa>=3.0){
            System.out.println(name+ " has secured grade B");
        }
        else if(gpa>=2.0){
            System.out.println(name+ " has secured grade C");
        }
        else if(gpa>=1.0){
            System.out.println(name+ " has secured grade D");
        }
        else{
            System.out.println(name+ " has failed");
        }

    }

}
public class w4l4{
    public static void main(String[] args) {
        Student s=new Student("Sanjeevani");
        s.calculategrade(85.5);
        s.calculategrade('B');
        s.calculategrade(7);
    }
}