#include<iostream>
using namespace std;
class vehicle{//base class
    public:
    string brand;
    void showbrand(){
        cout<<"brand: "<<brand<<endl;
    }
};
class car: public vehicle{//derived class
    public:
    string model;
    void showmodel(){
        cout<<"model : "<<model<<endl;
    }

}; 
int main()
{
    car mycar;
    mycar.brand="toyota";
    mycar.model="corolla";
    mycar.showbrand();
    mycar.showmodel();
    
    return 0;
}