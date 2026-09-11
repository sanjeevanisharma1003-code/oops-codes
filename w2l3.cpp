// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     Employee(){
//         cout<<"Default constructor ";
//     }

// };
// int main(void)
// {
//     Employee e1;
//     Employee e2;
//     return 0;
// }
// #include<iostream>
// #include<string>

// using namespace std;
// class Book{
// private:
//     string title;
//     string author;
//     double price;
// public:
//     Book(){                   //DEFAULT CONSTRUCTOR-no parameters
//         title="Unknown";
//         author="Unknown";
//         price=0;
//     }
//     void display(){
//         cout<<"Title: "<<title<<endl;
//         cout<<"Author: "<<author<<endl;
//         cout<<"Price: rs. "<<price<<endl;
//     }
// };
// int main()
// {
//     Book mybook;
//     mybook.display();
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Employee{
// public:
//     int id;
//     string name;
//     float salary;
//     //PARAMETERIZED CONSTRUCTOR
//     Employee(int i,string n,float s){
//         id=i;
//         name=n;
//         salary=s;
//     }
//     void display(){
//         cout<<id<<" "<<name<<" "<<salary<<endl;
//     }

// };

// int main()
// {
//     Employee e1=Employee(8,"rohit",100000);
//     Employee e2=Employee(12,"gautam",80000);
//     e1.display();
//     e2.display();
    
//     return 0;
// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// class Circle{
//     double radius;
// public:
//     Circle(double r){
//         radius=r;
//     }
//     double cal_area(){
//         return 3.14*pow(radius,2);
//     }
// };
// int main()
// {
//     double radius;
//     cout<<"enter radius of circle: ";
//     cin>>radius;
//     Circle mycircle(radius);
//     double area=mycircle.cal_area();
//     cout<<"area :"<<area<<endl;
    
//     return 0;
// }
//DEFINING MEMBER FUNCTION OUTSIDE THE CLASS
#include<iostream>
using namespace std;
class Myclass{
public:
    void printmsg();

};
void Myclass::printmsg(){
    cout<<"helloooo";
}
int main()
{
    Myclass m1;
    m1.printmsg();
    return 0;
}