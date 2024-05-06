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
		int l=i;
		for( int j=1; j<=size; j++)
		{
			if(l%2!=0)
			cout<<"1";
			else
			cout<<"0";
			l++;
}
	cout<<endl;
}
	system("Pause");
}
