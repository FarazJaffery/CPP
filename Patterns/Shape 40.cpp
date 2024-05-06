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
		int k=1;
		for(int j=1; j<=size; j++)
		{
			
			if(j>size-i)
			{
			cout<<k;
			k++;
		}
			else
			cout<<" ";
			
		}
		
		cout<<endl;
}

	system("Pause");
}
