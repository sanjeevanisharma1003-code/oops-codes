// #include<iostream>
// using namespace std;
// class Complex{
// private:
//     double real;
//     double imaginary;
// public:
//     Complex(double r, double i){
//         real=r;
//         imaginary=i;
//     }
//     Complex add(Complex c1,Complex c2){
//         double sumreal=c1.real+c2.real;
//         double sumimaginary=c1.imaginary+c2.imaginary;
//         return Complex(sumreal,sumimaginary);
//     }
//     void display(){
//         cout<<real<<" + "<<imaginary<<" i "<<endl;
//     }
// };
// int main()
// {
//     double userreal,userimaginary;
//     cout<<"enter real part";
//     cin>>userreal;
//     cout<<"enter imaginary part";
//     cin>>userimaginary;
//     Complex usercomplex(userreal,userimaginary);
//     Complex constructorcomplex(3.5,2.0);
//     Complex result=result.add(usercomplex,constructorcomplex);
//     result.display();
//     return 0;

// }

//COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class Example{
// public:
//     int a;
//     Example(int x) //parameterized constructor
//     {
//         a=x;
//     }
//     Example(Example &ob){   //COPY CONSTRUCTOR
//         a=ob.a;
//     }
// };


// int main()
// {
//     Example e1(36);
//     Example e2(e1);
//     cout<<e2.a;
//     return 0;
// }
//DESTRUCTORS IN C++
// #include<iostream>
// using namespace std;
// class Employee{
// public:
//     Employee(){
//         cout<<"constructor invoked"<<endl;
//     }
//     ~Employee(){
//         cout<<"destructor invoked"<<endl;
//     }
// };
// int main()
// {
//     Employee e1;
//     cout<<&e1;
//     Employee e2;
//     cout<<&e2;
//     return 0;
// }   
//COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class Example{
//     public:
//     int a;
//     Example(int x){    //parameterized constructor
//         a=x;
//     }
//     Example(Example &ob){   //copy constructor
//         a=ob.a;
//     }

// };
// int main(){
//     Example e1(36);
//     Example e2(e1);
//     cout<<e2.a;
//     return 0;
// }