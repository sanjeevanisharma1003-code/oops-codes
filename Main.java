class Shape{
        private String color;
        public Shape(String color){
            this.color=color;
        }
        public void setcolor(String color){
            this.color=color;
        }
        public String getcolor(){
            return color;
        }
        public double calculatearea(){
            return 0;
        }
}
class Circle extends Shape{
    private double radius;
    public Circle(String color,double radius){
        super(color);
        this.radius=radius;
    }
    @Override
    public double calculatearea(){
        return Math.PI*radius*radius;
    }
}
class Rectangle extends Shape{
    private double length;
    private double width;
    public Rectangle(String color,double length,double width){
        super(color);
        this.length=length;
        this.width=width;

    }
    @Override
    public double calculatearea(){
        return length*width;

    }

}
public class Main{
        public static void main(String[] args) {
            Circle circle=new Circle("red", 5.0);
            System.out.println("Circle color: "+circle.getcolor());
            System.out.println("Circle area: "+circle.calculatearea());
            Rectangle rectangle=new Rectangle("Blue", 4.0, 6.0);
            System.out.println("\nRectangle color: "+rectangle.getcolor());
            System.out.println("Rectangle area: "+ rectangle.calculatearea());
        }
}