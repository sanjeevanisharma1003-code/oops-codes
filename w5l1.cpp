//ENCAPSULATION
// #include<iostream>
// using namespace std;
// class Adder{
//     private:    //this is encapsulation and total cannot be accessed directly
//     int total;
//     public:
//     Adder(int i=0){
//         total=i;
//     }
//     int gettotal(){
//         return total;
//     }
//     void addnum(int n){
//         total+=n;
//     }
// };
// int main()
// {
//     Adder a;
//     a.addnum(10);
//     a.addnum(20);
//     cout<<a.gettotal();
//     return 0;
// }



//GETTER AND SETTER FUNCTIONS
#include<iostream>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    void setradius(double r){
        if(r>0){
            radius=r;
        }
        else{
            cout<<"enter a valid value "<<endl;
        }
    }
    double getradius(){
        return radius;
    }
    double calculatearea(){
        return 3.14*radius*radius;
    }  
};
int main()
{
    Circle c;
    c.setradius(5.0);
    cout<<c.getradius()<<endl;
    cout<<c.calculatearea()<<endl;

    return 0;
}