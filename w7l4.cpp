//Reading character by character in c++
// #include<fstream>
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     ifstream myfile("output.txt");
//     char c;
//     if (myfile.is_open()){
//         while(myfile.get(c)){
//             if(c=='\n'){
//                 cout<<"\\n";
//             }
//             else if(c==' '){
//                 cout<<"_";
//             }
//             else{
//                 cout<<c;
//             }

//         }
//     }
//     myfile.close();
// }


// Reading line by line in c++
// #include<fstream>
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     ifstream myfile("output.txt");
//     if(myfile.is_open()){
//         string line;
//         while(getline(myfile,line)){
//             cout<<"Line: "<<line<<endl;
//         }
//         myfile.close();

//     }
//     return 0;
// }


//Reading from a csv file in c++
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    ifstream csvfile("data.csv");
    string line,cell;
    if(csvfile.is_open()){
        while(getline(csvfile,line)){
            stringstream lineStream(line);
            while(getline(lineStream,cell,',')){
                cout<<cell<<"\t";
            }
            cout<<endl;
        }
        csvfile.close();

    }
    else{
        cerr<<"file unable to open";
    }
    return 0;
}