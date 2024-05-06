#include<iostream>
using namespace std;
int size;
int main()
{
	cout<<"Enter the size ";
	cin>>size;
	cout<<endl;
	for(int i=0; i<size; i++)
	{
	for(int j=0; j<size; j++)
	{
	if(i>=j)
	cout<<"*";
	}
	cout<<endl;
	
}
	for(int i=0; i<size; i++)
	{
	for(int j=1; j<=size-i-1; j++)
	{
	cout<<"*";
	}
	cout<<endl;
	}
	system("Pause");
	}
	

