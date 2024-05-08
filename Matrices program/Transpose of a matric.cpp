#include<iostream>
using namespace std;
int main()
{
int row=0, column=0 ;
		cout<<"Enter the Number of Rows ";
		cin>>row;
		cout<<"Enter the number of column ";
		cin>>column;

	int A[row][column];
	cout<<"\nEnter the array elemnents from rows to column"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cout<<"Enter the Element ["<<i<<"]["<<j<<"]";
			cin>>A[i][j];
		}
	}
cout<<endl;
		cout<<endl<<"Your Entered Matrix elements are\n\n";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[i][j]<<"	";
		cout<<endl;
}
int transpose_A[column][row];
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			transpose_A[j][i]=A[i][j];
		}
}
cout<<"\nThe tranpose of a matrix are \n\n";
for(int i=0; i<column; i++)
{
		for(int j=0; j<row; j++)
		cout<<transpose_A[i][j]<<"	";
		cout<<endl;
}

cout<<endl;

cout<<endl<<endl;
	system("pause");
	return(0);
}


