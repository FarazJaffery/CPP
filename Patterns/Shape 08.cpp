#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	char x='a';
for(int i=1; i<=size; i++)
{
	for(int j=1; j<=size; j++)
	{
		if(j>size-i)
		{
		cout<<x;
	    }
		else
		cout<<" ";
	}
	cout<<endl;
	x++;
}
system("Pause");	
}
