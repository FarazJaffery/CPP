#include<iostream>
using namespace std;
int main()
{
	int size=0;
	cout<<"Enter the array size ";
	cin>>size;
	int A [size];
	cout<<endl<<"Enter the First array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	int B [size];
	cout<<endl<<"Enter the Second array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>B[i];
	}
	int C [size];
	cout<<endl<<"Enter the Third array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>C[i];
	}
	int D [size];
	cout<<endl<<"Enter the Fourth array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>D[i];
	}
	
	//array sum		
	cout<<"Sum of the four array are = { ";
	for(int i=0; i<size; i++)
	{
		A[i]=A[i]+B[i]+C[i]+D[i];
		cout<<A[i]<<", ";
	}	
	cout<<"}"<<endl<<endl;
	system("Pause");
	return(0);
}
