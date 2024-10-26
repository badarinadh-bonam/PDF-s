class ConstructorOverloadingDemo{
    int l,b,h;
    ConstructorOverloadingDemo(){
        System.out.println(l+b+h);
    }
    ConstructorOverloadingDemo(int x,int y,int z){
        l=x;
        b=y;
        h=z;
    }
    ConstructorOverloadingDemo(ConstructorOverloadingDemo obj1){
        l=obj1.l;
        b=obj1.b;
        h=obj1.h;
    }
    void sum(){
        System.out.println(l+b+h);
    }
}
public class ConstructorOverloading {
    public static void main(String[] args){
        ConstructorOverloadingDemo o1=new ConstructorOverloadingDemo();
        ConstructorOverloadingDemo o2=new ConstructorOverloadingDemo(4,5,6);
        ConstructorOverloadingDemo o3=new ConstructorOverloadingDemo(o2);
        o1.sum();
        o2.sum();
        o3.sum();

        
    }
}
