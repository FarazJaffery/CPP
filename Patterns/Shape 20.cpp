#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	char f='a';
	cout<<endl;
	for(int i=1; i<=size; i++)
	{
		for(int j=1; j<=i-1; j++)
		cout<<" ";
		for(int k=1; k<=size; k++)
		{
			if(i==1 || i==size || k==1 || k==size)
			{
				cout<<f;
				f++;
			}
			else
			cout<<" ";			
		}
		cout<<endl;
	}
	system("Pause");
}
