#include<iostream>

using namespace std;
int main()
{
	int size=0, max=0, min=0;
cout<<"Enter The Array Size ";
cin>>size;
int x[size];
cout<<"Enter the array element ";
for(int i=0; i<size; i++)
{
	cin>>x[i];
}
max=x[0];
for(int i=1; i<size; i++)
{
	if(max<x[i])
	max=x[i];
}
cout<<"Maximum Number is "<<max<<endl;

min=x[0];
for(int i=1; i<size; i++)
{
	if(min>x[i])
	min=x[i];
}
cout<<"Minimum Number is "<<min<<endl;


cout<<endl;
system("Pause");
return(0);
}



