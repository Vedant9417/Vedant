import java.util.Scanner;

import javax.lang.model.element.Element;


class Array
{
    void Display(int brr[])
    {
        
        for (int  i =0 ; i <brr.length; i++)
        {
            for(int j = i ; j < brr.length ; j++)
            {
                
                System.out.println();
                for(int k = i ; k <= j ; k++ )
                {
                    System.out.print(brr[k]+" ");
                }
            }
        }
    }
}

public class SunArray
{ 
    public static void main(String[] args) 
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int size = sobj.nextInt();

        int[ ]arr= new int[size];

        System.out.println("Enter the numbers");

        for(int i = 0 ; i< arr.length ; i++ )
        {
            arr[i]=sobj.nextInt();
        }

        System.out.println("Elements are");
        for(int i = 0 ; i< arr.length ; i++ )
        {
            System.out.println(arr[i]);
        }

        Array aobj = new Array();
        System .out.println("Subarray");
       aobj.Display(arr);
        
    }
    
}
