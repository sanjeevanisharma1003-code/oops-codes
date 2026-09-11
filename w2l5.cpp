// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//     int id;
//     string name;
//     int age;
//     double salary;
//     public:
//     Employee(){      //DEFAULT CONSTRUCTOR
//         id=0;
//         name="Unknown";
//         age=18;
//         salary=0;
//         cout<<"default constructor called"<<endl;

//     }
//     Employee(int eid,string ename,int eage,double esalary){
//         id=eid;
//         name=ename;
//         age=eage;
//         salary=esalary;
//         cout<<"parameterised constructor invoked";
//     }
//     void display(){
//         cout<<"id= "<<id<<endl;
//         cout<<"name= "<<name<<endl;
//         cout<<"salary= "<<salary<<endl;
//         cout<<"age= "<<age<<endl;
    
//     }
//     void update_salary(double newsalary){
//         salary=newsalary;
//         cout<<"salary of emplouee "<<id <<"updated to "<<salary;  
//     }
// };
// int main()
// {
//     Employee e1;
//     e1.display();
//     e1.update_salary(30000);
//     e1.display();
//     Employee e2(99,"Ashwin",38,30000);
//     e2.display();
//     cout<<"parameterizedconstructor called";

    
//     return 0;
// }