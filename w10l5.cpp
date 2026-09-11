//STRUCTURAL PATTERNS
//defines how objects and classes can be combined to form large structures
//ADAPTER PATTERN 
//converting the interface of a class into another interface clients expect
#include<iostream>
#include<string>
class UIcomponent{
    public:
    virtual ~UIcomponent()=default;
    virtual std::string render() const=0;
};
class Window:public UIcomponent{
    public:
    std::string render() const override{
        return "Window";
    }
};
class Decorator:public UIcomponent{
    protected:
    UIcomponent* component;
    public:
    Decorator(UIcomponent* comp):component(comp){}
    virtual ~Decorator(){
        delete component;
    }
    std::string render()const override{
        return component->render();
    }
};
class Scrollbardecorator:public Decorator{
    public:
    Scrollbardecorator(UIcomponent* comp):Decorator (comp){}
    std::string render()const override{
        return component->render()+" with Scrollbar";
    }
};
class BorderDecorator:public Decorator{
    public:
    BorderDecorator(UIcomponent* comp):Decorator(comp){}
    std::string render() const override{
        return component->render()+" with border";
    }
};
int main(){
    UIcomponent* simplewindow= new Window();
    UIcomponent* windowwithscrollbar=new Scrollbardecorator(simplewindow);
    UIcomponent* decoratedwindow=new BorderDecorator(windowwithscrollbar);
    std::cout<<decoratedwindow->render()<<std::endl;
    delete decoratedwindow;
    return 0;
}