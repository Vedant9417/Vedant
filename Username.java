import javax.swing.text.html.StyleSheet;
import java . util.*;

class name
{
    boolean Display(String str)
    {


        if(str.length()<8 || str.length() >30)
        {
            return false;
        }
        
        int icount=0;
        for(int i = 0 ; i <= 9 ; i++)
        {
            String str1 = Integer . toString(i);
            if(str.contains(str1))
            {
                icount++;
            }
            
        }
        if(icount==0)
        {
            return false ;
        }
        
        if(!(str.contains("@") || str.contains("#")
        || str.contains("!") || str.contains("~")
        || str.contains("$") || str.contains("%")
        || str.contains("^") || str.contains("&")
        || str.contains("*") || str.contains("(")
        || str.contains(")") || str.contains("-")
        || str.contains("+") || str.contains("/")
        || str.contains(":") || str.contains(".")
        || str.contains(", ") || str.contains("<")
        || str.contains(">") || str.contains("?")
        || str.contains("|")))
        {
            return false;
        }
        
        return true;



    }
}



class Username 

{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System .out .println("Enter the Password");
        String str = sobj.nextLine();

        name nobj = new name();

        boolean bret =nobj.Display(str);

        if(bret == false)
        {
            System.out.println("Invalid Password");
        }
        else
        {
            System.out.println("Valid Password");
        }
    }
}
