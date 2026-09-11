//MULTI LEVEL INHERITANCE
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void eat(){
//         cout<<"eating..."<<endl;
//     }
// };
// class Dog:public Animal
// {
//     public:
//     void bark(){
//         cout<<"barking..."<<endl;
//     }
// };
// class BabyDog :public Dog{
//     public:
//     void weep(){
//         cout<<"weeping..."<<endl;
//     }
// };

// int main()
// {
//     BabyDog d1;
//     d1.eat();
//     d1.bark();
//     d1.weep();
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    int id;
    public:
    Person(string Pname,int Page,int Pid){
        name=Pname;
        age=Page;
        id=Pid;
    }
    void Pdisplay(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class Student:public Person{
protected:
    string department ;
    float gpa;
public:
    Student(string Sname,int Sage,int Sid,string dept,float Sgpa)
        : Person(Sname,Sage,Sid)
    {
        department=dept;
        gpa=Sgpa;
    }
    void Sdisplay(){
        Pdisplay();
        cout<<"Department: "<<department<<endl;
        cout<<"GPA: "<<gpa<<endl;
    }
};
class GraduateStudent:public Student{
    private:
    string researchtopic;
    public:
    GraduateStudent( string Gname,int Gage,int Gid,string dept,float Ggpa,string topic)
    :Student(Gname,Gage,Gid,dept,Ggpa)
    {
        researchtopic=topic;
    }
    void Gdisplay(){
        Sdisplay();
        cout<<"Research Topic: "<<researchtopic<<endl;
    }
};
int main(){
    GraduateStudent G1("Sanjeevani",19,73,"computer science",9,"ai");
    cout<<"graduate student info: "<<endl;
    G1.Gdisplay();
    return 0;
}
