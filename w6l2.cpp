//calcutor with exception handling


// #include<iostream>
// #include<stdexcept>
// using namespace std;
// double divide(int a,int b){
//     if(b==0){
//         throw runtime_error("Division by zero");
//     }
//     return (double) a/b;
// }



// int main()
// {

//     int x,y;
//     char operation;
//     try{
//         cout<<"enter first number: "<<endl;
//         cin>>x;
//         cout<<"enter second number: "<<endl;
//         cin>>y;
//         cout<<"enter the operation :"<<endl; 
//         cin>>operation;
//         double result;
//     switch (operation)
//     {
//         case '+':
//         result=x+y;
//         break;
//         case '-':
//         result=x-y;
//         break;
//         case '*':
//         result=x*y;
//         break;
//         case '/':
//         result=divide(x,y);
//         break;
//         default:
//         throw invalid_argument("invalid operation...");

//     }
//     cout<<"\n result: "<<result<<endl;
// }
// catch(const exception& e){
//     cerr<<"\n error: "<<e.what()<<endl;
// }
//     return 0;
// }

//EXCEPTION HANDLING IN BANK ACC MANAGEMENT SYSTEM
 
#include<iostream>
#include<stdexcept>
using namespace std;
class Bankaccount{
    private:
    string accholder;
    double balance;
    public:
    Bankaccount(string name,double initialbal){
        if(initialbal<0){
            throw invalid_argument("balance cannot be negative...");
        }
        balance=initialbal;
        accholder=name;
    }
    void deposit(double amount){
        if (amount<0){
            throw invalid_argument("amount cannot be negative...");
        }
        balance+=amount;
        cout<<"deposited "<<amount<<" successfully..."<<endl;
        cout<<"available balnce: "<<balance<<endl;
    }
    void withdraw(double amount){
        if(amount>balance){
            throw runtime_error("insufficient balance...");
        }
        if(amount<=0){
            throw invalid_argument("amount cannot be negative...");
        }
        balance-=amount;
        cout<<"withdrawn "<<amount<<" successfully"<<endl;
        cout<<"available balance:  "<<balance<<endl;
    }
    void display(){
        cout<<accholder<<endl;
        cout<<balance<<endl;
    }
};
int main(){
    try{
        Bankaccount account("Yogesh",30000);
        account.display();
        account.deposit(5000);
        account.withdraw(1000);
        account.display();
    }
    catch(const invalid_argument& e){
        cerr<<"\n Error: "<<e.what()<<endl;
    }
    catch(const runtime_error& e){
        cerr<<"\n Error: "<<e.what()<<endl;
    }
}