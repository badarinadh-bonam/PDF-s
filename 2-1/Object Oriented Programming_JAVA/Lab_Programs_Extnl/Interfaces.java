interface A{
    void show();
}interface B{
    void display();
}
class C implements A,B{
    public void display(){
        System.out.println("This is display method");
    }
    public void show(){
        System.out.println("This is show method");
    }
}
public class Interfaces {
    public static void main(String[] args){
        C obj1=new C();
        obj1.show();
    }
}
