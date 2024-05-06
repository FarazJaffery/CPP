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
	int e=0;
	cout<<"Enter the element thar you want to search ";
	cin>>e;
 cout<<endl;
 cout<<"\t\t\tSelect searching type\nFor Linear Search press L\nFor Binary Search press B\nFor Interpolation Search press I\n";
cin>>selection;

if(selection=='L' || selection=='l')
{
	int i;
	for(i=0; i<size; i++)
	{
	if(A[i]==e)
	break;	
	}
	if(i<size)
	cout<<"The element ("<<e<<") is at index location: "<<i<<endl;
	else
	cout<<"Element Not Found.";
}
else if(selection=='B' || selection=='b')// binary search
{
	for(int i=0; i<size; i++)// array sort bubble method
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
    int start=0;
    int end=size-1;
    int pos=0;
    while(start<=end)
    {	
    pos=(start+end)/2;
    if(e<A[pos])
    end=pos-1;
    else if(e>A[pos])
    start=pos+1;
    else if(e==A[pos])
    break;
    }
    if(e==A[pos])
	cout<<"Element ("<<e<<") is at index location: "<<pos<<endl;
	else
	cout<<"Element Not Found.";
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
	int start=0;
    int end=size-1;
    int pos=0;
    while(start<=end)
    {	
    pos=start+(((double)(end-start)/(A[end]-A[start]))*e-A[start]);
    if(e<A[pos])
    end=pos-1;
    else if(e>A[pos])
    start=pos+1;
    else if(e==A[pos])
    break;
    }
    if(e==A[pos])
	cout<<"Element ("<<e<<") is at index location: "<<pos<<endl;
	else
	cout<<"Element Not Found.";
}
else
cout<<"Invalid Entry ";
} 
