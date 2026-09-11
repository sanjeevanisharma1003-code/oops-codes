//FACTORY PATTERN
#include<iostream>
#include<string>
class Coffee{
    public:
    virtual void prepare()=0;
};
class Espresso:public Coffee{
    public:
    void prepare()override{
        std::cout<<"Preparing espresso\n";
    }
};
class Capuccino:public Coffee{
    public:
    void prepare()override{
        std::cout<<"Preparing capuccino\n";
    }
};
class Coffeefactory{
    public:
    static Coffee* createcoffee(const std::string& type){
        if(type=="espresso")return new Espresso();
        if(type=="capuccino")return new Capuccino();
        return nullptr;
    }
};
int main()
{
    Coffee* coffee=Coffeefactory::createcoffee("espresso");
    if (coffee) coffee->prepare();
    delete coffee;
    return 0;
}   