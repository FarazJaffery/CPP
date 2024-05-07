#include<iostream>
using namespace std;
int main()
{
int size=0; 
float sum=0;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the array elemnents "<<endl;
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
sum=(sum/size);
int i;
for(i=0; i<size; i++)
	{
		if(sum==A[i])
	break;
	}
	if(sum==A[i])
	cout<<"Average of Entered array is also its element which is = "<<sum<<endl;
	else
	cout<<"Average of Entered array is not its element "<<endl;
	cout<<endl<<endl;

cout<<endl<<endl;
	system("pause");
	return(0);
	
} 
