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
			if(j>size-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	system("Pause");
}
