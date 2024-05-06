#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	char a='e';
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<=i-1; j++)
		cout<<" ";
		for(int k=0; k<(2*size)-(2*i)-1; k++)
		cout<<a;
		cout<<endl;
		a--;
	}
	system("Pause");
}
