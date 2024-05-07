#include<iostream>
using namespace std;
int main()
{
int size=0, temp=0;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	cout<<"Your entered array elements are = { ";
for(int i=0; i<size; i++)
{
	cout<<A[i]<<", ";
}
cout<<"}"<<endl;
//swaping elements
int i;
for(i=0; i<size; i++)
{
	if(A[i]!=A[size-1-i])	
	break;	
}
if(i==size)
cout<<"Your entered array are palindromic"<<endl;
else
cout<<"Your entered array are Not palindromic"<<endl;


}
