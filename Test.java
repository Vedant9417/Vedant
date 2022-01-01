import java.util.Scanner;

class Test 
{
    public static void main(String str[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of elements");
        int a = sobj.nextInt();

        int arr[] = new int[a];
         System.out.println("Number are");
        for(int i = 0 ; i<a ; i++)
        {
             arr[i]=sobj.nextInt();
            
        }

    }
}