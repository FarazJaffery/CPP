#include<iostream>
using namespace std;
int main()
{
	int size=0;
	cout<<"Enter the array size ";
	cin>>size;
	int A [size];
	A[0]=0;
int fact;	
	for(int i=1; i<size; i++)
	{
		fact=1;
			for(int j=1; j<=i; j++)
			{
				fact=fact*j;
			}
			A[i]=fact;		
	}
	cout<<"Elements that are factorial of their corresponding indices are follwoing "<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Index "<<i<<" factorial = ";
		cout<<A[i]<<"\n";
	}
	cout<<"Factorial array is = ";
	for(int i=0; i<size; i++)
	{
		
		cout<<A[i]<<", ";
	}


	cout<<endl<<endl;
	system("Pause");
	return(0);
}
