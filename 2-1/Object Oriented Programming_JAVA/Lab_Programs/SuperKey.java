class A{
    int x=10;
    A(){
        System.out.println("This the super class");
    }
}
class B extends A{
    int x=20;
    B(){
        super();
        System.out.println("value of x in super class"+super.x);
        System.out.println("value of x in sub class "+x);
    }
}
public class SuperKey{
    public static void main(String args[]){
        B obj=new B();
    }
}