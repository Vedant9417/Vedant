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
	  public String  ReverseX()
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
		 return new String(Arr);
	  }
  }  
 
 

class program96
{
	public static void main(String arg[])
	{
		marvellous mobj= new marvellous();
		int iRet = 0;
		mobj.Accept();
		mobj.Display();
		
		
		String s = mobj .ReverseX();
		
		System.out.println("Number of vowles are:"+s);
		
	}
}