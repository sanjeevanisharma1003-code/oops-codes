// STL Algorithms
//include searching,sorting,modifying,replacing
//types->
//non modifying-find(),count()
//modifying-replace(),transform(),remove()
//NON MODIFYING ALGORITHMS
//searching and counting in a vector->
// #include<iostream>
// #include<vector>
// #include<algorithm>
// int main()
// {
//     std::vector<int> numbers={10,20,30,40,50}; 
//     //using find to search for a value
//     auto it=std::find(numbers.begin(),numbers.end(),50);
//     if(it!=numbers.end()){
//         std::cout<<"found "<<*it<<std::endl;
//     }
//     else{
//         std::cout<<"not found"<<std::endl;
//     }
//     int count=std::count(numbers.begin(),numbers.end(),20);
//     std::cout<<"Count of 20: "<<count<<std::endl;
//     return 0;
// }

//sorting and partitioning
//sorting ex code->
// #include<iostream>
// #include<vector>
// #include<algorithm>
// int main()
// {
//     std::vector<int> numbers={40,10,30,20,50};
//     //sort in ascending order
//     std::sort(numbers.begin(),numbers.end());
//     for (int num:numbers){
//         std::cout<<num<<" ";
//     }
//     std::cout<<std::endl;
//     //sort in descending order using lambda function
//     std::sort(numbers.begin(),numbers.end(),[](int a,int b){return a>b;});
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     return 0;
// }
//Modifying algorithms
//using transform algorithm
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int> numbers={1,2,3,4,5};
    std::vector<int> squared(numbers.size());
    std::transform(numbers.begin(),numbers.end(),squared.begin(),[](int x){return x *x;});
    for (int num:squared){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    return 0;
}