class A{
    int x;
}
class B extends A{
    int x;
    B(int a,int b){
        x=a;
        super.x=b;
    }
    void show(){
        System.out.println(x+" "+super.x);
    }
}
public class Super {
    public static void main(String [] args){
        B o1=new B(4,5);
        o1.show();
    }
    
}
