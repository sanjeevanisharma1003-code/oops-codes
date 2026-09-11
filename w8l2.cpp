// TEMPLATE CLASS IN C++
// #include<iostream>
// template<typename T1,typename T2>
// class Pair{
//     T1 first;
//     T2 second;
//     public:
//     Pair(T1 a,T2 b):first(a),second(b){};
//     T1 getfirst()const{
//         return first;
//     }
//     T2 getsecond()const{
//         return second;
//     }
// };
// int main()
// {
//     Pair<int,double> mypair(10,20.5);
//     std::cout<<"first: "<<mypair.getfirst()<<std::endl;
//     std::cout<<"second: "<<mypair.getsecond()<<std::endl;
//     return 0;
// }



// Specialized Template Class
// #include<iostream>
// #include<string>
// template<typename T>
// class Storage{
//     T value;
//     public:
//     Storage(T val): value(val){};
//     T getvalue() const{
//         return value;
//     }
// };
// //SPECIALIZTION FOR std::string
// template<>
// class Storage<std::string>{
//     std::string value;
//     public: 
//     Storage(std::string val):value(val){}
//     void print() const{
//         std::cout<<"String storage: "<<value<<std::endl;
//     }

// };
// int main(){
//     Storage<int>intStorage(100);
//     std::cout<<"Integer storage: "<<intStorage.getvalue()<<std::endl;
//     Storage<std::string> strStorage("hello,world!!");
//     strStorage.print();
//     return 0;
// }

//template class with default parameters
//template<typename T=int,typename U=double>