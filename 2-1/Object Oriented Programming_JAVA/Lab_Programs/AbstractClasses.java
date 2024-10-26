abstract class shape{
    int a,b;
    shape(int x,int y){
        a=x;
        b=y;
    }
    abstract double area();
}
class rectangle extends shape{
    rectangle(int x,int y){
        super(x,y);
    }double area(){
        return a*b;
    }
}
class triangle extends shape{
    triangle(int x,int y){
        super(x,y);
    }double area(){
        return 0.5*a*b;
    }
}
class AbstractClasses{
    public static void main(String[] args){
        rectangle a1=new rectangle(4,5);
        shape s;
        s=a1;
        System.out.println(s.area());
    }
}