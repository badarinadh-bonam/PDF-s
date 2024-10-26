class mythread implements Runnable{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("instde run");
        }
    }
}
class sample{
    public static void main(String args[]){
        mythread obj=new mythread();
        Thread ob=new Thread(obj);
        ob.start();
        for(int j=0;j<=5;j++){
            System.out.println("inside masin");
        }
    }
}