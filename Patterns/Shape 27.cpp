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
	
			for( int j=1; j<=size-i; j++)
			cout<<" ";
			t=1;
		for( int j=1; j<=2*i-1; j++)
		{
			if(j<=i)	
			{
			cout<<t;
			if(j<i)
			t=t+2;
		}
		else
		{
				t=t-2;
			cout<<t;
		
		}
				
}
	cout<<endl;
}
	system("Pause");
}
