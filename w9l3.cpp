//Unordered containers-use hash tables for fast access without maintaining a specific order
//ex-
//unordered set-stores unique keys without maintaining order
//unordered multiset-allows duplicate keys without maintaining order
//unordered map-key value pairs with unique keys in no particular order
//unordered multimap-key value pairs with duplicate keys in no particular order


//UNORDERED SET AND MULTISET
//operations-
//insert,erase,find,count
//unordered set ex code->
// #include<iostream>
// #include<unordered_set>
// int main()
// {
//     std::unordered_set<int> numbers={10,20,30,20};
//     numbers.insert(25);
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     return 0;
// }

//UNORDERED MAP AND MULTIMAP
//operations-
//insert,erase,find,count
//unordered map ex code->
// #include<iostream>
// #include<unordered_map>
// int main()
// {
//     std::unordered_map<std:: string,int> agemap;
//     agemap.insert({"alice",25});
//     agemap.insert({"bob",28});
//     for (const auto& pair:agemap){
//         std::cout<<pair.first<<": "<<pair.second<<std::endl;
//     }
//     return 0;
// }





//ITERATORS IN STL-object providing an abstract way to access and traverse elements in stl containers
//iterators act as pointers to elements in containers
//operations->
//accesing elements(using dereferencing with *),incrementing,decrementing
//types->
//input iterator-reads element
//output iterator-writes element
//forward iterator-reads and writes element
//bidirectional iterator-moves forward n backward
//random access iterator-accesses any element in constant time
//funtions->
//begin(),end()-point to elemt past the last elmnt
//USING ITERATOR WITH VECTOR
// #include<iostream>
// #include<vector>
// int main()
// {
//     std::vector<int> numbers={10,20,30};
//     std::vector<int> ::iterator it;
//     for(it=numbers.begin();it!=numbers.end();++it){
//         std::cout<<*it<<" ";
//     }
//     std::cout<<std::endl;
//     return 0;
// }


//REVERSE ITERATOR
//funtions->
//rbegin-points to the last element
//rend-points to the element before first element
// #include<iostream>
// #include<list>
// int main(){
//     std::list<int> numbers={10,20,30};
//     std::list<int>::reverse_iterator rit;
//     for(rit=numbers.rbegin();rit!=numbers.rend();++rit){
//         std::cout<<*rit<<" ";
//     }
//     std::cout<<std::endl;
//     return 0;
// }




//STREAM ITERATORS-enable working directly with stream as containers
//functions->
//istream,ostream
//INSERT ITERATORS-insert element
//functions->
//back_inserter,front_inserter,inserter
//Insert iterator ex code-
// #include<iostream>
// #include<set>
// #include<iterator>
// int main()
// {
//     std::set<int> set1={1,2,3};
//     std::set<int> set2={4,5,6};
//     //insert elements of set 2 into set 1
//     std::insert_iterator<std::set<int>> inserter(set1,set1.end());
//     std::copy(set2.begin(),set2.end(),inserter);
//     //print combined set
//     for (int num:set1){
//         std::cout<<num<<" ";
//     }
//     return 0;
// }
