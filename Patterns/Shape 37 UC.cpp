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
		for(int j=size; j>=1; j--)
		{
			if(i>=j)
			cout<<j;
		}
		cout<<endl;
	}
}
