#include<iostream>
using namespace std;
int main()
{
int size;
char t='a';

cout<<"ENTER THE SIZE"<<endl;
cin>>size;
cout<<endl;
for(int i=1; i<=size; i++)
{
	
	for(int j=1; j<=size+1; j++)
	{
		cout<<t;
		if(i>=j)
		t++;
	}
	
cout<<endl;
}
}
