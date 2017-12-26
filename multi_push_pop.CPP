#include<iostream.h>
#include<conio.h>
#include<process.h>

class stack
{
int size;
int top;
int *a;

public:
stack()
{
size=0;
top=-1;
a=new int[size];
}
stack(int s)
{
	top=-1;
	size=s;

	a=new int [size];
}

void push(int ele);
void display();
int pop();
void add(stack &s2);
};

void stack::push(int ele)
{

	if(top==size-1)
	{
		cout<<"\n\n\tOVERFLOW";
		return;
	}

	else
	{
	a[++top]=ele;
	}
}

int stack::pop()
{
	if(top==-1)
	{
	return -1;
	}

	else
	{
		return(a[top--]);
	}
}

void stack::display()
{

	while(top>-1)
	{
		cout<<" "<<pop();



	}
}
void stack::add(stack &s2)
{
	int sa,carry,rem;
	carry=0;
	stack s3;

	if(size>s2.size)
	{

		stack s3(size+2);

		while(top>-1&&s2.top>-1)
		{
		    sa=pop()+s2.pop()+carry;
		    rem=sa%10;

		    s3.push(rem);
		    carry=sa/10;


		}
		if(top>=0)
		while(top>=0)
		{
			sa=pop()+carry;
			rem=sa%10;
			s3.push(rem);
			carry=sa/10;
		}


		else if(s2.top>=0)
		while(s2.top>=0)
		{
			sa=s2.pop()+carry;
			rem=sa%10;
			s3.push(rem);
			carry=sa/10;
		}
	  s3.push(carry);
	  s3.display();
	}
	else
	{
		stack s3(s2.size+2);
			while(top>-1&&s2.top>-1)
		{

			 sa=pop()+s2.pop()+carry;
			 rem=sa%10;

			  s3.push(rem);

			  carry=sa/10;
		}





		if(s2.top>=0)
		while(s2.top>=0)
		{
			sa=s2.pop()+carry;
			rem=sa%10;
			s3.push(rem);
			carry=sa/10;
		}

		else if(top>=0)
		while(top>=0)
		{
			sa=pop()+carry;
			rem=sa%10;
			s3.push(rem);
			carry=sa/10;
		}
		s3.push(carry);
		s3.display();
	}



}

void main()
{

clrscr();
int s,ch,n,ele;
	cout<<"\n\n\tENTER THE SIZE OF THE STACK";
	       cin>>s;
	       stack s1(s);
	       cout<<"\n\n\tHOW MANY NUMBERS YOU WANT TO PUSH ";
	       cin>>n;
	       for(int i=0;i<n;i++)
	       {
			cout<<"\n\n\tENTER NUMBER YOU WANT TO PUSH IN THE STACK";
			cin>>ele;
			s1.push(ele);

	       }



	cout<<"\n\n\tENTER THE SIZE OF THE STACK";
		cin>>s;
		stack s2(s);
	       cout<<"\n\n\tHOW MANY NUMBERS YOU WANT TO PUSH ";
	       cin>>n;
	       for(i=0;i<n;i++)
	       {
			cout<<"\n\n\tENTER NUMBER YOU WANT TO PUSH IN THE STACK";
			cin>>ele;
			s2.push(ele);

	       }


	       cout<<"\n\n\tAFTER ADDING";
	       cout<<"\n\n\tCONTENTS OF STACK IS FOLLOWS";

	       s1.add(s2);







getch();
}




