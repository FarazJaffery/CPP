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

	for(int j=1; j<=size*size; j=j+1)
{
	if(j*2<=i)
cout<<"*";
}
cout<<endl;
}
}
