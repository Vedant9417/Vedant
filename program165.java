import java.util.*;

class Sorting
{
	
	
	public boolean check(int Arr[])
	{
		int brr[]=new int[Arr.length];
		int j = 0;
		for(int i = 0 ; i < Arr.length -1; i++)
		{
              if(Arr[i]<Arr[i+1])
			  {
				
				j++;
			  }
			  
		}

		if(j==Arr.length-1)
		{
			return true;
		}
		else
		{
			return false;
		}

	
	}
	
}

class program165
{
	public static void main(String[] arg) 
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		int size = sobj .nextInt();
		
		int Arr[]= new int [size];
		
		System.out.println("Enter the elements");
		for(int i = 0 ; i <Arr.length;i++)
		{
			Arr[i] = sobj . nextInt();
		}
	
		Sorting obj = new Sorting();
		
		 boolean bret=obj.check(Arr);
		if(bret==true)
		{
			System.out.println("Arr is sorted");
		}
		else
		{
			System.out.println("Arr is not sorted");
		}

			

		
	}
}