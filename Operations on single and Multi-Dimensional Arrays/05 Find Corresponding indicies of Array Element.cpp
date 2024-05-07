#include<iostream>
using namespace std;
int main()
{
	int size=0;
	
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the array elemnents ";
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	cout<<endl<<"Number who are equals to their corresponding indicies are "<<endl;
	
	for(int j=0; j<size; j++)
	{
		if(A[j]==j)
		cout<<A[j]<<", ";
	}
	

cout<<endl<<endl;
	system("pause");
	return(0);
	
} 
