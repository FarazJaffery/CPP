#include<iostream>
using namespace std;
int main()
{
	int size=0; 
	
	cout<<"Enter the size of array  ";
	cin>>size;
	int A [size];
	
	cout<<endl<<"Enter the Elements for First array "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>A[i];
	}
		cout<<endl<<"Your First Array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<A[i]<<", ";
	cout<<"}"<<endl;
	int B[size];
	cout<<endl<<"Enter the Elements for Second array "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>B[i];
	}
	cout<<endl<<"Your Second array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<B[i]<<", ";
	cout<<"}"<<endl;
	int sum =0;
		for( int i=0; i<size; i++)// dot product
	{
		A[i]=A[i]*B[i];
		sum=sum+A[i];
		
	}
	cout<<endl<<"The dot product of two inputs arrays are = { "<<sum<<" }"<<endl;
	
	cout<<endl;
	system("Pause");
	return(0);
}
