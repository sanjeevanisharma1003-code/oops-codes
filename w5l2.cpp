//ENCAPSULATION
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    char grades;
    int rollnum;
    public:
    Student(string stname,char stgrades,int strollnum){
        name=stname;
        setgrade(stgrades);  //we don't want someob=ne to directly give grades
        rollnum=strollnum;
    }
    string getname(){
        return name;
    }
    void setname(string stname){
        name=stname;
    }
    void setgrade(char stgrade){
        if(stgrade>='A' && stgrade<='F'){
            grades=stgrade;
        }
        else{
            cout<<"invalid grade";
        }

    }
    void display(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Student grade: "<<grades<<endl;
        cout<<"Roll number: "<<rollnum<<endl;
    }
};
int main()
{
    Student s1("Priti",'B',90);
    s1.display();
    s1.setgrade('A');
    s1.setname("Himanshi");
    cout<<"updated details:"<<endl;
    s1.display();

    
    return 0;
}