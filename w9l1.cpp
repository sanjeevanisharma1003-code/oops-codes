//Standard template library-provides c++ template classes ,functions,dsa
//built on three main components
//containers-data structures dtoring objects
//iterators-used for traversing the containers
//algorithms-used for operations like sort ,modify in data structures
//containers are of 3 types
//sequence-accessing objects in sequence
//ex- vector,list,dequeue
//associative-objects arranged in sorted manner accessed using keys
//ex-set,map
//unordered-ex-unordered_set,unordered-map


//CONTAINERS
//VECTOR-dynamic array,allows random access and insertion,deletion at end
//ex code->
// #include<iostream>
// #include<vector>
// int main()
// {
//     std::vector<int> numbers;
//     //add elements to back
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_back(30);
//     //access and print elements
//     for(int i=0;i<numbers.size();++i){
//         std::cout<<"Element at index "<<i<<" :"<<numbers.at(i)<<std::endl;
//     }
//     numbers.pop_back();
//     std::cout<<"After pop back size: "<<numbers.size()<<std::endl;
//     return 0;
// }

//LIST-doubly linked list where each element is connected to the previous and next element
//ex code->
// #include<iostream>
// #include<list>
// int main(){
//     std:: list<int> numbers;
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_front(5);
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     std::cout<<std::endl;
//     numbers.pop_front();
//     numbers.pop_back();
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     std::cout<<std::endl;
//     return 0;
// }

//DEQUE-double ended queue allow random access,insertion and deletion at both ends
// #include<iostream>
// #include<deque>
// int main(){
//     std:: deque<int> numbers;
//     numbers.push_back(10);
//     numbers.push_front(5);
//     numbers.push_back(15);
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     std::cout<<std::endl;
//     numbers.pop_front();
//     numbers.pop_back();
//     for(int num:numbers){
//         std::cout<<num<<" ";
//     }
//     std::cout<<std::endl;
//     return 0;
// }

