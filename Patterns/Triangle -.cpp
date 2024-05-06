#include<iostream>
using namespace std;
int size;
int main()
    {
	for(int i=0; i<=5; i++)
	{	
	for(int j=0; j<=9; j++)
	{
	if(j>=6-i & j<=4+i)
	cout<<j;		
	else
	{
	cout<<" ";
	}
	}
    cout<<endl; 
    }
    cout<<endl;
    system("Pause");
	}
	
    