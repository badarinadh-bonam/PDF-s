class Box{
    double width,length,height;
    Box(double x,double y,double z){
        width=x;
        length=y;
        height=z;
    }
    double volume(){
        return width*length*height;
    }
}
class Constructor{
    public static void main(String[] args){
        Box obj=new Box(2,2,2);
        Box obj2=new Box(4,4,4);
        System.out.println("volume of first box is "+obj.volume());
        System.out.println("volume of second box is "+obj2.volume());

    }
}