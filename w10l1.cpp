//design patterns-reusable solutions to common problems in software design,provides blueprint 
//ex-singleton,factory,observer
//types->
//creational
//structural
//beehavioural
// #include<iostream>
// class Singleton{
//     private:
//     static Singleton* instance;//declaring static variable
//     //private constructor
//     Singleton(){}
//     public:
//     static Singleton* getinstance(){
//         if(instance==nullptr){
//             instance=new Singleton();
//         }
//         return instance;
//     }
//     void display(){
//         std::cout<<"Singleton instance: "<<std::endl;
//     }
// };
// Singleton* Singleton::instance=nullptr;//defining static variable 
// int main()
// {
//     Singleton* singleton=Singleton::getinstance();
//     singleton->display();
//     return 0;
// }   

//LOGGER SYSTEM USING SINGLETON 
// #include<iostream>
// #include<string>
// class Logger{
//     private:
//     static Logger* instance;
//     Logger(){}//private constructor
//     public:
//     static Logger* getinstance(){
//         if(instance==nullptr){
//             instance=new Logger();
//         }
//         return instance;
//     }
//     void logmessage(const std::string& message){
//         std::cout<<"Log: "<<message<<std::endl;
//     }
// };
// Logger* Logger::instance=nullptr;
// int main(){
//     Logger* logger=Logger::getinstance();
//     logger->logmessage("Singleton logger initialized");
//     return 0;
// }

//ALTERNATIVE SINGLETON IMPLEMENTATION
// #include<iostream>
// class Singleton{
//     private:
//     Singleton(){};
//     static Singleton instance;
//     public:
//     static Singleton& getinstance(){
//         return instance;
//     }
//     void show(){
//         std::cout<<"Singleton instance created "<<std::endl;
//     }
// };
// Singleton Singleton::instance;
// int main(){
//     Singleton& singleton =Singleton ::getinstance();
//     singleton.show();
//     return 0;
// }


//SINGLETON COUNTER
// #include<iostream>
// class Counter{
//     private:
//     static Counter* instance;
//     int count;
//     Counter(){
//         count=0;
//     }
//     public:
//     static Counter* getinstance(){
//         if(instance==nullptr){
//             instance=new Counter();
//         }
//         return instance;
//     }
//     void increment(){count++;}
//     int getcount(){return count;}
// };
// Counter* Counter::instance=nullptr;
// int main(){
//     Counter* counter=Counter::getinstance();
//     counter->increment();
//     counter->increment();
//     std::cout<<"Count: "<<counter->getcount()<<std::endl;
//     return 0;
// }