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
		int l=1;
		for( int j=1; j<=size; j++)
		{
			if(i>=j)
			{
			cout<<l;
		
			l++;
			}
			else
			cout<<" ";
		}
		l--;
		for( int j=1; j<=size; j++)
		{
			if(j>size-i)
			{
			cout<<l;
			l--;
		}
			else
			cout<<" ";
		}
	cout<<endl;
}
	system("Pause");
}
