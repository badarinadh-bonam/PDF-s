class A{
    int i,j;
    void display(){
        System.out.println("i: "+i+"j :"+j);
    }
}class B extends A{
    int k;
    void show(){
        System.out.println("k: "+k);
    }
}
class C extends B{
    void sum(){
        System.out.println(i+j+k);
    }
}

public class SingleInheritance{
    public static void main(String[] args){
        C obj1=new C();
        obj1.i=2;
        obj1.j=4;
        obj1.k=6;

        obj1.display();
        obj1.show();
        obj1.sum();
    }
}