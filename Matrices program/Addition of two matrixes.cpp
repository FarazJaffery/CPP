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
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[i][j]<<"	";
		cout<<endl;
}
	cout<<endl<<"Your second entered Matrix elements are\n";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<B[i][j]<<"	";
		cout<<endl;
}
	int C[row][column];
	int trace=0;
cout<<endl<<"After Addion of both matrixes Resultant matrrix are"<<endl;
	for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j]<<"	";
	}
				trace=trace +C[i][i];
		cout<<endl;
}
	cout<<"\n\nTrace of matrics are = "<<trace<<endl;

cout<<endl;

cout<<endl<<endl;
	system("pause");
	return(0);
}


