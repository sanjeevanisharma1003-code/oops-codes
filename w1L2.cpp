#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    void insert(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }

};
int main()
{
    Employee e1;
    e1.insert(18,"hirdesh",100000);
    e1.display();
    return 0;
}