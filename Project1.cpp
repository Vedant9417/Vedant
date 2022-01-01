#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//
//  Class  Name :               SinglyCL , Double , SinglyCL ,DoublyCL 
//  Description :               Data structure 
//  Author :                    Vedant Vinayak Bhanuwanshe
//  Date :                      18\11\2021
//
///////////////////////////////////////////////////////////////////////////////////


template< typename T>
 struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

/////////////////////Singly Linkedlist class ///////////////////////////////////

template <class T>
class SinglyLL
{
private:
     node <T>* first;
    int size;
    
public:
   SinglyLL();
   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T,int);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);
   
   void Display();
   int Count();
};

////////////////////Doubly Linkedlist  class ////////////////////////////////////////////

template <class T>
class Double
{
private:
	node <T>* first ;
	int size ; 

public :

   Double();

   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T,int);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);
   
   void Display();
   int count();

};

////////////////////////////// Singly circular Linkedlist class ////////////////////////////////

template <class T>
class SinglyCL
{
 private :
	node <T>* first ;
	node <T>* last ;
    int size;

 public:
 
    SinglyCL();
   
   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtpos(T,int);
   
   void Deletefirst();
   void Deletelast();
   void DeleteAtpos(int);
   
   void Display();
   int count();

};

////////////////////////////// Doubly circular Linkedlist class ////////////////////////////////

template <class T>
class DoublyCL
{
private:
    node <T> * first;
   node <T> * last;
    int size;
    
public:
    
    DoublyCL();
    void Display();
    int Count();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no , int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};


////////////////////////////// Functions of Singly Linkedlist /////////////////////////////

 template <class T>
 SinglyLL<T>::SinglyLL()
   {
       first = NULL;
       size = 0;
   }

 template <class T>
 void SinglyLL <T>::  InsertFirst(T no)
    {
       node<T> * newn = new node<T>; 
        
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        size++;
    }
    
  template <class T>	
  void SinglyLL<T> :: InsertLast(T no)
    {
         node <T>* newn = new  node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
        
        newn->data = no;
        newn->next = NULL;
        
        if(first == NULL)
        {
            first = newn;
        }
        else
        {
             node <T>* temp = first;
            
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        size++;
    }
 
 template <class T> 
 void SinglyLL<T> :: InsertAtPos(T no, int iPos)
    {
       if((iPos < 1) || (iPos > size+1))   
    {
        printf("Invalid position\n");
        return;
    }
    
    if(iPos == 1)       
    {
        InsertFirst(no);
    }
    else if(iPos == size +1)    
    {
        InsertLast(no);
    }
    else 
    {
         node<T> * newn = new  node<T>;  
         
        newn->data = no;
        newn->next = NULL;

		 node <T>* temp = first ;
		
        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn -> next = temp -> next ;
		temp-> next  = newn ;
		
    }  

    }
    
 template <class T>	
 void SinglyLL <T>:: DeleteFirst()
    {
         node <T> * temp = first;
        
        if(first != NULL)
        {
            first = first->next;
            delete temp;
            
            size--;
        }
    }
	
 template <class T>   
 void SinglyLL <T>:: DeleteLast()
    {
         node <T>* temp = first;
        
        if(first == NULL)
        {
            return;
        }
        else if(first->next == NULL)
        {
            delete first;
            first = NULL;
            size--;
        }
        else
        {
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            
            delete temp->next;
            temp->next = NULL;
            size--;
        }
    }

 template <class T>
 void SinglyLL <T>::DeleteAtPos(int iPos)
    {
    
    if((iPos < 1) || (iPos > size))  
    {
        printf("Invalid position\n");
        return;
    }
    
    if(iPos == 1)       
    {
        DeleteFirst();
    }
    else if(iPos == size)   
    {
        DeleteLast();
    }
    else
    {
         node<T> * temp = first ;
        node<T> * targeted = NULL;
        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        targeted = temp -> next ;
        
        temp -> next =targeted-> next ;
        delete (targeted);
    }
    }
    
 template <class T>	
 void SinglyLL<T> :: Display()
    {
        struct node<T> * temp = first;
        
        while(temp!= NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }
        cout<<"\n";
    }
    
 template <class T>	
 int SinglyLL<T> :: Count()
    {
        return size;
    }


////////////////////////////// Functions of Doubly Linkedlist /////////////////////////////

template <class T>
 Double<T>::Double()
	{
		 first = NULL ;
		 size = 0 ;
	}
   
template <class T>
void Double<T>::Display()
	{ 
		node <T> * temp = first;
		while (temp != NULL)
		{
			cout<<"|"<<temp -> data<<"| ->";
			temp = temp-> next ;
		}
		cout<<"\n";
		
	}
template <class T>	
void Double<T>:: InsertFirst(T no)
	{
		node <T>* newn = NULL;
		newn = new node <T>;

		newn -> next = NULL ;
		newn -> prev = NULL ;
		newn -> data = no ;

 
		if(first == NULL)
		{
            first = newn ;
		}
        else
		{
           newn -> next = first  ;
		   first = newn ; 
		}
		size++;
	}

template <class T>
void Double<T>:: InsertLast(T no)
	 {

		 node <T>* newn = NULL;
		newn = new node <T>;


		newn -> next = NULL ;
		newn -> prev = NULL ;
		newn -> data = no ;

 
		if(first == NULL)
		{
            first = newn ;
		}
        else
		{
			node <T>* temp = first ;
		   while(temp -> next != NULL)
           {
               temp = temp->next;
           }
           
           temp->next = newn;
           newn->prev = temp;
		}
		size++;
	 }

template <class T>
void Double<T>:: InsertAtPos(T no , int ipos)
	 {
        if((ipos < 1) || (ipos > size+1))
    	{
        	printf("Invalid position\n");
        	return;
    	}
    
    	if(ipos == 1)
    	{
    	    InsertFirst( no);
    	}
    	else if(ipos == size+1)
    	{
             InsertLast( no);
    	}
    	else
    	{
         node <T>* newn = NULL;
		newn = new node <T>;
		node <T>* temp = first;


		newn -> next = NULL ;
		newn -> prev = NULL ;
		newn -> data = no ;

		for(int i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
	    }
	    size++;
	 }

template <class T>
void Double<T>:: DeleteFirst()
     {
    	if(first == NULL)
   		{
    	    return;
    	}
   		else if((first) -> next == NULL)
   		{
		     free(first);
   		     first = NULL;
    	}
    	else
    	{
        first = first -> next;
        free(first->prev);
        first->prev = NULL;
    	}
		size--;
      }


template <class T>
void Double<T>::DeleteLast()
     	{

			 node <T>* temp = first;
    	    if(first == NULL)
   			{
    	 	   return;
    		}

   			else if((first) -> next == NULL)
   			{
		 	    free(first);
   			     first = NULL;
    		}
    		else
    		{
     		   while(temp->next != NULL)
     	 	  {
     		       temp = temp->next;
       	 	  }
	
        		temp->prev->next = NULL;
     	 	  free(temp);
    		}
			size--;
        }

template <class T>		
void Double<T>:: DeleteAtPos( int ipos)
	{
   
    	if((ipos < 1) || (ipos > size+1))
    	{
    	    printf("Invalid position\n");
        	return;
    	}
    
    	if(ipos == 1)
    	{
       		 DeleteFirst();
   		 }
    	else if(ipos == size+1)
    	{
        	DeleteLast();
    	}
    	else
    	{
		node <T>* temp = first ;
         for(int i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
      
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
		size--;
    	}
	}

template <class T>
int Double<T>::count()
   {
	   return size;
   }


////////////////////////////// Functions of Singly circular Linkedlist /////////////////////////////

template <class T>
SinglyCL<T>::SinglyCL()
  {
	 first =NULL;
	 last  =NULL;
	 size  = 0;
  } 
  
template <class T>  
void SinglyCL<T>:: Display()
   {
	   node <T>* temp = first;
	   if((first == NULL) && (last == NULL))
	   {
		   return ;
	   }
	   
	   do
	   {
		  cout<<"|"<<temp -> data<<"|->";
          temp=temp-> next ;
	   }while(temp != last->next);
   
	    cout<<"\n";   
	   }
   
template <class T>
int SinglyCL<T>:: count()
   {return  size ;}
   
   
template <class T>
void SinglyCL<T>::InsertFirst(T no)
  {
	 node <T>* newn = new node <T> ;
	  
	  newn -> data = no ;
	  newn -> next = NULL ;
	  
	  if((first == NULL) && (last == NULL))
	  {
		  first= newn;
		  last= newn;
	  }
	  else
	  {
		  newn->next =first;
		  first = newn;
	  }
	  last -> next == first ;
	  size++;  
  }

template <class T>  
void SinglyCL<T>::InsertLast(T no)
  {
	  node <T>* newn = new node <T> ;
	  
	  newn -> data = no ;
	  newn -> next = NULL ;
	  
	  if(first == NULL && last == NULL)
	  {
		  first= newn;
		  last= newn;
	  }
	  else
	  {
		  last-> next = newn;
		  last = newn;
	  }
	  last -> next == first ;
	  size++;  
  }
  
template <class T>  
void SinglyCL<T>:: InsertAtpos(T no,int ipos)
  {
	  if((ipos <1) || (ipos > (size +1)))
	  {
		  return ;
	  }
	  if(ipos == 1)
	  {
		  InsertFirst(no);
	  }
	  else if(ipos == size + 1)
	  {
		  InsertLast(no);
	  }
	  else
	  {
		  int i = 0 ;
		 
		  node <T>* newn = new node <T>;
		  newn -> data = no ;
		  newn -> next = NULL;
		  
		  node <T>* temp = first ;
		  
		  for(i=1 ;i<ipos -1;i++)
		  {
			temp = temp -> next;
			
		  }
		  newn -> next = temp -> next ;
		  temp-> next  = newn ;
		  
		  
          size++;		  
	  }
  }
  
template <class T>  
void SinglyCL<T>::Deletefirst()
  {
	  if(first == NULL && last == NULL)
	   {
		   return ;
	   }
	   else if(first == last)
	   {
	    delete first;
	     first =NULL;
	     last =NULL;
	   }
	   else
	   {
		first = first -> next ;
        delete last -> next	;
        last -> next = first;		
	   }
	  
  }
  
template <class T>  
void SinglyCL<T>:: Deletelast()
  {
	  node <T>* temp = first;
	   if(first == NULL && last == NULL)
	   {
		   return ;
	   }
	   else if(first == last)
	   {
	    delete first;
	     first =NULL;
	     last =NULL;
	   }
	   else
	   {
		while((temp -> next ) != last)
		{
			temp = temp -> next ;
		}			
		delete(last);
		last = temp  ;
		last -> next = first ;
	   }
	   size--;
  }
  
template <class T>  
void SinglyCL<T>:: DeleteAtpos(int ipos)
  {
	  if((ipos <1) || (ipos > (size +1)))
	  {
		  return ;
	  }
	  if(ipos == 1)
	  {
		  Deletefirst();
	  }
	  else if(ipos == size + 1)
	  {
		  Deletelast();
	  }
	  
	  else
	  {
		  node <T>* temp = first ;
	  int i = 0 ;
		  for(i = 1 ; i < ipos-1 ; i++)
		  {
			  temp = temp -> next ;
		  }
	          
            node <T>* targated = temp->next;
            
            temp->next = targated->next;    
            delete targated;
            
            size--;
		  
	  }
  }
  
  
  ////////////////////////////// Functions of Doubly circular Linkedlist /////////////////////////////
  
  template <class T>
 DoublyCL <T> :: DoublyCL() 
    {
        first = NULL;
        last = NULL;
        size = 0;
    }

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    node <T> * newn = new node <T> ;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first -> prev = newn;
        first = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

template <class T>
void DoublyCL <T>:: InsertLast(T no)
{
    node <T> * newn = new node <T> ;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        newn->prev = last;
        last = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

template <class T>
void DoublyCL <T>:: Display()
{
    node <T> * temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int DoublyCL <T>:: Count()
{
    return size;
}

template <class T>
void DoublyCL <T>:: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

template <class T>
void DoublyCL <T>:: DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        last = last -> prev;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

template <class T>
void DoublyCL <T>:: InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > size+1))
    {
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size +1)
    {
        InsertLast(no);
    }
    else
    {
       node <T> * newn= new node <T> ;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
     node <T> * temp = first;
        
        for(int i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }
        
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        size ++;
    }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > size))
    {
        return;
    }
    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == size)
    {
        DeleteLast();
    }
    else
    {
        node <T> * temp = first;
        
        for(int i = 1; i < ipos -1 ; i ++)
        {
            temp = temp -> next;
        }
       
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        size--;
    }
}



///////////////////////////////////// MAIN FUNCTION ///////////////////////////////

int main ()
{
	SinglyLL<int>SL;               //////// object of Singly Linkedlist ///////////////////
	
	Double<int>DL;              /////// object of Singly Linkedlist ///////////////////
	
	SinglyCL<int>SC;              //////// object of Singly Linkedlist ///////////////////
	
	DoublyCL<int>DC;              //////// object of Singly Linkedlist ///////////////////
	
	
	cout<<"//////////////Singly Linkedlist///////////////////////////"<<"\n\n";
	cout<<"_________________________________________________________"<<"\n";
	
	int iret = 0;
    
    SL.InsertFirst(11);
    SL.InsertFirst(21);
    SL.InsertFirst(31);
    SL.InsertFirst(41);
    SL.InsertFirst(51);
    SL.InsertFirst(61);
    SL.InsertFirst(71);
    SL.InsertFirst(81);
    
    SL.InsertLast(91);
    SL.InsertLast(101);

    SL.Display();
    iret = SL.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Add number at position 3 :\n";
	SL.InsertAtPos(35,3);
	SL.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete first node :\n";
	SL.DeleteFirst();
	SL.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete last node :\n";
	SL.DeleteLast();
	SL.Display();
    
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete number at position 2 :\n\n";
	SL.DeleteAtPos(2);
	SL.Display();
	
	cout<<"_________________________________________________________"<<"\n";	
    iret = SL.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n\n";
	
    cout<<"//////////////Doubly Linkedlist///////////////////////////"<<"\n\n";
    cout<<"_________________________________________________________"<<"\n";
	
	DL.InsertFirst(14);
    DL.InsertFirst(24);
    DL.InsertFirst(34);
    DL.InsertFirst(44);
    DL.InsertFirst(54);
    DL.InsertFirst(64);
    DL.InsertFirst(74);
    DL.InsertFirst(84);
    
    DL.InsertLast(94);
    DL.InsertLast(104);

    DL.Display();
    iret = DL.count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Add number at position 3 :\n";
	DL.InsertAtPos(35,3);
	DL.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete first node :\n";
	DL.DeleteFirst();
	DL.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete last node :\n";
	DL.DeleteLast();
	DL.Display();
    
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete number at position 2 :\n\n";
	DL.DeleteAtPos(2);
	DL.Display();
	
	cout<<"_________________________________________________________"<<"\n";	
    iret = DL.count();
    cout<<"Number of elemensts are : "<<iret<<"\n\n";
	
	
	cout<<"//////////////Singly circular Linkedlist///////////////////////////"<<"\n\n";
	cout<<"_________________________________________________________"<<"\n";
	
	
	SC.InsertFirst(12);
    SC.InsertFirst(22);
    SC.InsertFirst(32);
    SC.InsertFirst(42);
    SC.InsertFirst(52);
    SC.InsertFirst(62);
    SC.InsertFirst(72);
    SC.InsertFirst(82);
    
    SC.InsertLast(92);
    SC.InsertLast(102);

    SC.Display();
    iret = SC.count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Add number at position 3 :\n";
	SC.InsertAtpos(35,3);
	SC.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete first node :\n";
	SC.Deletefirst();
	SC.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete last node :\n";
	SC.Deletelast();
	SC.Display();
    
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete number at position 2 :\n";
	SC.DeleteAtpos(2);
	SC.Display();

    cout<<"_________________________________________________________"<<"\n";	
    iret = SC.count();
    cout<<"Number of elemensts are : "<<iret<<"\n\n";
    
    
		cout<<"//////////////Doubly circular Linkedlist///////////////////////////"<<"\n\n";
	cout<<"_________________________________________________________"<<"\n";
	
	
	DC.InsertFirst(13);
    DC.InsertFirst(23);
    DC.InsertFirst(23);
    DC.InsertFirst(43);
    DC.InsertFirst(53);
    DC.InsertFirst(63);
    DC.InsertFirst(73);
    DC.InsertFirst(83);
    
    DC.InsertLast(93);
    DC.InsertLast(103);

    DC.Display();
    iret = DC.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Add number at position 3 :\n";
	DC.InsertAtPos(35,3);
	DC.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete first node :\n";
	DC.DeleteFirst();
	DC.Display();
	
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete last node :\n";
	DC.DeleteLast();
	DC.Display();
    
	cout<<"_________________________________________________________"<<"\n";
	cout<<"Delete number at position 2 :\n";
	DC.DeleteAtPos(2);
	DC.Display();

    cout<<"_________________________________________________________"<<"\n";	
    iret = DC.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n\n";
    
    
	
	return 0 ; 
}