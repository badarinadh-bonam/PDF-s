class Thread1 extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            try{
                Thread.sleep(1000);
            }catch(InterruptedException e){}
            System.out.println("good morning");
        }
    }
}
public class Alive {
    public static void main(String[] args){
        Thread1 o1=new Thread1();
        o1.start();
        Thread2 o2=new Thread2();
        o2.start();
        Thread3 o3=new Thread3();
        o3.start();
        System.out.println(o1.isAlive());
        System.out.println(o2.isAlive());
        System.out.println(o3.isAlive());
        try{
            
            o1.join();
            o2.join();
            o3.join();
        }catch(InterruptedException e){}
    }
}
