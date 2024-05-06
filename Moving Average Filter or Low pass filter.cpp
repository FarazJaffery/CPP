#include<iostream>
using namespace std;
int main()
{
	int Array_Size=0, Fake_element=0;
	float Window=0,Shift=0, Sum=0, Ssp=0;
	
	cout<<"Please Enter the Array size ";
	cin>>Array_Size;
	cout<<"Enter The Windows "<<endl;
	cin>>Window;
	cout<<"Enter The Shift value "<<endl;
	cin>>Shift;	
	Fake_element=(Window-1)+(Array_Size-1)*(Shift-1);// formula for fake elements
//	cout<<endl<<"Fake elements = "<<Fake_element<<endl;

	float A [Array_Size+Fake_element];// Input array
	float B [Array_Size];// output array
	
	cout<<"Enter the array elements "<<endl;
	for(int i=0; i<Array_Size; i++)
	{
		cin>>A[i];
	}
	

	for(int F=Array_Size; F<Array_Size+Fake_element; F++)// Addition of fake elements in array fale points
	{
		A[F]=A[Array_Size-1];// Fake element is last array integer...
	}
	
for(int i=0; i<Array_Size; i++)
{
	for(int j=Ssp; j<Ssp+Window; j++)// Ssp mean shift strat point	for(int i=0; i<6; i++)
	{
		Sum=Sum+A[j];
	}
	Ssp=Ssp+Shift;
	B[i]=Sum/Window;
	Sum=0; // force intialization	
}
cout<<"\nAfter filteration your data ara = { ";
	for(int i=0; i<Array_Size; i++)
{
	cout<<B[i]<<", ";
}
cout<<"}"<<endl<<endl;
	system("pause");
	return(0);
	
} 
