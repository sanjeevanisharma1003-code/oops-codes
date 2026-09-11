//APPENDING TO A FILE IN C++
// #include<fstream>
// #include<iostream>
// using namespace std;
// int main()
// {
//     ofstream myfile("example.txt",ios::app);
//     if (myfile.is_open()){
//         myfile<<"appended!";
//         myfile.close();
//     }
//     return 0;
// }


// Multiplying two numbers by taking input from an input file and storing 
// the output in an output file

// #include<fstream>
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     ifstream inputfile("input.txt");
//     if(inputfile.is_open()){
//         inputfile>>num1>>num2;
//         inputfile.close();
//     }
//     else{
//         cerr<<"unable to open input file";
//         return 1;
//     }
//     int result=num1*num2;
//     ofstream outputfile("output.txt");
//         if(outputfile.is_open()){
//             outputfile<<result;
//             outputfile.close();
//         }
//         else{
//             cerr<<"unable to open outputfile";
//             return 1;
//         }
//     cout<<"result in output.txt"<<result<<endl;
//     return 0;

// }

// manipulating input n output formats

// #include<fstream>
// #include<iomanip>
// using namespace std;
// int main(){
//     ofstream myfile("data.txt");
//     if(myfile.is_open()){
//         myfile<<fixed<<setprecision(2);
//         myfile<<"Value: "<<123.456<<"\n";
//         myfile.close();

//     }
//     return 0;
// }

#include<fstream>
#include<iomanip>//use of left ,setw
#include<iostream>//cerr
#include<string>
using namespace std;
int main(){
    ofstream myfile("output.txt");
    if(myfile.is_open()){
        myfile<<left<<setw(20)<<"Name"<<setw(10)<<"Score"<<endl;//setw gives character space
        myfile<<left<<setw(20)<<"ram"<<setw(10)<<85<<endl;//left aligns text to the left
        myfile<<left<<setw(20)<<"shyam"<<setw(10)<<75<<endl;
        myfile<<left<<setw(20)<<"mohan"<<setw(10)<<65<<endl;
        myfile.close();
    }
    else{
        cerr<<"Unable to open the file";
    }
    return 0;
}