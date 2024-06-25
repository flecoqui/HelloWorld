class Program
{ 
    public static void main(String []args) 
    {   
        try{
            if (args.length == 2) {
                //System.out.println(args[0]); 
                //System.out.println(args[1]); 
                //System.out.println(args[2]);
                int num1 = Integer.parseInt(args[0]);
                int num2 = Integer.parseInt(args[1]);
                int sum = num1 + num2;
                System.out.println(sum); 
            }
            else {
                System.out.println("Syntax error : two arguments expected"); 
            }
        }catch(Exception e) {
            System.out.println("Exception : " + e.getMessage());
        }
    }    
} 