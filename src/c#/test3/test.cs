public class Program
{
    public static void Main(string[] args)
    {
        System.Console.WriteLine("How is the World? M: Mad, B: Beautiful ");
        while(!Console.KeyAvailable);
        System.ConsoleKey ch = Console.ReadKey(true).Key;
        if(ch==System.ConsoleKey.M){
            System.Console.WriteLine("Hello Mad World!\n");
        }
        else if(ch==System.ConsoleKey.B){
            System.Console.WriteLine("Hello Beautiful World!\n");
        }
        else{
            System.Console.WriteLine("Hello World!\n");
        }
    }
}
