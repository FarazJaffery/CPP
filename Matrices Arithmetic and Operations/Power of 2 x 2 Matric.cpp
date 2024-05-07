#include<iostream>
using namespace std;
int main()
{
int row=2, column=2, power=0 ;
	double A[row][column];
	cout<<"Enter the array elemnents from rows to column"<<endl;
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

cout<<endl<<"Enter the power ";
cin>>power;
double power_matric[row][column]={{A[0][0],A[0][1]},{A[1][0],A[1][1]}};
cout<<endl<<"Power of the matric are "<<endl<<endl;
for(int p=1; p<power; p++)
{
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			power_matric[i][j]=(power_matric[i][0]*A[0][j])+(power_matric[i][1]*A[1][j]);
		}
}
}
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		{
			cout<<power_matric[i][j]<<"     ";
		}
		cout<<endl;
}

cout<<endl<<endl;
	system("pause");
	return(0);
}


