#include<iostream>
using namespace std;
class Distance{
    private:
    int meters,centimeters;
    public:
    void getdistance(){
        cout<<"enter meters: ";
        cin>>meters;
        cout<<"enter centimeters: ";
        cin>>centimeters;
    }
    void displaydistance()
    {
        cout<<"distancde:"<<meters<<"meters "<<centimeters<<" centimeters"<<endl;
    }
    Distance add_distance(const Distance& d1,const Distance& d2)
    {
            Distance result;
            result.meters=d1.meters+d2.meters;
            result.centimeters=d1.centimeters+d2.centimeters;
            if(result.centimeters>=100)
            {
                result.meters+=result.centimeters/100;
                result.centimeters=result.centimeters%100;
            }
            return result;
    }

};
int main()
{
    Distance d1,d2,result;
    cout<<"ENTER THE FIRST DISTANCE: "<<endl;
    d1.getdistance();
    cout<<"ENTER THE SECOND DISTANCE: "<<endl;
    d2.getdistance();
    result=result.add_distance(d1,d2);
    cout<<"sum = ";
    result.displaydistance();
    return 0;
}