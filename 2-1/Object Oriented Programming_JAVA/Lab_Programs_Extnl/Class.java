class ClassDemo {
    int height,breadth,length;
    void box(){
        System.out.println(height*breadth*length);
    }
}
class Class{
    public static void main(String[] args){
        ClassDemo obj1=new ClassDemo();
        obj1.length=2;
        obj1.breadth=2;
        obj1.height=2;
        obj1.box();
    }
}
