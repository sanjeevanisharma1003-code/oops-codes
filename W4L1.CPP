// #include<iostream>
// using namespace std;
// //POLYMORPHISM
// //TWO TYPES
// //1.COMPILE TIME-by function overloading through changing no. and types of arguments
// double area(double radius){
//     return 3.14*radius*radius;
// }
// double area(double length,double width){
//     return length*width;
// }
// double area(double base,double height, bool istriangle){
//     return 0.5*base*height;
// }
// int main()
// {
//     double radius=5.0;
//     double length=10.0, width=4.0;
//     double base=6.0,height=3.0;
//     cout<<"area of circle: "<<area(radius)<<endl;
//     cout<<"area of rectangle: "<<area(length,width)<<endl;
//     cout<<"area of triangle: "<<area(base,height,true)<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
//2.runtime polymorphism/DYNAMIC METHOD DISPATCH -by function overriding when a derived class has a function
// with same name,parameters and return type as base
// class then that function overrides the function in base class
class Animal{
    public:
    void sound(){
        cout<<"this is a generic animal sound "<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"the dog barks "<<endl;
    }
};
class Cat:public Animal{
    public:
    void sound(){
        cout<<"the cat meowsss "<<endl;
    }
};

int main()
{
    Animal animal;
    Dog dog;
    Cat cat;
    animal.sound();
    dog.sound();
    cat.sound();
    return 0;
}