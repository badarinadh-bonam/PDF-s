import java.security.AlgorithmParameterGeneratorSpi;

class Multiplecatch
{ 
    public static void main(String args[])
    {
        try
        {
          int a=args.length;
          System.out.println("a="+a);
          int b=5/a;
        }
        catch(ArithmeticException ae)
        {
            System.out.println(ae);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}