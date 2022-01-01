import java.util.Scanner;

import javax.lang.model.element.Element;

public class Array1D 
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

    }
    
}
