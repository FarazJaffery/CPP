#include<iostream>
using namespace std;
int main()
{
int row1=0, column1=0;
int row2=0, column2=0;
		cout<<"Enter the Number of Rows ";
		cin>>row1;
		cout<<"Enter the number of column ";
		cin>>column1;

	float A[row1][column1];
	int A[row][column];
	cout<<"\nEnter the First array elemnents from rows to column"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cout<<"Enter the Element ["<<i<<"]["<<j<<"]";
			cin>>A[i][j];
		}
	}
cout<<endl;
	int B[row][column];
	cout<<"\nEnter the Second array elemnents from rows to columns"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cout<<"Enter the Element ["<<i<<"]["<<j<<"]";
			cin>>B[i][j];
		}
	}
		cout<<endl<<"Your First Matrix elements are\n";
for(int i=0; i<row1; i++)
{
		for(int j=0; j<column1; j++)
		cout<<A[i][j]<<"	";
		cout<<endl;
}
	cout<<endl<<"Your second entered Matrix elements are\n";
for(int i=0; i<row2; i++)
{
		for(int j=0; j<column2; j++)
		cout<<B[i][j]<<"	";
		cout<<endl;
}
if(column1==row2)
{
	cout<<endl<<"After Multiplication of A matric with B \n\n ";
float C[row1][column2];
for(int i=0; i<row1; i++)
{
		for(int j=0; j<column2; j++)
		{
			
			C[i][j]=(A[i][0]*B[0][j]+A[i][1]*B[1][j]);
			cout<<C[i][j]<<"\t";
		}
	
		cout<<endl;
}
main();
}
else
cout<<"Multiplicatipon Not Possible Because column of Matric A are not equal to the Row of Matric B"<<endl;
cout<<endl<<endl;
	system("pause");
	return(0);
}


