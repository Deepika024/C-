#include<iostream.h>
#include<conio.h>
#include<process.h>

template<class T>
class stack
{
T *arr;
int top;
int s;


public:
stack(int s);
void push(T ele);
T pop();
void clear();
};

template<class T>
stack<T>::stack(int a)
{
	s=a;
	top=-1;
	arr=new T[s];
}

template<class T>
void stack<T>::push(T ele)
{
	if(top==s-1)
	{
		cout<<"\n\n\tOVERFLOW";
		return;
	}

	else
	{
		arr[++top]=ele;
		cout<<"top "<<top;
	}
}

template<class T>
T stack<T>::pop()
{

	if(top==-1)
	{
		return -1;
	}

	else
	{
		return arr[top--];
	}
}

template<class T>
void stack<T>::clear()
{

	top=-1;
}


void main()
{
	clrscr();
	int choice,el,size;
	char ch;
	cout<<"\n\n\tENTER SIZE";
	cin>>size;
	stack<int> s(size);

	do
	{
		clrscr();
		cout<<"\n\n\tM.A.I.N. M.E.N.U.";
		cout<<"\n\n\t-----------------";
		cout<<"\n\n\tPRESS 1 TO PUSH";
		cout<<"\n\n\tPRESS 2 TO POP";
		cout<<"\n\n\tPRESS 3 TO CLEAR THE STACK";
		cout<<"\n\n\tENTER YOUR CHOICE";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"\n\n\tENTER THE ELEMENT : ";
			       cin>>el;
			       s.push(el);
			       break;

			case 2:int x=s.pop();
			       if(x==-1)
			       cout<<"\n\n\tUNDERFLOW";
			       else
			       cout<<"\n\n\tELEMENT POPED IS : "<<x;
			       break;

			case 3:s.clear();
			       cout<<"\n\n\tSTACK HAS BEEN CLEARED";
			       break;

			default:exit(0);
		}
		cout<<"\n\n\tWANT TO CONTINUE";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	getch();
}

