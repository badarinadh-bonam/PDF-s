class A{
    int x;
}
class B extends A{
    int x;
    B(int a,int b){
        super.x=a;
        x=b;
    }void show(){
        System.out.println("First method: "+ super.x);
        System.out.println("Second method: "+ x);
    }
}
class Super{
    public static void main(String[] args){
        B obj = new B(4,5);
        obj.show();
    }
}