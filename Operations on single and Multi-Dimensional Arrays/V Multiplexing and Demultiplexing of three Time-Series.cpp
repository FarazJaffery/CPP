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
	cout<<endl<<"Your First Array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<element1[i]<<", ";
	
	int element2 [size];
	cout<<"}"<<endl<<endl<<"Enter the Elements for Second array  "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>element2[i];
	}
	cout<<endl<<"Your Second array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<element2[i]<<", ";
	cout<<"}"<<endl;
	int element3[size];
	cout<<endl<<"Enter the Elements for Third array "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>element3[i];
	}
	cout<<endl<<"Your Third Array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<element3[i]<<", ";
		cout<<"}"<<endl;	
	
	
	// Now multiplex both arrays
	
	int mux [size*3];	
	for(int i=0; i<(size*2); i++)
	{
		mux[3*i]=element1[i];	
		mux[3*i+1]=element2[i];	
		mux[3*i+2]=element3[i];		
	}
	cout<<endl<<"Your Multiplex array are =  { ";

	for(int i=0; i<size*3; i++)
	{
		cout<<mux[i]<<", ";
	}
	cout<<"}"<<endl<<endl;
	
	//Now DeMultiplex again both arrays data 
	cout<<endl;

	    int element_d1[size];
		int element_d2[size];
		int element_d3[size];
	// Why Demultiplex in new arrays // Why introduce news arrays here  ???
	//Because old array have already user input elements. so we need to define new ayyays here..
	
	for(int i=0; i<(size); i++)
	{
		element_d1[i]=mux[3*i];	
		element_d2[i]=mux[3*i+1];
		element_d3[i]=mux[3*i+2];		
		
	}

	cout<<"Your First Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d1[i]<<", ";
		cout<<"}"<<endl;
			cout<<"Your Second Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d2[i]<<", ";
		cout<<"}"<<endl;
		cout<<"Your Third Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d3[i]<<", ";
		cout<<"}"<<endl;
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
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
	cout<<endl<<"Your First Array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<element1[i]<<", ";
	
	int element2 [size];
	cout<<"}"<<endl<<endl<<"Enter the Elements for Second array  "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>element2[i];
	}
	cout<<endl<<"Your Second array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<element2[i]<<", ";
	cout<<"}"<<endl;
	int element3[size];
	cout<<endl<<"Enter the Elements for Third array "<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>element3[i];
	}
	cout<<endl<<"Your Third Array elements are = { ";
	for(int i=0; i<size; i++)
	cout<<element3[i]<<", ";
		cout<<"}"<<endl;	
	
	
	// Now multiplex both arrays
	
	int mux [size*3];	
	for(int i=0; i<(size*2); i++)
	{
		mux[3*i]=element1[i];	
		mux[3*i+1]=element2[i];	
		mux[3*i+2]=element3[i];		
	}
	cout<<endl<<"Your Multiplex array are =  { ";

	for(int i=0; i<size*3; i++)
	{
		cout<<mux[i]<<", ";
	}
	cout<<"}"<<endl<<endl;
	
	//Now DeMultiplex again both arrays data 
	cout<<endl;

	    int element_d1[size];
		int element_d2[size];
		int element_d3[size];
	// Why Demultiplex in new arrays // Why introduce news arrays here  ???
	//Because old array have already user input elements. so we need to define new ayyays here..
	
	for(int i=0; i<(size); i++)
	{
		element_d1[i]=mux[3*i];	
		element_d2[i]=mux[3*i+1];
		element_d3[i]=mux[3*i+2];		
		
	}

	cout<<"Your First Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d1[i]<<", ";
		cout<<"}"<<endl;
			cout<<"Your Second Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d2[i]<<", ";
		cout<<"}"<<endl;
		cout<<"Your Third Entered Array Elements are =  { ";
		for(int i=0; i<size; i++)
		cout<<element_d3[i]<<", ";
		cout<<"}"<<endl;
	cout<<endl<<endl;
	system("Pause");
	return(0);
}
