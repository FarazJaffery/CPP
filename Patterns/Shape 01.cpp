#include<iostream>
using namespace std;
int length, widht;
int main()
    {
	cout<<"Enter The length ";
	cin>>length;
	cout<<endl;
		cout<<"Enter The widht ";
	cin>>widht;
	cout<<endl;
	for(int i=0; i<length; i++)
	{
	
	for(int j=0; j<widht; j++)
	{
    cout<<"*";
    }
    cout<<endl;
    }
    system("Pause");
    }
