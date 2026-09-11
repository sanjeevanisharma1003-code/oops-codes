//LIBRARY MANAGEMENT SYSTEM
// #include<iostream>
// #include<string>
// #include<map>
// class Book{
//     private:
//     int id;
//     std::string title;
//     public:
//     Book():id(0),title("Unknown"){}
//     Book(int id,std::string title){
//         this->id=id;
//         this->title=title;
//     }
//     int getid()const{
//         return id;
//     }
//     std::string gettitle()const{
//         return title;
//     }
//     bool operator<(const Book& other) const{
//         return id<other.id;
//     }
//     bool operator==(const Book& other)const{
//         return id==other.id && title==other.title;
//     }
// };
// class Library{
//     private:
//     std::map<int,Book> library;
//     public:
//     void display(){
//         for(const auto& entry:library){
//             std::cout<<"ID: "<<entry.first<<" Title: "<<entry.second.gettitle()<<std::endl;
//         }
//     }
//     void search(int id){
//         auto it=library.find(id);
//         if(it!=library.end()){
//             std::cout<<"found id: "<<it->first<<" ,title: "<<it->second.gettitle()<<std::endl;
//         }
//         else{
//             std::cout<<"not found"<<std::endl;
//         }
//     }
//     void addbook(int id,const Book& book){
//         library[id]=book;
//     }
// };
// int main()
// {
//     Library obj;
//     obj.addbook(1,Book(1,"c++ primer"));
//     obj.addbook(2,Book(2,"effective stl"));
//     obj.addbook(3,Book(3,"clean code"));
//     obj.display();
//     obj.search(2);

//     return 0;
// }


//STOCK CLASS IMPLEMENTATION
#include<iostream>
#include<unordered_map>
#include<string>
#include<iomanip>
class Stock{
    private:
    std::string symbol;
    double price;
    public:
    Stock(){
        symbol="";
        price=0.0;
    }
    Stock(std::string sym,double pr){
        symbol=sym;
        price=pr;
    }
    std::string getsymbol()const{
        return symbol;
    }
    double getprice()const{
        return price;
    }
    Stock& operator+=(double change){
        price+=change;
        return *this;
    }
};
std::unordered_map<std::string,Stock> stocktracker;
void display(){
    std::cout<<std::setw(10)<<"Symbol"<<std::setw(10)<<"Price"<<std::endl;
    for(const auto& pair:stocktracker){
        std::cout<<std::setw(10)<<pair.second.getsymbol()<<std::setw(10)<<pair.second.getprice()<<std::endl;
    }
}
int main(){
    stocktracker["aapl"]=Stock("aapl",500);
    stocktracker["goog"]=Stock("goog",1500);
    stocktracker["msft"]=Stock("msft",50);
    display();
    return 0;
}