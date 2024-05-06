#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size but maximum is 9.  ";
	
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
		{
		cout<<i;
		}
		cout<<endl;
	}
	system("Pause");
}
