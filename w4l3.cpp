// //this keyword
// //1.RESOLVES VARIABLE SHADOWING
// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     int id;
//     string name;
//     float salary;
//     Employee(int id,string name,float salary){
//         this->id=id;
//         this->name=name;
//         this->salary=salary;
//     }
//     void display(){
//         cout<<id <<" "<<name<<" "<<salary<<endl;
//     }
// };

// int main()
// {
//     Employee e1(8,"virat",150000);
//     Employee e2(45,"rohit",60000);
//     e1.display();//gives garabge value when this->not used
//     e2.display();
//     return 0;
// }


// //2.access members and member functions using these
// #include<iostream>
// using namespace std;
// class Test{
//     public:
//     string teststring;
//     void setdata(string teststring){
//         this->teststring=teststring;
//     }
//     void getnsetdata(string str){
//         this->setdata( str);
//         cout<<"the string is : "<<this->teststring<<endl;
//     }
// };

// int main()
// {
//     Test test;
//     test.getnsetdata("THIS IS A TEST");
//     return 0;
// }


// //3.This as a pointer
// //ex without this
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     double real;
//     double imaginary;
//     public:
//     Complex(double r,double i){
//         real=r;
//         imaginary=i;
//     }
//     Complex add(Complex& other){
//         double sumreal=real+other.real;
//         double sumimaginary=imaginary+other.imaginary;
//         return Complex(sumreal,sumimaginary);
//     }
//     void display(){
//         cout<<real<<"+ "<<imaginary<<"i"<<endl;
    
//     }

// };

// int main()
// {
//     Complex c1(5,3),c2(3,8);
//     Complex c3=c1.add(c2);
//     c3.display();

//     return 0;
// }


//using this as a pointer
#include<iostream>
using namespace std;
class Complex{
    private:
    double real;
    double imaginary;
    public:
    Complex(double r,double i){
        real=r;
        imaginary=i;
    }
    Complex showobject(Complex& other){
        double sumreal=real+other.real;
        double sumimaginary=imaginary+other.imaginary;
        //return Complex(sumreal,sumimaginary);
        return*this;//*this shows the object
    }
    void display(){
        cout<<real<<"+ "<<imaginary<<"i"<<endl;
    
    }

};

int main()
{
    Complex c1(5,3),c2(3,8);
    Complex c3=c1.showobject(c2);
    c3.display();

    return 0;
}