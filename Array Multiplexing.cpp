#include <iostream>
using namespace std;
int main()
{
	int size=0; 	
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the First array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	cout<<"Your first array entered elements are = { ";
for(int i=0; i<size; i++)
{
	cout<<A[i]<<", ";
}
cout<<"}"<<endl;
int B[size];
	cout<<"Enter the Second array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>B[i];
	}
	cout<<"Your second array entered elements are = { ";
for(int i=0; i<size; i++)
{
	cout<<B[i]<<", ";
}
cout<<"}"<<endl;
	
	
	// Now multiplex both arrays
	
	int mux [size*2];	
	for(int i=0; i<(size); i++)
	{
		mux[2*i]=A[i];	
		mux[2*i+1]=B[i];			
	}
	cout<<endl<<"Your Multiplex array are = { ";

	for(int i=0; i<size*2; i++)
	{
		cout<<mux[i]<<", ";
	}
	cout<<"}"<<endl<<endl;
	system("Pause");
	return(0);
	
}
