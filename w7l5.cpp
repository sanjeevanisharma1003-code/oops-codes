// SERIALIZATION AND DESERIALIZATION
// #include<fstream>
// #include<iostream>
// using namespace std;
// class Myclass{
//     public:
//     int data;
//     Myclass(int d){
//         data=d;
//     }
//     void serialize(const string &filename){
//         ofstream ofs(filename,ios::binary);
//         if (ofs.is_open()){
//             ofs.write(reinterpret_cast<char*>(&data),sizeof(data));
//             ofs.close();
//             cout<<"Data Serialized to "<<filename<<endl;
//         }
//         else{
//             cerr<<"could not open file for serialization\n";
//         }
//     }
//     void deserialize(const string &filename){
//         ifstream ifs(filename ,ios::binary);
//         if(ifs.is_open()){
//             ifs.read(reinterpret_cast<char*>(&data),sizeof(data));
//             ifs.close();
//             cout<<"data desirialized from "<<filename<<endl;
//         }
//         else{
//             cerr<<"could not open file for deserialization\n.";
//         }
//     }
// };
// int main(){
//     Myclass obj(42);
//     string filename="serialized_data.bin";
//     cout<<"original data: "<<obj.data<<endl;
//     obj.serialize(filename);
//     obj.data=0;
//     cout<<"data after reset: "<<obj.data<<endl;
//     obj.deserialize(filename);
//     cout<<"data after deserialization: "<<obj.data<<endl;
//     return 0;
// }
//w7l5.java is Myclass.java

