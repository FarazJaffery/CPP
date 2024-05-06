#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	int l,t;
	for(int i=1; i<=size; i++)
	{
		l=i;
		t=4;
		for( int j=1; j<=size; j++)
		{
				if(j<=i)
				{
			cout<<l<<" ";
			l=l+t;
			t--;
			}	
}
	cout<<endl;
}
	system("Pause");
}
