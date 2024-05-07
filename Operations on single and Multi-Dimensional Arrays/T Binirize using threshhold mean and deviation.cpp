#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int size=0;
	float mean, deviation, sum=0, size1;
	cout<<"Enter the array size ";
	cin>>size;
	size1=size;//save int variale value into float variable value
	float A [size];
	cout<<endl<<"Enter the array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}

cout<<"Your entered array elements are = { ";
for(int i=0; i<size; i++)
{
	cout<<A[i]<<", ";
	sum=sum+A[i];
}
	cout<<"}"<<endl;
	mean=(sum/size1);
	cout<<"Binary values of your entered array elements with respect to its mean are = { ";
for(int i=0; i<size; i++)
{
	if(A[i]<=mean)
		cout<<"0, ";
		else
		cout<<"1, ";

}
	cout<<"}"<<endl;
	sum=0;
	 for(int i=0; i<size; i++)
	 {
	 	sum=sum+(A[i]-mean)*(A[i]-mean);
	 }
	 deviation=(sum/(size1));
	 deviation=sqrt(deviation);
	
	cout<<"Binary values of your entered array elements with respect to its deviation are = { ";
for(int i=0; i<size; i++)
{
	if(A[i]<=deviation)
		cout<<"0, ";
		else
		cout<<"1, ";

}
	cout<<"}"<<endl;
	
	
//		cout<<endl<<"deviation ="<<deviation<<endl;
	
	
	
	
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
