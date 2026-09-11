#include<iostream>
#include<cmath>
using namespace std;
class Calculator{
    public:
        static double rectarea(double length,double width)
        {
            return length*width;
        }
        static double rectper(double length,double width)
        {
            return 2*(length+width);
        }
        static double circarea(double radius)
        {
            return M_PI *radius*radius;
        }
        static double circumference(double radius)
        {
            return 2*M_PI*radius;
        }
};
int main()
{
    double length=5.0;
    double width=3.0;
    double radius=4.0;
    Calculator c;
    cout<<c.rectarea(length,width)<<endl;
    cout<<c.rectper(15,20.0)<<endl;
    
    return 0;
}