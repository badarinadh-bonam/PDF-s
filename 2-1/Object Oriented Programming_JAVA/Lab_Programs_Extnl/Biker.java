import java.util.*;
public class Biker {
    public static void main(String[] args){
        float bikers[]=new float[5];
        float avg=0;
        Scanner readme=new Scanner(System.in);
        for(int i=0;i<5;i++){
            bikers[i]=readme.nextFloat();
            avg=avg+bikers[i];
        }avg=avg/5;
        for(int i=0;i<5;i++){
            if(bikers[i]>avg){
                System.out.println(bikers[i]);
            }
        }
    }
}
