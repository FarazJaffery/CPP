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
	h=2;
	for(int j=1; j<=size-i+1; j++)
{
	cout<<h;
	if(j>=2)
	{	
	t++;	

				if( t%2==0)
			h=6;	
			else
				h=4;	
	}


}
cout<<endl;
}
}
