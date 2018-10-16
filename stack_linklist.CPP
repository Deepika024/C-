#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
	int info;
	node *next;		// next will tore address of next node
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
	friend class stack;

	public:

	linklist()
	{
		head=0;
		tail=0;
	}

	void display();
	void addtotail(int x);
	int deletefromtail();

};

void linklist::addtotail(int x)
{
	if(head==0)
	{
		tail=new node(x);
		head=tail;
	}

	else
	{
		tail->next=new node(x);
		tail=tail->next;
	}
}

int linklist::deletefromtail()
{
	if(head)
	{
		node *temp=tail;
		int x=temp->info;

		if(head==tail)
		{
			head=0;
			tail=0;
		}

		else
		{
			node *ptr=head;
			for(ptr;ptr->next!=tail;ptr=ptr->next);
			tail=ptr;
			tail->next=0;

		}

		delete temp;
			return x;

	}

	else
	{
	return -1;
	}

}

void linklist::display()
{
	node *temp=head;
	cout<<"\n\n\tCONTENTS OF STACK IS AS FOLLOWS ";

	while(temp!=0)
	{
		cout<<"  "<<temp->info;
		temp=temp->next;
	}
}

class stack
{

	linklist l;


	public:
	void push(int x);
	int pop();
	void clear();
	void display();

};

void stack::push(int x)
{

	l.addtotail(x);
}

int stack::pop()
{
       return l.deletefromtail();
}

void stack::display()
{
	l.display();

}



void stack::clear()
{
   l.head=0;
}




void main()
{

clrscr();
stack s;
int x,ch;
char c;

do
{

	clrscr();
	cout<<"\n\n\tSTACK USING LINKLIST";
	cout<<"\n\n\tPRESS 1 TO PUSH";
	cout<<"\n\n\tPRESS 2 TO POP";
	cout<<"\n\n\tPRESS 3 TO CLEAR STACK";
	cout<<"\n\n\tENTER YOUR CHOICE";
	cin>>ch;

	switch(ch)
	{
		case 1:cout<<"\n\n\tENTER ELEMENT YOU WANT TO PUSH";
		       cin>>x;
		       s.push(x);
		       s.display();
		       break;

		case 2:cout<<"\n\n\tPOPPPED ELEMENT IS "<<s.pop();
		       s.display();
		       break;

		case 3:s.clear();
		       cout<<"\n\n\tSTACK IS CLEARED";
		       break;

		default:exit(0);

	}
    cout<<"\n\n\tWANT TO CONTINUE";
    cin>>c;

}while(c=='y'||c=='Y');


getch();
}




