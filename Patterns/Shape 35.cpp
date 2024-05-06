#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	int l,m;
	for(int i=1; i<=size; i++)
	{
		l=i;
		m=2;
		for( int j=1; j<=size; j++)
		{
				if(j<=i)
				{
			cout<<l;
			l--;
			}
			else
			{
				cout<<m;
				m++;
			}			
}
	cout<<endl;
}
	system("Pause");
}
