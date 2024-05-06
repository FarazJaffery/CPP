#include<iostream>
using namespace std;
int main()
{
	int size=0 ,count=1;
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;
	for(int i=1; i<=size; i++)
	{
		for( int j=1; j<=size; j++)
		{
			if(j<=i)
			{
				if(count%2==0)
					cout<<"0";
					else
					cout<<"1";
					count++;
			}
		
	}
	
		
		cout<<endl;
}

	system("Pause");
}
