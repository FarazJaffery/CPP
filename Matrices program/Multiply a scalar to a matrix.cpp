#include<iostream>
using namespace std;
int main()
{
int row=0, column=0;
float scaler=0;
		cout<<"Enter the Number of Rows ";
		cin>>row;
		cout<<"Enter the number of column ";
		cin>>column;

 float A[row][column];
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
cout<<"\nEnter the scaler value ";
cin>>scaler;
cout<<endl<<"After multiply of "<<scaler<<" with matrix Resultant matrrix are\n"<<endl;
	for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			A[i][j]=A[i][j]*scaler;
			cout<<A[i][j]<<"	";
		}		
		cout<<endl;
}

cout<<endl;

cout<<endl<<endl;
	system("pause");
	return(0);
}


