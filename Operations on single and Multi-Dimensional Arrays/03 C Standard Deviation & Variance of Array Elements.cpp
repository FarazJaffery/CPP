#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int size=0;
	float mean, deviation, variance, sum=0, size1;
		
	cout<<"Please Enter the Array size ";
	cin>>size;
	size1=size;//save int variale value into float variable value
	float A[size];
	cout<<"Enter the array elemnents ";
	for(int i=0; i<size; i++)
	{
		cin>>A[i];
		sum=sum+A[i];
	}
	mean=(sum/size1);
//	cout<<"Mean = "<<mean<<endl;
	//standard deviation and variance 
	sum=0;
	 for(int i=0; i<size; i++)
	 {
	 	sum=sum+((A[i]-mean)*(A[i]-mean));
	 }
	 cout<<endl<<"sum = "<<sum<<endl<<endl;
	 variance=(sum/(size1));
	 deviation=sqrt(variance);
	 cout<<"Standard Deviation = "<<deviation<<"jobs"<<endl;
	cout<<"Standard Variance = "<<variance<<"jobs^2"<<endl;
	  system("pause");
  return(0);
	 
}
