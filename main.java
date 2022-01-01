class Node
{
    public int data;
    public Node next ;
}

class Linklist
{
   private Node first ;
   private int size ;

   public Linklist()
   {
       this . first = null ;
       this .size = 0;
   }

    public void Insertfirst(int no)
    {
        Node newn = null;
        newn = new Node();

        newn . data = no;
        newn . next = null;

        if(first == null)
        {
            first= newn;
        }
        else
        {
            newn . next = first ;
            first = newn ;
        }
       this. size++;

    }

    public void InsertLast(int no)
    {
        Node newn = null;
        newn = new Node();

        newn . data = no;
        newn . next = null;

        if(newn == null)
        {
            newn = first;
        }
        else
        {
            Node temp = first ;
            while(temp . next != null)
            {
                temp = temp . next;
            }
            temp . next = newn ;
            

        }
        this .size ++;
    } 

    public void Display()
    {
        Node temp = first ;
        while(temp != null)
        {
            System.out.print("|"+temp.data +"|->");
            temp = temp .next;
        }

    }

    public void Deletefirst()
    {
        if(size  == 0)
        {
            return ;
        }
        else if(size  == 1 )
        {
            first = null;
        }
        else
        {
            first = first.next;
           
        }
        size -- ;
    }

    public void DeleteLast()
    {
        if(size  == 0)
        {
            return ;
        }
        else if(size  == 1 )
        {
            first = null;
        }
        else
        {
            Node temp = first;
            while(temp.next.next != null)
           {
               temp = temp.next;
           }
           temp.next=null;
           
        }
        size -- ;
    }
    public void InsertAtpos(int no , int pos)
    {
        if(pos == 1)
        {
            Insertfirst(no);
        }
        else if(pos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            Node temp = first ;

            Node newn = new Node();
            newn.data = no;
            newn.next = null;

            for(int i = 1 ; i< pos-1 ; i++)
            {
                temp = temp . next;
            }
            newn.next = temp.next;
            temp.next =newn;
            
              this.size++;
        
        }
    }
    public void DeleteAtpos(int pos)
    {
        Node temp = first ;
        if(pos == 1)
        {
            Deletefirst();
        }
        else if(pos == size+1)
        {
            DeleteLast();
        }
        else
        {
           
            for(int i = 1 ; i< pos-1 ; i++)
            {
                temp = temp . next;
            }
            
            temp.next=temp . next . next ; 
           
           this.size--;
        
        }
    }
}

class main
{
    public static void main(String str[])
    {
        
        
        Linklist nobj = new Linklist();
        nobj.Insertfirst(11);
        nobj.Insertfirst(21);
        nobj.Insertfirst(31);

        
        nobj.InsertAtpos(01,2);
        nobj.InsertLast(101);
       nobj.DeleteAtpos(1);
        //nobj.Deletefirst();
        //nobj.DeleteLast();
        nobj .Display();
    }
}