#include<iostream>

using namespace std;
int main()
{
int a=-1, b=1; 
long c=0;
for(int i=1; i<=200; i++)
{
	c=a+b;
	cout<<c<<", ";
	a=b;
	b=c;
}
cout<<endl;
system("Pause");
return(0);



}



