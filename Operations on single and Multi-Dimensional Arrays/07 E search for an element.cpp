#include<iostream>
using namespace std;
int main()
{
	int size=0, s=0;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the array elemnents ";
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the element you want to search ";
	cin>>s;
	cout<<"your Search element location is ";
	for(int i=0; i<size; i++)
	{
		if (s==A[i])
		cout<<i;
		
	}

	

cout<<endl<<endl;
	system("pause");
	return(0);
	
} 
