//CREATING THREADS
#include<iostream>
#include<thread>
void printnum(int n){
    for(int i=1;i<=n;++i){
        std::cout<<i<<" ";
    }
}
int main()
{
    std::thread t1(printnum,10);
    t1.join();
    return 0;
}

