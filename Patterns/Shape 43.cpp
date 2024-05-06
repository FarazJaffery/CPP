#include<iostream>
using namespace std;
int main()
{
int size;

cout<<"ENTER THE SIZE"<<endl;
cin>>size;
cout<<endl;
int k;
for(int i=1; i<size*2; i++)
{
	k=size;
	for(int j=1; j<size*2; j++)
{
	cout<<k;
	if(j<i && i<=size)
	k--;
     if(j>=size*2-i && i<=size)
k++;
if(i>size && j<size*2-i)
k--;
if(i>size && j>i-1)
k++;

}
cout<<endl;
}
}
