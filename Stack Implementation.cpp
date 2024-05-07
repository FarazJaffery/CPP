#include<iostream>
using namespace std;
int top=-1; // intilize top
# define  size 10
int a[size];
int push();
void pop();
void disp();

int main()
{
	system("color 20");
cout<<"\t\t\t\t\t\t\tDesign By: SYED ALI FARAZ JAFFERY\n";
cout<<"\t\t\t\t\t\t\t\t\t(19-ENC-18)\n\n";
	int choice;
	tryagain:
cout<<"\t\t\t\tPress 1 for push data into stack\n";
cout<<"\t\t\t\tPress 2 for pop data from stack\n";
cout<<"\t\t\t\tPress 3 for display data from stack\n";
cout<<"\t\t\t\tPress 4 for exit for program\n";
cin>>choice;
switch (choice)
{
	    case 1:
				push();
				break;
		case 2:
				pop();
				break;
		case 3:
				disp();
				break;
		case 4:
				goto exit;
		default:
				cout<<"Wrong Selection"<<endl;
				goto tryagain;
}
goto tryagain;
exit:
	system("pause");
	return(0);
}
int push()
{
	int v=0;
	cout<<"Enter the element: ";
	cin>>v;
	if(top==size-1)
	{
		cout<<"Stack is Full\n";
	}
	else
	{
		top++;
		a[top]=v;
		cout<<"Integer "<<v<<" added in stack\n";	
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{
		cout<<"Top integer "<<a[top]<<" are removed from stack\n";
		top--;
	}
	
}
void disp()
{
if(top==-1)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{
		cout<<"Elements in stacks are {  ";
		for(int i=0; i<=top; i++)
		cout<<a[i]<<"  ";
		cout<<"}";
	}	
	cout<<endl;
	
}

