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
	k=size;
	for(int j=1; j<=size; j++)
{
	cout<<k;
	if(j<i)
	k--;
}
cout<<endl;
}
}
