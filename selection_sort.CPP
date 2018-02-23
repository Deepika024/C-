#include<iostream.h>
#include<conio.h>
void selection_sort( int arr[],int n)
{
int small,temp,pos;
for(int i=0;i<n-1;i++)
{ small=arr[i];
  pos =i;
  for(int j=i+1;j<n;j++)
  {
	if(arr[j]<small)
	 {	small=arr[j];
		pos=j;
	 }
 }
temp=arr[i];
arr[i]=small;
arr[pos]=temp;
}
}
void main()
{
clrscr();
 int n,arr[100];
 cout<<"\n ENTER SIZE OF ARRAY (max. 100) ";
 cin>>n;
 cout<<"\n ENTER ELELEMENTS OF ARRAY ";
 for(int i=0;i<n;i++)
 {
  cout<<"\narr["<<i<<"]= ";
  cin>>arr[i];
 }
 selection_sort(arr,n);
 cout<<"\n SORTED ARRATY IS AS FOLLOWS:\n";
 for( i=0;i<n;i++)
 {
  cout<<"\narr["<<i<<"]= ";
  cout<<arr[i];
 }

 getch();
}
