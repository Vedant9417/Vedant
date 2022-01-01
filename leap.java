import java.io.*;

class leap
{
	public static void main(String str[]) throws Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the year");
		int year = Integer.parseInt(br.readLine());
        
		if(year % 4 == 0 && year % 100 != 0 )
		{
			System.out.println("It's leap year");
		}
		else if (year % 100 == 0 && year % 400 == 0)
		{
			System.out.println("It's leap year");
		}
		else
		{
			System.out.println("It's not leap year");
		}
	}
}