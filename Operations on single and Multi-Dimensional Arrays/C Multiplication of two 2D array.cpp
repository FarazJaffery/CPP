#include<iostream>
using namespace std;
int main()
{
int row=0, column=0;
		cout<<"Enter the Number of Rows ";
		cin>>row;
		cout<<"Enter the number of column ";
		cin>>column;

	int A[row][column];
	cout<<"Enter the First array elemnents"<<endl<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		cin>>A[i][j];
	}
cout<<endl;
	int B[row][column];
	cout<<"Enter the Second array elemnents"<<endl<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		cin>>B[i][j];
	}
		cout<<endl<<"Your First entered array are {";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[i][j]<<"  ";
}
cout<<"}"<<endl;
	cout<<endl<<"Your second entered array are {";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<B[i][j]<<"  ";
}
cout<<"}"<<endl;
		
	cout<<endl<<"Sum of two 2D array are =  { ";
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
	{	
		A[i][j]=A[i][j]*B[i][j];
		cout<<A[i][j]<<", ";
	}
}
	cout<<"}"<<endl<<endl;
	system("Pause");
	return(0);
}
