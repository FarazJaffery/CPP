#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=1; j<=i; j++)
		cout<<" ";
		for(int k=1; k<=size*2-2*i-1; k++)
		cout<<"*";		
		cout<<endl;
	}
	for(int i=2; i<=size; i++)
	{
		for(int j=1; j<=size-i; j++)
		cout<<" ";
		for(int k=1; k<=2*i-1; k++)
		cout<<"*";
			
		cout<<endl;
	}
	cout<<endl<<endl;
	system("Pause");
}
