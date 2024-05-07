#include<iostream>
using namespace std;
int main()
{
int size=0;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the First array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	cout<<"Your entered array elements are = { ";
for(int i=0; i<size; i++)
{
	cout<<A[i]<<", ";
}
cout<<"}"<<endl;
//Moving Difference
int B[size-1];
cout<<"Moving Difference of Input Vector are = { ";
for(int i=0; i<size; i++)
{
	B[i]=A[i+1]-A[i];
	if(i<size-1)
	cout<<B[i]<<", ";
}
cout<<"}"<<endl;





}
