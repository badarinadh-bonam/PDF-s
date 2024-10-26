class A{
    int i,j;
    A(int x,int y){
        i=x;
        j=y;
    }
    void display(){
        System.out.println(i+" "+j);
    }
}class B extends A{
    B(int x, int y) {
        super(x, y);
    }
    int k;
    
    void show(){
        System.out.println(k);
    }void sum(){
        System.out.println(i+j+k);
    }
}
class SingleInheritance {
    public static void main(String[] args){
        A a1=new A(4,5);
        B b1=new B(4,5);
        b1.k=6;
        b1.display();
        b1.show();
        b1.sum();
    }    
}
