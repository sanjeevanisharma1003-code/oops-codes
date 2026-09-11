#include<iostream>
using namespace std;
//friend function
class Box{
    private:
        int length;
    public:
        Box(){
            length=0;
        }
        friend int printlength(Box);
    
};
int printlength(Box b)
{
    b.length+=10;
    return b.length;
}
int main(){
    Box b;
    cout<<"length of box "<<printlength(b);
    return 0; 
}
    