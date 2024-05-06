#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the Size ";
	cin>>size;
	int k=1;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{ 
		if(i>j)
		{		
		cout<<k;
		k++;
		}
		}
		cout<<endl;
	}
	system("Pause");
}
