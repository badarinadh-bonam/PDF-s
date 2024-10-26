import java.util.*;
public class ConstructorOverloading {
    int a,b,c;
    ConstructorOverloading(){
        a=b=c=0;
    }ConstructorOverloading(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }ConstructorOverloading(ConstructorOverloading obj){
        a=obj.a;
        b=obj.b;
        c=obj.c;
    }int Sum(){
        return a+b+c;
    }
    public static void main(String[] args){
        Scanner readme=new Scanner(System.in);
        int x,y,z;
        x=readme.nextInt();
        y=readme.nextInt();
        z=readme.nextInt();
        ConstructorOverloading o1=new ConstructorOverloading();
        ConstructorOverloading o2=new ConstructorOverloading(x, y, z);
        ConstructorOverloading o3=new ConstructorOverloading(o2);
        System.out.println(o1.Sum());
        System.out.println(o2.Sum());
        System.out.println(o3.Sum());
    }
}
