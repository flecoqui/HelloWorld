import java.util.Scanner; 

class Program
{ 
    public static void main(String []args) 
    { 
        System.out.println("How is the World? M: Mad, B: Beautiful ");
        Scanner scanner = new Scanner(System.in);
        char ch = scanner.next().charAt(0);
        if(ch=='M'){
            System.out.println("Hello Mad World!\n");
        }
        else if(ch=='B'){
            System.out.println("Hello Beautiful World!\n");
        }
        else{
            System.out.println("Hello World!\n");
        }
    } 
} 