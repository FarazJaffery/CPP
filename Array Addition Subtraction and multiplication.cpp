#include<iostream>
using namespace std;
int main()
{
	int size=0;
	cout<<"Enter the array size ";
	cin>>size;
	int A [size];
	cout<<endl<<"Enter the array elements ";
	
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	
	//array addition
	int add=0;	
		for(int i=0; i<size; i++)
	{
		add=add+A[i];
	}	
		for(int i=0; i<1; i++)
	{
		cout<<"Addition of array elements = "<<add<<endl;
	}
	
	//array subtraction
	int sub=0;
		for(int i=0; i<size; i++)
	{
		sub =sub-A[i];
	}	
		for(int i=0; i<1; i++)
	{
		cout<<"Subtraction of array elements = "<<sub<<endl;
	}
	
		//array product
	int product=1;
		for(int i=0; i<size; i++)
	{
		product=product*A[i];
	}	
		for(int i=0; i<1; i++)
	{
		cout<<"Product of array elements = "<<product<<endl;
	}
	
	//average of the array 
	int adds, avg=0;	
		for(int i=0; i<size; i++)
	{
		adds=adds+A[i];
	}	
		for(int i=0; i<1; i++)
	{
		avg=add/size;
		cout<<"Average of array elements = "<<avg<<endl;
	}
	system("Pause");
	return(0);
}
