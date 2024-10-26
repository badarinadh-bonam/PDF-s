import java.util.*;
public class QuadraticRoots{
    public static void main(String[] args){
        Scanner readme = new Scanner(System.in);
        int a=readme.nextInt();
        int b=readme.nextInt();
        int c=readme.nextInt();
        double d=Math.pow(b,2)-(4*a*c);
        double r1=(-b+Math.sqrt(d))/2*a;
        double r2=(-b-Math.sqrt(d))/2*a;
        if(d==0){
            System.out.println("Roots are equal.Ther are :"+r1+"and "+r2);
        }else if(d>0){
            System.out.println("Roots are Real .They are "+r1+"and"+r2);
        }else{
            System.out.println("Roots are not Real");
    }
}
}