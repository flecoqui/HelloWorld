public class Program
{
    public static void Main(string[] args)
    {
        try
        {
            if (args.Length == 2)
            {
                int num1 = Int32.Parse(args[0]);
                int num2 = Int32.Parse(args[1]);
                int s = num1 + num2;
                System.Console.WriteLine(s);
            }
            else
            {
                System.Console.WriteLine("syntax error");
            }
        }
        catch (System.Exception e)
        {
            System.Console.WriteLine("Exception : " + e.Message);
        }
    }
}