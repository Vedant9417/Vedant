import java . util.*;

class Hash
{
	public static void main(String str[])
	{
		HashSet<String,Integer> hs = new HashSet<String,Integer>();
  
		hs.add("india",51);
		hs.add("usa",41);
		hs.add("china",31);
		hs.add("uk",21);
		hs.add("spain",11);
		
		System.out.println(hs);
	

	Iterator it = hs. iterator();

	while(it.hasNext())
	{
		String s = (String)it.next();
		System . out.println(s);
	}
}
	
}