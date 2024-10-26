import java.util.*;
class Solution{
    int a,b;
    void reader(){
        Scanner readme=new Scanner(System.in);
        a=readme.nextInt();
        b=readme.nextInt();
    }
    public int getMax(){
        if(a>b){
            return a;
        }else{
            return b;
        }
    }
}
class Classes {
    public static void main(String[] args){
        Solution obj=new Solution();
        System.out.println("Enter any two numbers");
        obj.reader();
        System.out.println("The maximum number is "+obj.getMax());
    }
}
