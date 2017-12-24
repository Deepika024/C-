#include<iostream.h>
#include<conio.h>
#include<process.h>
template<class T>
class queue
{
T *a;
int s;
int f;
int r;

public:
queue(int c);
void enque(T ele);
T deque();
void clear();
};

template<class T>
queue<T>::queue(int c)
{          s=c;
	a=new T[s];
	  r=-1;
	f=-1;
}

template<class T>
void queue<T>::enque(T ele)
{

	if(r==s-1)
	{cout<<"\n\n\tOVERFLOW";
	return ;
	}

       else
       {
	a[++r]=ele;
	cout<<"rear "<<r;
	if(f==-1)
	{
		f=0;
	}
       }
}

template<class T>
T queue<T>::deque()
{

	if(f==-1)
	       {
			return -1;
	       }

	else
	{
	       T x=a[f];

	  if(f==r)
	 {

		f=-1;
		r=-1;


	 }
	 else
	 {
		f++;

	 }

	 return x;
	}
 }

template<class T>
void queue<T>::clear()
{

	f=-1;
}




void main()
{
	clrscr();
	int choice,el,size;
	char ch;
	cout<<"\n\n\tENTER SIZE";
	cin>>size;

	queue<int> q(size);

	do
	{
		clrscr();
		cout<<"\n\n\tM.A.I.N. M.E.N.U.";
		cout<<"\n\n\t-----------------";
		cout<<"\n\n\tPRESS 1 TO ENQUE";
		cout<<"\n\n\tPRESS 2 TO DEQUE";
		cout<<"\n\n\tPRESS 3 TO CLEAR THE QUEUE";
		cout<<"\n\n\tENTER YOUR CHOICE";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"\n\n\tENTER THE ELEMENT : ";
			       cin>>el;
			       q.enque(el);
			       break;

			case 2:int x=q.deque();
			       if(x==-1)
			       cout<<"\n\n\tUNDERFLOW";
			       else
			       cout<<"\n\n\tELEMENT POPED IS : "<<x;
			       break;

			case 3:q.clear();
			       cout<<"\n\n\tQUEUE HAS BEEN CLEARED";
			       break;

			default:exit(0);
		}
		cout<<"\n\n\tWANT TO CONTINUE";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	getch();
}

