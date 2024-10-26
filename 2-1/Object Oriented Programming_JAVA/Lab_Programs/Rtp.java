class A{
    void display(){
        System.out.println("This is super class");
    }
}class B extends A{
    void display(){
        System.out.println("This is sub class");
    }
}class C extends B{
    void display(){
        System.out.println("This is another sub class");
    }
}
class Rtp{
    public static void main(String[] args){
        A a1=new A();
        B b1=new B();
        C c1=new C();
        A ref;
        ref=c1;
        ref.display();
    }
}