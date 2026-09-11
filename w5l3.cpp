//ABSTRACTION


// #include<iostream>
// using namespace std;
// class Bankaccount{
//     private:
//     string accountnumber;
//     double balance;
//     public:
//     Bankaccount(string accountnumber,double initialbalance){
//         this->accountnumber=accountnumber;
//         balance=initialbalance;
//     }
//     void checkbal(){
//         cout<<"your current balance= "<<balance<<endl;
//     }
//     void withdraw(double amount){
//         if(amount>=0 && amount<balance){
//             balance-=amount;
//             cout<<amount <<" withdrawn successfully"<<endl;
//         }
//         else{
//             cout<<"insufficient amount";
//         }
//     }
//     void deposit(double amount){
//         balance+=amount;
//         cout<<amount <<" deposited successfully"<<endl;
//     }

// };
// int main()
// {
//     Bankaccount MYacc=Bankaccount("78864454",500);
//     MYacc.checkbal();
//     MYacc.deposit(100);
//     MYacc.withdraw(50);
//     MYacc.checkbal();
//     return 0;
// }

#include<iostream> 
using namespace std;
class Employee{
    private:
    string empid;
    double salary;
    string name;
    public:
    Employee(string id,string empname,double empsalary){
        empid=id;
        name=empname;
        salary=empsalary;

    }
    void display(){
        cout<<"employee id: "<<empid<<endl;
        cout<<"employee name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    void updatesalary(double newSalary){
        if(newSalary>0){
            salary=newSalary;

        }
        else{
            cout<<"invalid input";
        }
    }
    string getname(){
        return name;
    }
    double getsalary(){
        return salary;
    }


};
class Manager: public Employee{
    private:
    double bonus;
    public:
    Manager(string id,string empname,double empsalary,double empbonus):
        Employee(id,empname,empsalary)
        {
        bonus=empbonus;
        }
    void displaytotalcomp(){
        cout<<"manager name: "<<getname();
        cout<<"total compensation  (salary +bonus): "<<(bonus+getsalary())<<endl;
    }
};
int main(){
    Employee e1("78787","jay",80000);
    e1.display();
    e1.updatesalary(60000);
    e1.display();
    Manager m1("6474","hr",60000,700);
    m1.displaytotalcomp();

}