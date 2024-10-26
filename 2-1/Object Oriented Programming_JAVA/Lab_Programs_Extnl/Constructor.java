class ConstructorDemo{
    int l,b,h;
    ConstructorDemo(int x,int y,int z){
        l=x;
        h=y;
        b=z;
    }
    void volume(){
        System.out.println(l*b*h);
    }
}
class Constructor {
    public static void main(String[] args){
        ConstructorDemo obj1=new ConstructorDemo(4,5,6);
        obj1.volume();
    }
    
}
