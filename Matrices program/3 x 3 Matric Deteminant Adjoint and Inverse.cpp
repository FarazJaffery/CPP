#include<iostream>
using namespace std;
int main()
{
	int row =3, column=3, temp;

	float A[row][column];
	cout<<"Enter the Matrice elemnents"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			cout<<"Enter the Element ["<<i<<"]["<<j<<"] ";
			cin>>A[i][j];
		}
	}
cout<<endl;
		cout<<endl<<"Your Entered Matrix elements are\n\n";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<"    "<<A[i][j]<<"  ";
		cout<<endl;
}
float determinant=0;
for(int i=0;  i<3;   i++)
determinant = determinant + (A[0][i]*(A[1][(i+1)%3]*A[2][(i+2)%3] - A[1][(i+2)%3]*A[2][(i+1)%3]));
cout<<"\nThe Determinant of the matric are = "<<determinant<<endl;
// adjoint calculate
float cofactor_A [3][3]={0,0,0 ,0,0,0};
cout<<endl<<"The Cofactor of the Matric are "<<endl<<endl;
for(int i=0;   i<3;   i++)
{
	for(int j=0;   j<3;  j++)
	{
	cofactor_A[i][j]=(A[(i+1)%3][(j+1)%3]*A[(i+2)%3][(j+2)%3])-(A[(i+2)%3][(j+1)%3]*A[(i+1)%3][(j+2)%3]);
	cout<<"\t"<<cofactor_A[i][j]<<"  ";
	}
	cout<<endl;
}
float adj_A[3][3]={0,0,0 ,0,0,0};
cout<<endl<<"The Adjoint of the Matric are "<<endl<<endl;
for(int i=0;   i<3;   i++)
{
	for(int j=0;   j<3;  j++)
	{
	adj_A[i][j]=cofactor_A[j][i];
	cout<<"\t"<<adj_A[i][j]<<"  ";
	}
	cout<<endl;
}
cout<<endl<<"The Inverse of the Matric are "<<endl<<endl;
float inverse_A[3][3];
for(int i=0;   i<3;   i++)
{
	for(int j=0;   j<3;  j++)
	{
	inverse_A[i][j]=(adj_A[i][j]/determinant);
	cout<<"\t"<<inverse_A[i][j]<<"  ";
	}
	cout<<endl;
}
cout<<endl<<"After Multiplication of Input matric with its inverse we get \n\n ";
float k[3][3];
for(int i=0;   i<3;   i++)
{
	for(int j=0;   j<3;  j++)
	{
	k[i][j]=A[i][0]*inverse_A[0][j] + A[i][1]*inverse_A[1][j] + A[i][2]*inverse_A[2][j];
	cout<<"\t"<<k[i][j]<<"  ";
	}
	cout<<endl;
    }














cout<<endl<<endl;
	system("pause");
	return(0);
}


