#include<iostream>
using namespace std;
int main()
{
int size=0, sum=0, temp=0;
int mean=0, mode=0, median=0;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	int A[size];
	cout<<"Enter the array elemnents "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
	}
  for(int i=0; i<size; i++)
	{
		sum=sum+A[i];
	}
	mean=(sum/size);
	 cout.precision(0);
	cout<<"Mean of the array elements is = "<<mean;
for(int i=0; i<size; i++)// array sorting
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
if(size%2==0)
{
median=	(A[size/2]+A[(size/2)-1])/2;
}
else
median=A[size/2];
cout<<endl<<"Median of the array is = "<<median<<endl;
		
	// mode find program.....
int count=1,count1=0, a=1;
mode=A[size-1];// highest element store in mode after array sorting....

	for(int i=0; i<size; i++)
	{	
		for(int j=i+1; j<size; j++)
		{
			
			if(A[i]==A[j] )
			{
			if(A[i]!=mode && count1>=count)
			{
			count=a;
			count1=a;			
			mode=A[i];// store result only one time in mode 
			count++; 
			break; 
	        }
	        if(A[i]==mode)// counting of repeating elements
	        {
	        	count++;
	        	break;
			}	        
			}
			if(A[i]==A[j]  && A[i]!=mode)// comparisine that exact mode with repating elements
			{
				count1++;
				break;
			}
		}
	}
	cout<<"Mode of the array are  = "<<mode<<endl;
//	cout<<"Count = "<<count<<endl;

cout<<endl<<endl;
	system("pause");
	return(0);
	
} 
