#include<iostream>
using namespace std;
int main()
{
int size;

cout<<"ENTER THE SIZE"<<endl;
cin>>size;
cout<<endl;
int h,t=0;
for(int i=1; i<=size; i++)
{
for(int j=1; j<=size-i; j++)
cout<<" ";
	for(int j=1; j<=2*i-1; j++)
{
	if(j%2!=0)
	{
		if(j==1 || j==2*i-1)
		cout<<"1";
		else
		cout<<" ";
	}

else
cout<<" ";
}
cout<<endl;
}
}
