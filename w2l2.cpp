// #include<iostream>
// using namespace std;
// int func(){
//     static int count=0;//static variable has a global scope aand so initialization is only once
//     count++;
//     return count;
// }
// int main()
// {
//     cout<<func()<<endl;
//     cout<<func()<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
public:
    void setvalues(int f,int i){
        feet=f;
        inches=i;
    }
    Distance add(Distance d){
        Distance result;
        result.inches=inches+ d.inches;
        result.feet= feet+d.feet+(result.inches/12);
        result.inches%=12;
        return result;
    }
    void display(){
        cout<<feet<<" feet" <<inches<<" inches";
    }


};
int main()
{
    Distance d1,d2,result;
    int feet1,feet2,inches1,inches2;
    cout<<"enter feet and inches of distance 1";
    cin>>feet1>>inches1;
    d1.setvalues(feet1,inches1);
    cout<<"enter feet and inches of distance 2";
    cin>>feet2>>inches2;
    d2.setvalues(feet2,inches2);
    result= d1.add(d2);
    cout<<"result :";
    result.display();


    return 0;
}