class A{
    int i,j;
    void display(){
        System.out.println(i+" "+j);
    }
}class B extends A{
    int k;
    
    void show(){
        System.out.println(k);
    }
}class C extends B{
    void sum(){
        System.out.println(i+j+k);
    }
}
public class MultipleInheritance{
    public static void main(String[] args){
        C obj=new C();
        obj.i=1;
        obj.j=2;
        obj.k=3;
        obj.sum();

    }
}