#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	char f='a';
		for(int i=1; i<=size; i++)
	{
		for(int j=1; j<=i-1; j++)
		cout<<" ";
		for(int k=1; k<=size; k++)
		{
		cout<<f;
		f++;	
	}
		cout<<endl;
	}
	system("Pause");
}
