class A{
    void display(){
        System.out.println("This is Super class");
    }
}class B extends A{
    void display(){
        System.out.println("this is sub class");
    }
}/class C extends B{
    void display(){
        System.out.println("This is class C");
    }
}
public class Polymorphism {
    public static void main(String[] args){
        A o1=new A();
        B o2=new B();
        C o3=new C();
        o3.display();
    }    
}
