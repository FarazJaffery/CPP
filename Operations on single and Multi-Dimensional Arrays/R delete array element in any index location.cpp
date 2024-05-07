#include<iostream>
using namespace std;
int main()
{
int size=0, l=0, temp=0;
		
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
	cout<<"}"<<endl<<"Enter the index location where you want to delete element "<<endl;
	cin>>l;
	 A[size-1];
	 cout<<"After delete element = ("<<A[l];
  for(int i=0; i<size-1; i++)
{
		if(i>=l)
		{
		A[i]=A[i+1];	
		}		
}
cout<<") on index location {"<<l<<"} Resultant array are = { ";
for(int i=0; i<size-1; i++)
{
	cout<<A[i]<<", ";
}
		
	

cout<<"}"<<endl<<endl;
	system("pause");
	return(0);
	
} 
