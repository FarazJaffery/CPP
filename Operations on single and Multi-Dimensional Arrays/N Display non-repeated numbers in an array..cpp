#include<iostream>
//#include <bits/stdc++.h> // sort(A, A+size); // Also use
using namespace std;
int main()
{
	int size=0,  temp=0;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
	cout<<"Your entered array elements are = { ";
for(int i=0; i<size; i++)
{
	cout<<A[i]<<", ";
}
	cout<<"}"<<endl;
	for(int i=0; i<size; i++)//array sorting  (not compulsory)
{		
		for(int j=0;j<size;j++)
		{
			if(A[i]<A[j])// for decending order if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	temp=0;
cout<<"Non Repeated elemnets in the array are { ";	
for(int i=0; i<size; i++)
{
	int x=0;
	for(int j=i+1; j<size; j++)
	{
      if(A[i]==A[j])
      {
      	temp=A[i];// repeated element stored in temp
      	break;
	  }
       if(A[i]!=A[j] && A[i]!=temp)// non repeatred element check and then repeted element check with last value
      x++;
    }
    if(x==size-i-1)
    cout<<A[i]<<", ";
}
	cout<<"}"<<endl<<endl;
	system("Pause");
	return(0);
} 
