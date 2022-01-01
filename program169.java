import java.util.*;

class Node
{
	public int data ;
	 public Node next ;
}

class SinglyLL
{
	private Node first;
	private int size;
	
	public SinglyLL()
	{
		this.first = null;
		this.size = 0 ;
	}
	
	public void InsertFirst(int no)
	{
		Node newn = null;
		newn = new Node();
		
		newn.data = no;
		newn.next=null;
		
		if(first == null)
		{
			first = newn;
		}
		else
		{
			newn.next = first;
			first = newn ;
		}
		this.size++;
	}
	
	public void Display()
	{
		Node temp = first;
		while(temp != null)
		{
			System.out.print("|"+temp.data+"|->");
			temp = temp.next;
		}
		System.out.println("NULL");
	}
	public int count()
	{
		return this.size;
	}
	
	public void InsertLast(int no)
	{
		Node newn = null;
		newn = new Node();
		
		newn.data = no;
		newn.next=null;
		
		if(first == null)
		{
			first = newn;
		}
		else
		{
			Node temp = first;
			
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = newn;
		}
		this.size++;
	}
	
	public void Deletefirst()
	{
		if(size == 0)
		{
			return ;
		}
		if(size ==1)
		{
			first = null;
			
		}
		else
		{
			first = first.next;
		}
		this.size--;
	}
	
	public void Deletelast()
	{
		if(size == 0)
		{
			return ;
		}
		if(size ==1)
		{
			first = null;
			
		}
		else
		{
			Node temp = first;
			
			while(temp.next.next != null)
			{
				temp = temp .next;
			}
			temp . next = null;
		}
		this.size--;
	}
	
	public void InsertAtpos(int no , int ipos)
	{
		if((ipos < 0 )||(ipos>size+1))
		{
			return;
		}
		if(ipos==1)
		{
			InsertFirst(no);
		}
		else if(ipos == size +1)
		{
			InsertLast(no);
			
		}
		else
		{
			Node.newn = new Node();
			newn.data=no;
			newn.next=null;
			
			Node temp = first;
			
			for(int i=1; i<ipos-1;i++)
			{
				temp = temp . next;
			}
			newn .next=temp.next;
			temp.next=newn;
			this.size++;
		}
	}
	public void DeleteAtpos( int ipos)
	{
		if((ipos < 0 )||(ipos>size+1))
		{
			return;
		}
		if(ipos==1)
		{
			Deletefirst(no);
		}
		else if(ipos == size +1)
		{
			Deletelast(no);
			
		}
		else
		{
			Node temp = first;
		}
	}	
}



class program169
{
	public static void main(String str[])
	{
		SinglyLL obj = new SinglyLL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		
		obj.InsertLast(101);
		
		obj.InsertAtpos(75,3);
		
		obj.Display();
		
        int iRet =obj. count();
		System.out.println("Number of elements are"+iRet);
		
		//obj.Deletefirst();
		//obj.Deletelast();
		
		//obj.Display();
		//System.out.println("Number of elements are"+iRet);
	}
}