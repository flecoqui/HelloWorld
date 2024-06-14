public class Program
{
    public static void Main(string[] args)
    {
        System.ConsoleKey ch; 
        System.Console.WriteLine("The World is running, press escape to exit?");
        while(true)
        {
            if(Console.KeyAvailable){
                ch = Console.ReadKey(true).Key;
                if(ch==System.ConsoleKey.Escape){
                    System.Console.WriteLine("ESC key pressed, exit");
                    break;
                }
                else
                    System.Console.WriteLine($"Key pressed = {ch} , exit");
            }
        }
    }
}
