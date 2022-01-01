class Node
{
    public int data ;
    public Node next ;
    public Node prev;
}

class Linklist
{
    public int size;
    public Node first ;
    public Node last ;
    
    public Linklist()
    {
        this.size = 0;
        this.first = null;
        this.last = null;

    }

    public void insertfirst(int no)
    {
        Node newn = null;
         newn = new Node();

        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if((first == null)&&(last == null))
        {
            first = newn ;
            last = newn ;
            last.next = first ;
            first .prev = last ;
        }
        else
        {
             
             newn . next = first ;
             first.prev = newn ;
             first = newn;
        }


       this. size++;
    }

    public void Display()
    {
        Node temp = first ;
        for(int i = 1 ; i <= size ; i++);
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
    }
    /*public reverse()
    {
        Node temp = first ;
        for(int i= size; i <size ; i-- )
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp . prev;
        }
    }*/
}

class reverselink

{
    public static void main(String str[])
    {
        Linklist obj = new Linklist();

        obj . insertfirst(1);
        obj.Display();
        obj . insertfirst(2);
        obj.Display(); 
        obj . insertfirst(3);
        obj.Display();
        obj . insertfirst(4);
        obj.Display();
        obj . insertfirst(8);

        obj.Display();
    }
}