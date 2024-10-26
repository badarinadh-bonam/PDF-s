abstract class Shape{
    int x,y;
    Shape(int a,int b){
        x=a;
        y=b;
    }abstract float area();
}
class Rectangle extends Shape{
    Rectangle(int a,int b){
        super(a,b);
    }float area(){
        return x*y;
    }
}class Triangle extends Shape{
    Triangle(int a,int b){
        super(a,b);
    }float area(){
       return (x*y)/2;
    }
}
public class Areas {
    public static void main(String[] args){
        Rectangle r=new Rectangle(4,5);
        Triangle t=new Triangle(4,5);
        Shape s;
        s=r;
        System.out.println("Rectangle Area :"+s.area());
        s=t;
        System.out.println("Rectangle Area :"+s.area());
   } 
}
