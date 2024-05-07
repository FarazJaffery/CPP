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
	
	
	// Now taking DOT product of both arrays
	int sum=0;		
	for(int i=0; i<(size); i++)
	{
		sum=sum+A[i]*B[i];			
	}
	cout<<endl<<"The Dot product of the both aray is: = "<<sum<<endl;;


	system("Pause");
	return(0);
	
}
