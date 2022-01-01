import java.util.Scanner;
import java.io.*;
class Bufferreader 
{
    public static void main(String str[]) throws Exception

    {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

       System.out.println("Enter the char");
       char A = (char)br.read();

       br.skip(2);

       System.out.println("charactr is " +A);

       System.out.println("Enter the String");
       String arg = br.readLine();

       System.out.println("String is  " +arg);

       System.out.println("Enter the number");
       int i = Integer.parseInt(br.readLine());

       System.out.println("Integer  is  " +i);


    }
}