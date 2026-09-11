#include<iostream>
using namespace std;
class Complex{
    float real;
    float imag;

public:
    void setvalues(float r,float i){
        real=r;
        imag=i;
    }
    static Complex multiply(const Complex &c1, const Complex &c2){
        Complex result;
        result.real=c1.real*c2.real-c1.imag*c2.imag;
        result.imag=c1.real*c2.imag+c1.imag*c2.real;
        return result;
    }
    void display(){
        if(imag>=0){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<" - "<< -imag<<"i"<<endl;
        }
    }
};
int main(){
    Complex c1,c2,result;
    float real1,imag1,real2,imag2;
    cout<<"enter real and imaginary part of first number: ";
    cin>>real1>>imag1;
    cout<<"enter real and imaginary part of second number: ";
    cin>>real2>>imag2;
    c1.setvalues(real1,imag1);
    c2.setvalues(real2,imag2);
    result=Complex::multiply(c1,c2);
    cout<<"RESULT : ";
    result.display();
    return 0;

}
