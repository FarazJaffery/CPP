#include <iostream>
using namespace std;
int main()
{
	int size=0; 	
	cout<<"Enter the size of the arrays ";
	cin>>size;
	int element1 [size];
	
	cout<<endl<<"Enter the Elements for First array "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>element1[i];
	}
	cout<<endl<<"Your First Array is = { ";
	for(int i=0; i<size; i++)
	cout<<element1[i]<<", ";
	
	int element2 [size];
	cout<<"}"<<endl<<endl<<"Enter the Elements for Second array  "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>element2[i];
	}
	cout<<endl<<"Your Second array is = { ";
	for(int i=0; i<size; i++)
	cout<<element2[i]<<", ";
	cout<<"}"<<endl;	
	
	
	// Now multiplex both arrays
	
	int mux [size*2];	
	for(int i=0; i<(size*2); i++)
	{
		mux[2*i]=element1[i];	
		mux[2*i+1]=element2[i];			
	}
	cout<<endl<<"Your Multiplex array are =  { ";

	for(int i=0; i<size*2; i++)
	{
		cout<<mux[i]<<", ";
	}
	cout<<"}"<<endl<<endl;
	
	//Now DeMultiplex again both arrays data 
	cout<<endl;

	    int element_d1[size];
		int element_d2[size];
			// Why Demultiplex in new arrays // Why introduce news arrays here  ???
	//Because old array have already user input elements. so we need to define new ayyays here..
	
	for(int i=0; i<(size*2); i++)
	{
		element_d1[i]=mux[2*i];	
		element_d2[i]=mux[2*i+1];		
		
	}

		cout<<"Your Fisrt Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d1[i]<<", ";
		cout<<"}"<<endl;
			cout<<"Your Second Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)	
		cout<<element_d2[i]<<", ";
		cout<<"}"<<endl;
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
