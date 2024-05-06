#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the Size ";
	cin>>size;
	cout<<endl;
	int l=size;
		for(int i=1;i<=size; i++)
		{
			
			for(int j=1; j<=size-i; j++)
			cout<<" ";
			for(int k=1; k<=size; k++)
			cout<<l;
	cout<<endl;
	l--;
		}
		system("Pause");
}
