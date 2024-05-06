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
		char f='a';
		for(int j=1; j<=i; j++)
		{
		cout<<f;
		f++;
	}
		cout<<endl;
	}
	system("Pause");
}
