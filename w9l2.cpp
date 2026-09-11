//Associative containers
//stores elements in sorted order using keys for faster retrieval
//ex-set,multiset,map,multimap

//SET N MULTISET
//set-stores unique elements in sorted order
//multiset-stores in sorted order but allows duplicates
//key operations-insert,erase,find,count(count occurences,used in multiset)
//set ex-code->
// #include<iostream>
// #include<set>
// int main()
// {
//     std::set<int> numbers={10,30,20,20};//duplicate values are ignored
//     numbers.insert(40);
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     std::cout<<std::endl;
//     return 0;
// }

//multiset ex-code->
// #include<iostream>
// #include<set> 
// int main()
// {
//     //using multiset
//     std::multiset<int> numbers={10,20,20,30};
//     numbers.insert(20);
//     for (int num:numbers){
//         std::cout<<num<<" ";
//     }

//     return 0;
// }


//MAP n MULTIMAP
//map stores key value pairs with unique keys,sorted by keys
//multimap stores key value pairs but allow duplicate keys
//operations-insert,erase,find,count
//map ex-code->
// #include<iostream>
// #include<map>
// int main()
// {
//     std::map<std::string,int> agemap;
//     agemap["Alice"]=25;
//     agemap["Bob"]=30;
//     for(const auto& pair:agemap){
//         std::cout<<pair.first<<": "<<pair.second<<std::endl;
//     }
//     return 0;
// }

//multimap ex-code->
#include<iostream>
#include<map>
int main()
{
    std::multimap<std::string,int> agemap;
    agemap.insert({"Alice",25});
    agemap.insert({"Alice",28});
    for(const auto& pair:agemap){
        std::cout<<pair.first<<": "<<pair.second<<std::endl;
    }
    return 0;
}