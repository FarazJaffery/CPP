#include<iostream>
using namespace std;
int main()
{
	int size=0, th=0;
	cout<<"Enter the array size ";
	cin>>size;
	int x[size],y[size];
	cout<<"Enter the array elements "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>x[i];
	}
	cout<<"Enter the Threshold Value "<<endl;
	cin>>th;
	
	// Thresholding.....
	cout<<"Elements that are greater than or equal to Threshold ("<<th<<") are { ";	
	for(int i=0; i<size; i++)
	{
		if(x[i]>=th)
		cout<<x[i]<<", ";
	}
	cout<<"}"<<endl<<endl;
	system("pause");
	return(0);
}
