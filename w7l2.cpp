//checking if a file exists in c++
// #include<fstream>
// #include<iostream>
// using namespace std;
// int main(){
//     ifstream file("yes.txt");
//     if (file){
//         cout<<"FILE EXISTS.\n";
//     }
//     else{
//         cout<<"FILE DOES NOT EXIST.";
//     }
//     return 0;
// }


//Writing in c++
#include <fstream>
using namespace std;
int main()
{
    ofstream myfile("example.txt");
    if (myfile.is_open()){
        myfile<<"LINE 1\n";
        myfile<<"LINE 2\n";
        myfile<<"LINE 3\n";
        myfile.close();
    }
    return 0;
}