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
		for(int j=1; j<=(2*i)-1; j++)
		{
			if(i>j)				
			cout<<j;
			
			if(i<=j)
			{
			cout<<k;
			k--;
	}
}	
	
		
		cout<<endl;
}

	system("Pause");
}
