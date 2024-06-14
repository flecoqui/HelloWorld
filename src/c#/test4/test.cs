public class Program
{
    public static void Main(string[] args)
    {
        string sunny = "sunny";
        System.Console.WriteLine("How is the World?");
        string? str = Console.ReadLine();
        if(string.IsNullOrEmpty(str))
            System.Console.WriteLine($"Hello {sunny} World!");
        else
            System.Console.WriteLine($"Hello {str} and {sunny} World!");
    }
}
