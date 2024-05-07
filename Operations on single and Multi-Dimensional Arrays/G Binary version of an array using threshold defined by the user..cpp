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
	
	// Thresholding.....
		cout<<"Enter the Threshold Value "<<endl;
	cin>>th;
	

	
	for(int i=0; i<size; i++)
	{
		if(x[i]<th)
		y[i]=0;
		else
		y[i]=1;
	}
	cout<<endl<<"Binary Value of your Entered array by threshold ("<<th<<") are ";
		for(int i=0; i<size; i++)
	{
		cout<<y[i];
	}
	cout<<endl<<endl;
	system("pause");
	return(0);
}
