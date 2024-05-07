#include<iostream>
using namespace std;
int main()
{
	int size=0;
	cout<<"Enter the array size ";
	cin>>size;
	int A [size];
	cout<<endl<<"Enter the array elements "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
int c=0,i=0;
cout<<"Enter the Number you want to check "<<endl;
cin>>c;
	for(i=0; i<size; i++)
	{
		if(c==A[i])
	break;
	}
	if(c==A[i])
	cout<<c<<" is present in array "<<endl;
	else
	cout<<c<<" is not present in array "<<endl;
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
