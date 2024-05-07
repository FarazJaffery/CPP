#include<iostream>
using namespace std;
int main()
{
	int size=0;
	cout<<"Enter the array size ";
	cin>>size;
	int A [size];
	cout<<endl<<"Enter the first array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	int B [size];
	cout<<endl<<"Enter the second array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>B[i];
	}
		
	cout<<"Sum of two array are =  { ";
	for(int i=0; i<size; i++)
	{
		A[i]=A[i]+B[i];
		cout<<A[i]<<", ";
	}	
	cout<<"}"<<endl<<endl;
	system("Pause");
	return(0);
}
