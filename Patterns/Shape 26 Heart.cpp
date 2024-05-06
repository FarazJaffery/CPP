#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	for(int i=1; i<=size; i++)
{
	for(int j=1; j<=size; j++)
	{
		if(j<=size-i)
		cout<<" ";
	} 
	for(int k=1; k<=2*i-1; k++)
	cout<<"*";
	for(int l=1; l<=(size*2)-(2*i)+1; l++)
	cout<<" ";
	for(int m=1; m<=2*i-1; m++)
	cout<<"*";
	for(int j=1; j<=size; j++)
	cout<<" ";
	for(int l=1; l<(size*2)-(2*i)+1; l++)
	cout<<" ";
		for(int k=1; k<=2*i-1; k++)
		{
			if( k==2*i-1 || k==1 )
			cout<<"*";
		
			else
			cout<<" ";
		}
		for(int l=1; l<=(size*2)-(2*i)+1; l++)
		{
			cout<<" ";
		}
			
	
	for(int k=1; k<=2*i-1; k++)
		{
			if( k==2*i-1 || k==1 )
			cout<<"*";
			else
			cout<<" ";
		}

	cout<<endl;
}
size=size*2;
for(int i=1; i<=size; i++)
{
	for(int j=1; j<=size; j++)
	{
		if(i>j)
		cout<<" ";
	}
	for(int k=1; k<=((size*2)-(2*i)+1); k++)
	cout<<"*";	
	for(int j=1; j<=size/2; j++)
	cout<<" ";
		for(int k=1; k<=2*i-1; k++)
		{
			if( k==2*i-1 || k==1 )
			cout<<" ";
			else
			cout<<" ";
			
		}
	for(int k=1; k<=((size*2)-(2*i)+1); k++)
	{
		if( k==1  || k==size-1 && i==1 || k==((size*2)-(2*i)+1))
			cout<<"*";
			else
			cout<<" ";
	}
	cout<<endl;
}
system("Pause");
}
