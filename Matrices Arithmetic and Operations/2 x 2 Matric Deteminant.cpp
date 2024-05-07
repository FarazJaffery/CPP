#include<iostream>
using namespace std;
int main()
{
	int row =2, column=2, temp;

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
float determinant = (A[0][0]*A[1][1])-(A[1][0]*A[0][1]);
cout<<"\nThe Determinant of the matric are = "<<determinant<<endl;
// adjoint calculate
temp=A[0][0];
A[0][0]=A[1][1];
 A[1][1]=temp;
 A[0][1]=-1*A[0][1];
 A[1][0]=-1*A[1][0];
 cout<<endl<<"The Adjoint of the  Matrix elements are\n\n ";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[i][j]<<"\t";
		cout<<endl;
}
// inverse calclute
 cout<<endl<<"The Inverse of the  Matrix elements are\n\n ";
 float B[row][column];
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			B[i][j]=(A[i][j]/determinant);
			cout<<B[i][j]<<"\t";
		}
	
		cout<<endl;
}
// optinol
// adjoint calculate
temp=A[1][1];
A[1][1]=A[0][0];
 A[0][0]=temp;
 A[0][1]=-1*A[0][1];
 A[1][0]=-1*A[1][0];
cout<<endl<<"After Multiplication of A matric with its inverse we get \n\n";
float X[row][column];
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			
			X[i][j]=(A[i][0]*B[0][j]+A[i][1]*B[1][j]);
			cout<<X[i][j]<<"\t";
		}
	
		cout<<endl;
}
cout<<endl<<endl;
	system("pause");
	return(0);
}


