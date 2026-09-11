// TEMPLATES AND GENERICS
// templates are used to create functions and classes with any data type
// generics are used in java to allow type safety while allowing 
// operations on different data types
// Template function
// #include<iostream>

// template<typename T>
// T max(T a,T b){
//     return (a>b)?a:b;
// }
// int main()
// {
//     std::cout<<"max of 3 and 7: "<<max(3,7)<<std::endl;
//     std::cout<<"max of 2.5 and 3.2: "<<max(3.2,2.5)<<std::endl;
//     // std::cout<<"max of 2 and 3.2: "<<max(3.2,2)<<std::endl; this won't work
    
//     return 0;
// }


// #include<iostream>

// template<typename T,typename T1>
// T max(T a,T1 b){
//     return (a>b)?a:static_cast<T1>(b);
// }
// int main()
// {
//     std::cout<<"max of 7.8 and 4: "<<max(7.8,4)<<std::endl;
//     std::cout<<"max of 5.5 and 2: "<<max(5.5,2)<<std::endl;
//     std::cout<<"max of 5 and 5.2: "<<max(5,5.2)<<std::endl; 
//     std::cout<<"max of 5.0 and 5.2: "<<max(5.0,5.2)<<std::endl; 
    
//     return 0;
// }


// // Template class
// #include<iostream>
// template<typename T>
// class Storage{
//     T value;
//     public:
//     Storage (T val): value(val){};
//     T getvalue()const{
//         return value;
//     }
// };
// int main(){
//     Storage<int> intstorage(100);
//     Storage<double> doublestorage(99.8);
//     std::cout<<"INTEGER IS: "<<intstorage.getvalue()<<std::endl;
//     std::cout<<"DOUBLE IS: "<<doublestorage.getvalue()<<std::endl;
//     return 0;
// }


