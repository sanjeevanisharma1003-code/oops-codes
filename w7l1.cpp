// file handling 
//ifstream-read
//ofstream-write
//fstream-both read and write
// #include<fstream>
// using namespace std;

// int main()
// {
//     ofstream myfile("./files/example.txt");//myfile is a object of ofstream
//     if(myfile.is_open()){           
//         myfile<<"Writing!\n";
//         myfile<<"Welcome to file handling\n";
//         myfile.close();
//     }
    
//     return 0;
// }


//to read from a file in c++
// #include<fstream>
// #include<iostream>
// using namespace std;
// int main(){
//     ifstream myfile("./files/example.txt");
//     string Line;
//     if(myfile.is_open()){
//         while(getline(myfile,Line)){
//             cout<<Line<<'\n';
//         }
//         myfile.close();
//     }
//     return 0;
// }
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream myfile("example.txt");
    string Line;
    if(myfile.is_open()){
        while(getline(myfile,Line)){
            cout<<Line<<'\n';
        }
        myfile.close();
    }
    return 0;
}

