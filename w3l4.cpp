// #include<iostream>
// using namespace std;
// class A{
//     protected:
//     int a;
//     public:
//     void get_a(int n){
//       a=n;
//     }
// };
// class B{
//     protected:
//     int b;
//     public:
//     void get_b(int n){
//         b=n;
//     }   
// };
// class C:public A,public B{
//     public:
//     void display(){
//         cout<<"VALUE OF A : "<<a<<endl;
//         cout<<"VALUE OF B: "<<b<<endl;
//         cout<<"addition of a and b: "<<a+b<<endl;
//     }
// };

// int main()
// {
//     C c1;
//     c1.get_a(5);
//     c1.get_b(11);
//     c1.display();
//     return 0;
// }


// //AMBIGUITY
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void display(){
//         cout<<"class a"<<endl;
//     }
// };
// class B{
//     public:
//     void display(){
//         cout<<"class b"<<endl;
//     }
// };
// class C:public A,public B{
//     public:
//         //AMBIGUITY
// //         void view(){
// //             display();
// //         }
//     void view(){
//         A::display();//explicitly call display of class a 
//         B::display();//and of class b
//     }
// };
// int main(){
//     C c;
//     c.view();
//     return 0;
// }

//HIERARCHIAL INHERITANCE
#include<iostream>
using namespace std;
class Shape{
    public:
    int a;
    int b;
    void get_data(int n,int m){
        a=n;
        b=m;
    }
};
class Rectangle :public Shape
{
    public:
    int rect_area(){
        int result =a*b;
        return result;
    }
};
class Triangle: public Shape
{
    public:
    float tri_area()
    {
        float result=0.5*a*b;
        return result;
    }
};
int main(){
    Rectangle r1;
    Triangle t1;
    int length,breadth,base,height;
    cout<<"Enter the length and breadth : "<<endl;
    cin>>length>>breadth;
    r1.get_data(length,breadth);
    int m= r1.rect_area();
    cout<<"area of rectangle: "<<m<<endl;
    cout<<"Enter base and height: "<<endl;
    cin>>base>>height;
    t1.get_data(base,height);
    float  n= t1.tri_area();
    cout<<"area of triangle: "<<n<<endl;
    return 0;

}