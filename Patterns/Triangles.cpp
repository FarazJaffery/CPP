#include<iostream>
using namespace std;
int size;
int main()
    {
	cout<<"Enter The Size ";
	cin>>size;
	cout<<endl; 
	cout<<"(1)"<<endl;	
	for(int i=0; i<size; i++)
	{	
	for(int j=0; j<size; j++)
	{
	if(j>=i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    cout<<endl; 
    }
    cout<<endl;

	/*22222222___________New_______________________*/
		cout<<"(2)"<<endl;  
		
    	 
	 for(int i=0; i<size; i++)
	{
	
	for(int j=0; j<size; j++)
	{
	if(j<size-i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    cout<<endl;   	
    }
	cout<<endl;
		
  
	 /*33333333__________New_______________________*/	
	 cout<<"(3)"<<endl;    
	 	for(int i=0; i<=size; i++)
	{
	
	for(int j=0; j<=size; j++)
	{
	if(j>size-i)
	cout<<"*";		
	else{
		cout<<" ";
	}
	}
    cout<<endl;  
	}
	 cout<<endl; 
		
	 /*4444444___________New_______________________*/
	 cout<<"(4)"<<endl; 
	 for(int i=1; i<=size; i++)
	{
	
	for(int j=1; j<=size; j++)
	{
	if(j<=i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    cout<<endl;     	
    }
    cout<<endl; 
	 	
   	
	/*555555___________New_______________________*/	
	cout<<"(5)"<<endl; 
    for(int i=0; i<size; i++)
	{	
	for(int j=0; j<size; j++)
	{
	if(j==i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    cout<<endl;   	
    }
	cout<<endl; 
		/*66666666___________New_______________________*/	
		cout<<"(6 i)"<<endl; 
    for(int i=0; i<size; i++)
	{	
	for(int j=size; j>=0; j--)
	{
	if(j==i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    cout<<endl; 
    }
	cout<<endl; 
	/*6ii6ii6ii6ii_______New_______________________*/	
		cout<<"(6 ii)"<<endl; 
    for(int i=0; i<=size; i++)
	{	
	for(int j=0; j<=size; j++)
	{
	if(j==size+1-i)
	cout<<"*";		
	else{
	cout<<" ";
	}
	}
    cout<<endl;   	
    }
	cout<<endl; 
  
	/*77777777___________New_______________________*/	
	cout<<"(7)"<<endl;	 
	for(int i=0; i<size; i++)
	{	
	for(int j=0; j<size; j++)
	{
	if(j>=i)
	cout<<"*";		
	else
	{
	cout<<" ";
	}
	}
    cout<<endl; 
    }
    cout<<endl;
    system("Pause");
}
	
    
