import java.util.Scanner; 


public class Program {


    public static void main(String []args) 
    {  
        System.out.printf("The World is running, press escape to exit?");
        while(true)
        {
            Scanner scanner = new Scanner(System.in);
            char ch = scanner.next().charAt(0);

            if(ch==27){
                System.out.printf("ESC key pressed, exit");
                break;
            }
            else
                System.out.printf("Key pressed = %c , exit", ch);
        }
    } 

}
