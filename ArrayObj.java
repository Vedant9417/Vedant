import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.rmi.NotBoundException;
import java.util.*;

class student
{
    int id ;
    String name;
     student(int x,String str)
    {
        id=x;
        name=str;
    }

    void display()
    {
        System.out.println(id+"\t"+ name );
    }
}

class ArrayObj
{
    public static void main(String str[]) throws Exception
        {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

            student arr[] = new student[5];
  
            for(int i = 0 ; i<5 ; i++)
            {
                System.out.println("Enter th id");
                int k = Integer.parseInt(br.readLine());


                System.out.println("Enter the name");
                String j = br.readLine();



                arr[i] = new student(k , j);
            }

            for(int i = 0 ; i<arr.length ; i++)
            {
                arr[i].display();
            }
        }
}    