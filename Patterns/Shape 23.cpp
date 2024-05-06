#include<iostream>
using namespace std;
int size;
int main()
    {
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl;     	 
	 for(int i=0; i<size*2-1; i++)
	{
	if(i<size)
	{
	for(int j=0; j<size; j++)
	{
	if(j<size-i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
	for(int k=0; k<size; k++)
	{
	if(i<=k)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    }
    else
    {
    	i=i-size+1;
    for(int j=0; j<size; j++)
    	{
    	if(i>=j)
    	cout<<"*";
    	else
	cout<<" ";
         }
         	for(int k=0; k<size; k++)
	{
	if(k>=size-i-1)
	cout<<"*";		
	else{
		cout<<" ";
	}	
	}
	i=i+size-1;
}
    cout<<endl;   	
    }    
	system("Pause");
	}
