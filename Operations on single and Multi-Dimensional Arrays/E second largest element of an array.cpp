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
		cout<<endl<<"Your First entered array are { ";
for(int i=0; i<row; i++)
{
		for(int j=0; j<column; j++)
		cout<<A[i][j]<<"  ";
}
cout<<"}"<<endl;
	
	int max=A[0][0];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		if(max<A[i][j])
		max=A[i][j];
	}
	int s_max =A[0][0];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		if(A[i][j]!=max && s_max<A[i][j]  )
		s_max=A[i][j];
	}
	cout<<"Second largest element in array is = "<<s_max<<endl;
	
	
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
