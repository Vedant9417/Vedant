import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Duplicate

{  public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String str = sobj.nextLine();



        String[] arr = str.split(" ") ;
        
        while (arr.length >0) 
        {
            String input = in.nextLine();
            
            Matcher m = p.matcher(input);
            
            // Check for subsequences of input that match the compiled pattern
            while (m.find()) 
            {
                input = input.replaceAll();
            }
            
            // Prints the modified sentence.
            System.out.println(input);
        }
        

            
    }
    
}
