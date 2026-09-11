//OBSERVER PATTERN-establishes a one to many relationship between objects
// #include<iostream>
// #include<string>
// #include<vector>
// class Observer{
//     public:
//     virtual void update(const std::string& message)=0;

// };
// class ConcreteObserver:public Observer{
//     public:
//     void update(const std::string& message)override{
//         std::cout<<"Observer received: "<<message<<std::endl;
//     }

// };
// class Subject{
//     std::vector<Observer*> observers;
//     public:
//     void attach(Observer* observer){
//         observers.push_back(observer);
//     }
//     void notify(const std::string& message ){
//         for(auto observer:observers){
//             observer->update(message);
//         }
//     }
// };
// int main(){
//     Subject subject;
//     ConcreteObserver obs1 ,obs2;
//     subject.attach(&obs1);
//     subject.attach(&obs2);
//     subject.notify("Hello!!");
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string>
// //Abstract class
// class Observer{
//     public:
//     virtual void update(float temperature,float humidity)=0;
// };
// class Phonedisplay:public Observer{
//     public:
//     void update(float temperature,float humidity)override{
//         std::cout<<"TEMP- "<<temperature<<" Degree- "<<humidity<<std::endl;
//     }
// };
// class Weatherstation{
//     std::vector<Observer* >observers;
//     float temperature,humidity;
//     public:
//     void attach(Observer* observer){
//         observers.push_back(observer);
//     }
//     void setm(float temp,float hum){
//         temperature=temp;
//         humidity=hum;
//         notify();
//     }
//     void notify(){
//         for (auto observer:observers){
//             observer->update(temperature,humidity);
//         }
//     }
// };
// int main(){
//     Weatherstation station;
//     Phonedisplay phone;
//     station.attach(&phone);
//     station.setm(25.0,60.0);
//     station.setm(30.0,55.0);
//     return 0;
// }