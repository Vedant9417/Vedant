import java.util.ArrayList;
import java.util.*;

class SubArray1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);    

        

        System.out.println("Enter the number of Arraylist");
        int Alist = sobj . nextInt();

        ArrayList[] arl = new ArrayList[Alist];

        for(int i = 0 ; i < Alist ; i++ )
        {
            System.out.println("Enter the number of elemnts");
            int size = sobj .nextInt();

            arl[i]=new ArrayList();

            System.out.println("Enter the elemnts");
            for(int j = 0 ; j < size ; j++ )
            {
               arl[i].add(sobj.nextInt());
            }
        }

        int q=sobj.nextInt();
        for(int i= 0 ; i<q ; i++)
        {
            int x = sobj.nextInt();
            int y= sobj.nextInt();
            try
            {
                System.out.println("Number is"+arl[x-1].get(y-1));
            }
            catch(Exception e)
            {
                System.out.println("ERROR!");
            }
        }


    }
}