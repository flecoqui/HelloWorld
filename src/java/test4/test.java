import java.util.Scanner; 
class Program
{ 
    public static void main(String []args) 
    { 
        String sunny = "sunny";
        System.out.println("How is the World?");
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();
        if (str == null || str.isEmpty() || str.trim().isEmpty()) 
            System.out.printf("Hello %s World!\n",sunny);
        else
            System.out.printf("Hello %s and %s World!\n", str, sunny);        

    } 
} ;