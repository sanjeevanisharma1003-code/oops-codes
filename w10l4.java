import java.util.ArrayList;
import java.util.List;
class Subject{
    private List<Observer> observers=new ArrayList<>();
    public void attach(Observer observer){
        observers.add(observer);
    }
    public void notify(String message){
        for(Observer observer:observers){
            observer.update(message);
        }
    }
}
interface Observer{
    void update(String message);
}
class ConcreteObserver implements Observer{
    public void update(String message){
        System.out.println("Observer received: "+message);
    }
}
public class w10l4 {
    public static void main(String[] args) {
        Subject subject=new Subject();
        Observer ob1=new ConcreteObserver();
        Observer ob2=new ConcreteObserver();
        subject.attach(ob1);
        subject.attach(ob2);
        subject.notify("Hello Observers!!");
    }
    
}
