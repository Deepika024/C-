
#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
int info;
node *next;
friend class linklist;

public:
node(int x,node *ptr=0)
{
	info =x;
	next=ptr;
}

};

class linklist
{
node *head;
node *tail;

public:
linklist()
{
	head=0;
	tail=0;
}
void display();
void addtotail(int x);
int deletefromhead();

};

void linklist::display()
{
	node *temp=head;
	cout<<"\n\n\tCONTENTS OF QUEUE IS AS FOLLOWS";
	while(temp)
	{
	cout<<" "<<temp->info;
	temp=temp->next;
	}
}
void linklist::addtotail(int x)
{
	if(head==0)
	{
		head =new node(x);
		tail=head;
	}

	else
	{
		tail->next=new node(x);
		tail=tail->next;

	}
}

int linklist::deletefromhead()
{
	if(head)
	{
	   node *temp=head;
	   int x=temp->info;
	   if(head==tail)
	   {
		head=0;
		tail=0;
	   }
	   else
	   {
		head=head->next;
	   }
	   delete temp;
	   return x;
	}
	else
	{
	return -1;
	}

}
class queue
{
linklist l1;
public:
void enque();
int deque();
void display();

};

void queue::enque()
{

	int x;
	cout<<"\n\n\tENTER ELEMENT DO YOU WANT  TO INSERT";
	cin>>x;
	l1.addtotail(x);
}
int queue::deque()
{

	return l1.deletefromhead();


}

void queue::display()
{
	l1.display();
}
void main()
{
int ch;
char c;
queue q;

clrscr();

do
{
	clrscr();
	cout<<"\n\n\tOPERATION ON QUEUES USING LINKLIST IMPLEMENTATION";
	cout<<"\n\n\tPRESS 1 TO IMPLEMENT ENQUE";
	cout<<"\n\n\tPRESS 2 TO IMPLEMENT DEQUE";
	cout<<"\n\n\tENTER YOUR CHOICE";
	cin>>ch;

	switch(ch)
	{

	case 1:q.enque();
	       q.display();
	       break;

	case 2:cout<<"\n\n\tDELETED ELENMENT IS"<<q.deque();
	       q.display();
	       break;

	default:exit(0);

	}
    cout<<"\n\n\tWANT TO CONTINUE";
    cin>>c;

}while(c=='y'||c=='Y');


getch();
}

