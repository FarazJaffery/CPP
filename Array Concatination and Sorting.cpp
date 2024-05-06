#include<iostream>
using namespace std;
int main()
{
int size1=0, size2=0; 
	
	cout<<"Enter the size of First array  ";
	cin>>size1;
	int element1 [size1];
	
	cout<<endl<<"Enter the Elements for First array "<<endl;
	for( int i=0; i<size1; i++)
	{
		cin>>element1[i];
	}
	cout<<endl<<"Your First Array are = { ";
	for(int i=0; i<size1; i++)
	cout<<element1[i]<<", ";
		cout<<"}";
	
		cout<<endl<<endl<<"Enter the size of Second array  ";
	cin>>size2;
	int element2 [size2];
	cout<<endl<<"Enter the Elements for Second array  "<<endl;
	for( int i=0; i<size2; i++)
	{
		cin>>element2[i];
	}
	
	cout<<endl<<"Your Second array are = { ";
	for(int i=0; i<size2; i++)
	cout<<element2[i]<<", ";
		cout<<"}"<<endl;
	
	//  concatination
	int concatination[size1+size2];

	for(int i=0; i<size1+size2; i++)
	{
		if(i<size1)
		concatination[i]=element1[i];
		else
		{
			concatination[i]=element2[i-size1];
		
		}
		
	}
	
	cout<<endl<<"Your concatination array are = { ";
	for(int i=0; i<size1+size2; i++)
	{
		cout<<concatination[i]<<", ";
	}
	cout<<"}"<<endl<<endl;
	system("pause");
	return(0);
}

