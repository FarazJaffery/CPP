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
	int k=i;
		for(int j=1; j<=2*i-1; j++)
		{
			
			if(j<=2*i-1)
			{
			if(j==1 || j==2*i-1)					
			cout<<"*";
			else if(j>1 && j< 2*i-1)
			{
				if(j<=i)				
			cout<<j-1;
			if(j>i)
			{
			cout<<k-2;
			k--;
	}
			}			
		}
}
	cout<<endl;
}

	for(int i=0; i<=size; i++)
	{	
		
int k;
		for(int j=1; j<=(size*2)-(2*i)+1; j++)
		{
			
			if(j==1 || j==(size*2)-(2*i)+1)					
			cout<<"*";
	else
	{
		if (j<=size-i+1)
		{
			cout<<j-1;
			k=j-2;
		}
			else
			{
			cout<<k;
			k--;
		}
	}
		
		
	}
		cout<<endl;
}
	system("Pause");
}
