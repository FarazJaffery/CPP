#include<iostream>
using namespace std;
int main()
{
	int size=0; 
	
	cout<<"Enter the size of array  ";
	cin>>size;
	float temp, A [size];
	
	cout<<endl<<"Enter the Elements for First array "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	for( int i=0; i<size/2; i++)
	{
		temp=A[size-1-i];
		A[size-1-i]=A[i];
		A[i]=temp;
	}
	cout<<endl<<endl<<"Reverse array is "<<endl;
	for(int i=0; i<size; i++)
	{
			cout<<A[i]<<", ";
	}
	cout<<endl;
	system("Pause");
	return(0);
}
