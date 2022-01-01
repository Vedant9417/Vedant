import java.util.*;
 
 class StringX
 {
	 public String str;

     public void Accept()
	 {
		 Scanner sobj =new Scanner (System.in);
		 System.out.println(" Enter String ");
		 str =sobj .nextLine();
	 } 	 
	 public void Display()
	 {
		 System.out.println(" String is :"+str);
	 }
 }
  
  class marvellous extends StringX
  {
	  public boolean Checkpallindrome()
	  {
		 char Arr[] = str.toCharArray();
		 int iCnt =0 , iStart= 0 , iEnd  = Arr.length -1 ;
		 char temp ;
		  while(iStart < iEnd)
		 {
			temp =Arr[iStart];
			 Arr[iStart ]= Arr[iEnd];
			  Arr[iEnd] =temp;
			 iStart++;
			 iEnd--;
		 }
		 String newstr = new String(Arr);
		 
		 Boolean bret = newstr.equals(str);
		 return bret ;
	  }
  }  
 
 

class program97
{
	public static void main(String arg[])
	{
		marvellous mobj= new marvellous();
		int iRet = 0; 
		mobj.Accept();
		mobj.Display();
		boolean bret ;
		bret = mobj. Checkpallindrome();
		if(bret == true)
		{
			System.out.println("String is pallindrome");
		}
		else
		{
			System.out.println("String is  not pallindrome");
		}
		
		
		
		

		
	}
}