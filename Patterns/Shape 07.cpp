#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
for(int i=1; i<=size; i++)
{
	for(int j=1; j<=size; j++)
	{
		if(j<=i)
		cout<<j;
	}
	cout<<endl;
}
system("Pause");	
}
