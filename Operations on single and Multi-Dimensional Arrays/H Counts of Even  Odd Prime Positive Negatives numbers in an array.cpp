#include<iostream>
using namespace std;
int main()
{
	int size=0, even=0, odd=0, prime=0,j=0, positive=0, negative=0;
	cout<<"Enter the array size ";
	cin>>size;
	int A [size];
	cout<<endl<<"Enter the array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	for(int i=0; i<size; i++)
	{
	if(A[i]%2==0)
	even++;
	if(A[i]%2!=0)
	odd++;
	if(A[i]>0)
	positive++;
	if(A[i]<0)
	negative++;	
	for( j=2; j<A[i]; j++)
		{
			if(A[i]%j==0)
			break;
		}
		if(j==A[i])
		prime++;	
	}
	cout<<"Even numbers in the array = "<<even<<endl;
	cout<<"Odd numbers in the array = "<<odd<<endl;
	cout<<"Positive numbers in the array = "<<positive<<endl;
	cout<<"Negative numbers in the array = "<<negative<<endl;
	cout<<"Prime numbers in the array = "<<prime<<endl;	
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
