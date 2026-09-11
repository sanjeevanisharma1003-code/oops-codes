//VIRTUAL FUNCTIONS
//1.without virtual function
// #include<iostream>
// using namespace std;
// class A{
//     int x=5;
//     public:
//     void display(){               //AS THIS IS NON VIRTUAL OUTPUT WILL BE OF BASE CLASS AND WILL
//                                   //DEPEND ON POINTER TYPE I.E. *a
//         cout<<"Value of x is "<<x<<endl;
//     }
// };
// class B:public A{
//     int y=10;
//     public:
//     void display(){
//         cout<<"Value of y is "<<y<<endl;
//     }
// };
// int main()
// {
//     A *a;
//     B b;
//     a=&b;
//     a->display();
//     b.display();

//     return 0;
// }

// //2.WITH VIRTUAL FUNCTION
// #include<iostream>
// using namespace std;
// class A{
//     int x=5;
//     public:
//     virtual void display(){               //AS THIS IS VIRTUAL, OUTPUT WILL BE OF derived CLASS AND WILL
//                                   //DEPEND ON object TYPE I.E. b
//         cout<<"Value of x is "<<x<<endl;
//     }
// };
// class B:public A{
//     int y=10;
//     public:
//     void display(){
//         cout<<"Value of y is "<<y<<endl;
//     }
// };
// int main()
// {
//     A *a;
//     B b;
//     a=&b;
//     a->display();                          //this output.....
//     b.display();

//     return 0;
// }



//pure virtual function-which is declared in base class but has no definition for that class
//a class containing pure virtual function cannot be instsantiated and thus is called abstract base class
//a pure virtual funciton is declared in base class and has no definition in there
//hence it is defined in derived class
#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show()=0;   //pure virtual function
};
class Derived:public Base{
    public:
    void show(){
        cout<<"derived class is derived from base class"<<endl;

    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr=&d;
    bptr->show();       //as bptr has virtual function the output e=will be of derived class
    return 0;
}