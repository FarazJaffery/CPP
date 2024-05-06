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
		for( int j=1; j<=i-1; j++)
		
		{
			cout<<" ";
		}
		for(int j=1; j<=(2*size)-(2*i)+1; j++)
		{
			if (j==(2*size)-(2*i)+1 || j==1)
			cout<<i;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	int n=size-1;
	for(int i=2; i<=size; i++)
	{
		for(int j=1; j<=size-i; j++)
		cout<<" ";
		for(int k=1; k<=2*i-1; k++)
		if(k==1 || k == 2*i-1 )
		cout<<n;
		
		else
		cout<<" ";
		cout<<endl;
			n--;
	}
	cout<<endl<<endl;
	system("Pause");
}
