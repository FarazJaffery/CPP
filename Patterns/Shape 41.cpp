#include<iostream>
using namespace std;
int main()
{
int size;

cout<<"ENTER THE SIZE"<<endl;
cin>>size;
cout<<endl;
int k;
for(int i=1; i<=size; i++)
{
	k=2;
	for(int j=1; j<=2*i-1; j++)
{
	cout<<k;
	if(j<i)
	k=k+2;
	else
	k=k-2;
}
cout<<endl;
}
}
