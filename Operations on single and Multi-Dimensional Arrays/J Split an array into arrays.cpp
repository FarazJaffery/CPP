#include<iostream>
using namespace std;
int main()
{
	int size=0, l=0; 
	
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
	
	int B[size/2];
	int C[size/2];
		cout<<"First split array = { ";
		for(int j=0; j<size/2; j++)  // first sub array
		{	
		B[j]=A[j];
		cout<<B[j]<<", ";		
		}
			cout<<"}"<<endl;
		cout<<"second split array = { ";
		for(int k=size/2; k<size; k++)// second sub array
		{
		C[k]=A[k];
			cout<<C[k]<<", ";			
		}
		cout<<"}"<<endl;	
	cout<<endl;
	system("Pause");
	return(0);
}
