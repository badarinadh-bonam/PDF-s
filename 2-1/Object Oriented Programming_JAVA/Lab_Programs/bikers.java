import java.util.*;
public class bikers {
    public static void main(String [] args){
        float avg=0;
        float bikes[]=new float[5];
        Scanner readme=new Scanner(System.in);
        for(int i=0;i<5;i++){
            bikes[i]=readme.nextFloat();
            avg=avg+bikes[i];
        }avg=avg/5;
    for(int i=0;i<5;i++){
        if(bikes[i]>avg){
            System.out.println(bikes[i]);
        }
    }
}
}
