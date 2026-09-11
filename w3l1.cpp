// #include<iostream>
// using namespace std;
// class Line{
//     public:
//         double length;
//         void setlength(double len);
//         double getlength();
// };
// double Line::getlength(){
//     return length;
// }
// void Line::setlength(double len){
//     length=len;
// }
// int main()
// {
//     Line line;
//     line.setlength(6);
//     cout<<"length of line :"<<line.getlength()<<endl;
//     line.length=5;
//     cout<<"length of line :"<<line.getlength()<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Box{
//     public:
//         double length;
//         void setwidth(double wid);
//         double getwidth(); 
//     private:
//         double width;

// };
// double Box::getwidth(){
//     return width;
// }
// void Box::setwidth(double wid){
//     width=wid;
// }
// int main(){
//     Box box;
//     box.length=10;
//     cout<<"length of box: "<<box.length<<endl;
//     // box.width-XXXX
//     box.setwidth(11);
//     cout<<"width of box: "<<box.getwidth()<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Box{
//     protected:
//         double width;
// };
// class SmallBox:Box{
//     public:
//         void setSmallWidth(double wid);
//         double getSmallWidth(void);
// };
// double SmallBox::getSmallWidth(void){
//     return width;
// }
// void SmallBox::setSmallWidth(double wid){
//     width=wid;
// }
// int main()
// {
//     SmallBox box;
//     box.setSmallWidth(6);
//     cout<<"width of box: "<<box.getSmallWidth();
//     return 0;
// }
//INHERITANCE
// #include<iostream>
// using namespace std;
// class Account{
//     public:
//         float salary=60000;
// };
// class Programmer: public Account{
//     public:
//         float bonus=5000;
// };

// int main()
// {
//     Programmer p1;
//     cout<<p1.salary<<endl;
//     cout<<p1.bonus<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
class A{
    int a=4;
    int b=5;
    public:
    int mul(){
        int c=a*b;
        return c;

    }
};
class B:private A{   // B has all the properties and function of a but they are private for b
    public:
    void display(){
        int result=mul();
        cout<<"Multiplication :"<<result<<endl;

    }
};
int main()
{
    B b;
    b.display(); 
    
    return 0;
}