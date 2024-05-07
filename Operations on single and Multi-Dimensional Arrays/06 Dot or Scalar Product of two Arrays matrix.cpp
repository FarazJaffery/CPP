#include<iostream>
using namespace std;
int main()
{
int row1=0, column1=0, row2=0, column2=0;
		cout<<"Enter the Number of Rows of first matrix ";
		cin>>row1;
		cout<<"Enter the number of column of first matrix ";
		cin>>column1;

	int A[row1][column1];
	cout<<"Enter the First array elemnents from rows to column"<<endl;
	for(int i=0; i<row1; i++)
	{
		cout<<"Enter Row no "<<i+1<<" elements\n";
		for(int j=0; j<column1; j++)
		cin>>A[i][j];
	}
cout<<endl;
cout<<"Enter the Number of Rows of Second matrix ";
		cin>>row2;
		cout<<"Enter the number of Second of first matrix ";
		cin>>column2;
	int B[row2][column2];
	cout<<"Enter the Second array elemnents from rows to columns"<<endl;
	for(int i=0; i<row2; i++)
	{
		cout<<"Enter Row no "<<i+1<<" elements\n";
		for(int j=0; j<column2; j++)
		cin>>B[i][j];
	}
		cout<<endl<<"Your First Matrix elements are\n";
for(int i=0; i<row1; i++)
{
		for(int j=0; j<column1; j++)
		cout<<A[i][j]<<" 	";
		cout<<endl;
}
	cout<<endl<<"Your second entered Matrix elements are\n";
for(int i=0; i<row2; i++)
{
		for(int j=0; j<column2; j++)
		cout<<B[i][j]<<"	";
		cout<<endl;
}
cout<<endl;
if(column1==row2)
{
	// dot product
	int C[row1][column2];// output array
	for(int i=0; i<row1; i++)
{
		for(int j=0; j<column2; j++)
	{
		int sum=0;
		for(int k=0; k<row2; k++)
	{
	sum=sum+A[i][k]*B[k][j];
	}
	C[i][j]=sum;
	}
}
cout<<endl<<"\nThe dot product of the above matrices are \n\n";
for(int i=0; i<row1; i++)
{
		for(int j=0; j<column2; j++)
		cout<<C[i][j]<<"	";
		cout<<endl;
}
}
else
cout<<"Dot poduct of the matrix are not possible because the number of column in 1st matrix are not equal to the number of rows in 2nd matrix";

	
cout<<endl<<endl;
	system("pause");
	return(0);	
} 
