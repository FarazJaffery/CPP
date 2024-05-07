#include<iostream>
using namespace std;
int main()
{
	char task, again;
	cout<<"\t\tWhat you want to do?\nFor Additin press A\nFor Subtraction press S\nFor multiplication press M\nFor Determinant press D\nFor transpose press T\n";
	cin>>task;
	if(task=='A' || task=='a' || task=='M' || task=='m' || task=='S' || task=='s' || task=='D' || task=='d' || task=='T' || task=='t' )
{
	if(task=='A' || task=='a' || task=='S' || task=='s' )
{
int row=0, column=0;
		cout<<"Enter the Number of Rows ";
		cin>>row;
		cout<<"Enter the number of column ";
		cin>>column;

	int A[row][column];
	cout<<"Enter the First array elemnents from rows to column"<<endl;
	for(int i=0; i<row; i++)
	{
		cout<<"Enter Row no "<<i+1<<" elements\n";
		for(int j=0; j<column; j++)
		cin>>A[i][j];
	}
cout<<endl;
	int B[row][column];
	cout<<"Enter the Second array elemnents from rows to columns"<<endl;
	for(int i=0; i<row; i++)
	{
		cout<<"Enter Row no "<<i+1<<" elements\n";
		for(int j=0; j<column; j++)
		cin>>B[i][j];
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
if(task=='A' || task =='a')
{
	int C[row][column];
cout<<endl<<"After Addion of both matrixes Resultant matrrix are"<<endl;
	for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j]<<"	";
	}
		cout<<endl;
}
}
if(task=='S' || task =='s')
{
		int C[row][column];
cout<<endl<<"After Subtraction of both matrixes Resultant matrrix are"<<endl;
	for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			C[i][j]=A[i][j]-B[i][j];
			cout<<C[i][j]<<"	";
		}		
		cout<<endl;
}

cout<<endl;
}}
if ( task=='D' || task=='d' || task=='T' || task=='t' )
{
int row=0, column=0;
		cout<<"Enter the Number of Rows of first matrix ";
		cin>>row;
		cout<<"Enter the number of column of first matrix ";
		cin>>column;
	int A[row][column];
	cout<<"Enter the array elemnents from rows to column"<<endl;
	for(int i=0; i<row; i++)
	{
		cout<<"Enter Row no "<<i+1<<" elements\n";
		for(int j=0; j<column; j++)
		cin>>A[i][j];
	}
	cout<<endl<<"Your Entered Matrix elements are\n\n";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[i][j]<<"	";
		cout<<endl;
}
cout<<endl;
if(task =='T' || task == 't')
{
int temp;
temp=row;
row=column;
column=temp;
cout<<"\nThe tranpose of a matrix are \n\n";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[j][i]<<"	";
		cout<<endl;
}
if(task =='D' || task == 'd')// abhi logic bnanani je
{	
}

cout<<endl;	
}
}
if(task =='M'|| task=='m')
{
	cout<<"If to want to scaler multiplication press S\nIf you want to matrixes Multiplication prees M\n";
	char multiplication_task;
	cin>>multiplication_task;
	if(multiplication_task=='s' || multiplication_task=='S')
	{
		int row=0, column=0;
		cout<<"Enter the Number of Rows of first matrix ";
		cin>>row;
		cout<<"Enter the number of column of first matrix ";
		cin>>column;

	int A[row][column];
	cout<<"Enter the array elemnents from rows to column"<<endl;
	for(int i=0; i<row; i++)
	{
		cout<<"Enter Row no "<<i+1<<" elements\n";
		for(int j=0; j<column; j++)
		cin>>A[i][j];
	}
cout<<endl;
cout<<"\nEnter the scaler value ";
int scaler;
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
}
	if(multiplication_task=='M' || multiplication_task=='m')
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
}
}// Multipliction end

cout<<endl;
}// main if command end
else
cout<<"Invalid Entry\n";
tryagain2:
cout<<endl<<endl<<"ARE YOU WANT TO TRY AGAIN {Y/N}? "<<endl<<endl;
cin>>again;
cout<<endl<<endl;
if (again=='y'|| again=='Y')
{
	cout<<endl<<endl;
main();
}
else if (again=='n'|| again=='N')
{
for(int j=1; j<=75; j++)
	cout<<" ";
cout<<"THANKYOU !"<<endl<<endl;
cout<<endl;				
system("pause");
cout<<endl<<endl<<"PRESS ENTER OR ANY KEY FOR EXIT "<<endl<<endl;
}
else if (again!='n'|| again!='N' || again!='y'|| again!='Y')
{
cout<<"INVALID ENTRY"<<endl<<endl;
	goto tryagain2;
}
return(0);
}

