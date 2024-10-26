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
class Thread2 extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            try{
                Thread.sleep(2000);
            }catch(InterruptedException e){}
            System.out.println("Hi");
        }
    }
}
class Thread3 extends Thread{
    public void run(){
        for(int i=0;i<5;i++){
            try{
                Thread.sleep(3000);
            }catch(InterruptedException e){}
            System.out.println("Hello");
        }
    }
}
public class Threads {
    public static void main(String[] args){
        Thread1 o1=new Thread1();
        Thread2 o2=new Thread2();
        Thread3 o3=new Thread3();
        o1.start();
        o2.start();
        o3.start();
        
}
}