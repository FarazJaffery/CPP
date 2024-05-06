#include<iostream>
using namespace std;
int main()
{
	int size=0;
	float  temp=0;
	char selection;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	float A[size];
	cout<<"Enter the array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
 cout<<endl;
 cout<<"\t\t\tSelect sorting type\nFor the Bubble sort press B\nFor Selection sort press S\nFor Insertion sort press I\n";
cin>>selection;
if(selection=='B' || selection=='b')
{
	for(int i=0; i<size; i++)
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
}
else if(selection=='S' || selection=='s')
{
	for(int i=0; i<size; i++)
	{
		int min=A[i];
		for(int j=i; j<size; j++)
	{
		if(min>A[j])
		min=A[j];
	}
	for(int k=0; k<size; k++)
	{
		if(min==A[k])//find loaction of minimum value
		{
		temp=A[i];
		A[i]=min;
		A[k]=temp;
		}
	}		
	}
}
else if(selection=='I' || selection=='i')
{
	for(int i=0; i<size-1; i++)// Insertion sorting
	{
			if(A[i]>A[i+1])
		{
			temp=A[i+1];
			for(int j=i+1; j>0; j--)
			{			
					A[j]=A[j-1];
					if(A[j-2]<temp)
					{
						A[j-1]=temp;
						break;
					}					
			}
		}
	}
}
else
cout<<"Invalid Entry ";
if(selection=='I' || selection=='i' ||selection=='S' || selection=='s' ||selection=='B' || selection=='b')
{
	cout<<"Your Sorted Array are = { ";
for(int i=0; i<size;i++)
cout<<A[i]<<", ";
cout<<"}"<<endl;
}
} 
