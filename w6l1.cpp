//Exception handling in c++->mechanism to handle runtime errors  
//such as syntax error,runtime error or logical error



// #include<iostream>
// using namespace std;
// double division(int a,int b){
//     if(b==0){
//         throw"Division by zero";
//     }
//     return a/b;
// }

// int main()
// {
//     int l=1729;
//     int m=0;
//     double n=0;
//     try{
//         n=division(l,m); //usual block
//         cout<<n<<endl;
//     }
//     catch(const char* mssg){
//         cerr<<mssg<<endl;
//     }
//     return 0;
// }  


//C++ STANDARD EXCEPTIONS
//look in video

//USER DEFINED EXCEPTIONS
 

#include<iostream>
#include<exception>
using namespace std;
class Myexception:public exception{
    public:
    const char * what() const throw()
    {
        return "Attempt to divide by zero";
    }
};

int main()
{
    try{
        int l,m;
        cout<<"enter two numbers";
        cin>>l>>m;
        if(m==0){
            Myexception n;
            throw n;
        }
        else{
            cout<<"l/m="<<l/m<<endl;
            cout<<"50% oop done"<<endl;
        }
    }
        catch(exception& e){
            cerr<<e.what();
        }
}
