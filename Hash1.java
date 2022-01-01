import java.io.BufferedReader;
import java.io.InputStreamReader;
import java .util.*;

import javax.swing.text.html.HTMLEditorKit.Parser;

class Hash1
{
    public static void main(String[] args) throws Exception
    {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int size = Integer .parseInt(br.readLine());

        HashMap<String , Long> mp = new HashMap<>();

        System.out.println("Enter name and phone");
        for(int i = 0 ; i < size ; i++)
        {
            String str = br.readLine();
            Long no = sobj.nextLong();
            
            mp.put(str,no);
        }
        System.out.println(mp);
    }
}