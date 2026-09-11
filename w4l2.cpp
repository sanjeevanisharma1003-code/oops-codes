// #include<iostream>
// using namespace std;
// //OPERATOR OVERLOADING-SAME OPERATOR FOR DIFFERENT PURPOSES
// class Test{
//     int num;
//     public:
//     Test(){
//         num=8;
//     }
//     void operator ++(){
//         num=num+2;
//     }
//     void display(){
//         cout<<" THE VALUE OF NUM: "<<num;
//     }
// };



// int main()
// {
//     Test t;
//     ++t; //why t++not working
//     t.display();
//     return 0;
// }



// //CONSTRUCTOR OVERLOADING-which constructor to be called when an object is created will be decided
// //based on the number of arguments
// #include<iostream>
// using namespace std;
// class Person{
//     int age;
//     public:
//     Person(){ //Default constructor
//         age=17;
//     }
//     Person(int a){
//         age=a;//Parameterized constructor
//     }
//     int getage(){
//         return age;
//     }
// };

// int main()
// {
//     Person p1,p2(65);
//     cout<<"age of p1 :"<<p1.getage()<<endl;
//     cout<<"age of p2 :"<<p2.getage()<<endl; 

//     return 0;
// }



#include<iostream>
using namespace std;
class Matrix{
    private:
    int rows,cols;
    int** data;
    public:
    Matrix(int r,int c){
        rows=r;
        cols=c;
    //dynamically allocate memory
    data=new int*[rows]; //pointer array ex -rows=3 then it creates a poiner array with 3 pointers 
    for  (int i=0;i<rows;i++){
        data[i]=new int [cols];
    }
}
void inputmatrix(){
    cout<<"enter the elements: "<<endl;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>data[i][j];
        }
    }
}
void displaymatrix(){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }
}
Matrix operator*(const Matrix& other){
    if (cols!=other.rows){
        cout<<"matrix multiplication not possible "<<endl;
        exit(1);
    }
    Matrix result(rows,other.cols);
    for(int i=0;i<rows;i++){
        for (int j=0;j<other.cols;j++){
            result.data[i][j]=0;
            for (int k=0;k<cols;k++){
                result.data[i][j]+=data[i][k]*other.data[k][j];
            }
        }
    }
    return result;
}
    //DESTRUCTOR
~Matrix(){
    for(int i=0;i<rows;i++){
        delete[]data[i];
    }
    delete[]data;
}

};
int main()
{
    Matrix m1(2,2);
    Matrix m2(2,2);
    m1.inputmatrix();
    m2.inputmatrix();
    Matrix result=m1 *m2;
    result.displaymatrix();

    return 0;
}