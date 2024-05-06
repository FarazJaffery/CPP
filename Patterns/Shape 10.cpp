#include<iostream>
using namespace std;
int main()
{
int size;

cout<<"ENTER THE SIZE"<<endl;
cin>>size;
cout<<endl;
int t,h;
for(int i=1; i<=size; i++)
{
	for(int j=1; j<=size-i; j++)
	{
cout<<" ";
}
t=i;
h=2;
	for(int j=1; j<=2*i-1; j++)
	{
	
		if(t>0)
		{
			cout<<t;
			t--;
		}
		if(t<=0)
		{
			cout<<h;
			h++;
		}
			
}
	
cout<<endl;
}
}
