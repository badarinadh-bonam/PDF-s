class student{
    int rno;
    String name;
    void insert(int r,String n){
        rno=r;
        name=n;
    }
    void display(){
        System.out.println(rno+" "+name);
    }

}
class sample{
    public static void main(String args[]){
        student s1=new student();
        s1.insert(1,"sai");
        student s2=new student();
        s2.insert(2,"teja");
        s1.display();
        s2.display();
    }
}