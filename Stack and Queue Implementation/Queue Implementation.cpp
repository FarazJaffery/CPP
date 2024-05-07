#include<iostream>
using namespace std;

# define  size 10
int A[size];
int front =-1;
int rear=-1;

void enqueue();
void dequeue();
void showfront();
void displayqueue();

int main()
{
	system("color 5F");
cout<<"\t\t\t\t\t\t\tDesign By: SYED ALI FARAZ JAFFERY\n";
cout<<"\t\t\t\t\t\t\t\t\t(19-ENC-18)\n\n";
	int choice;
	tryagain:
cout<<"\t\t\t\tPress 1 for Enter a data in queue\n";
cout<<"\t\t\t\tPress 2 for Delete a data in queue\n";
cout<<"\t\t\t\tPress 3 For Display the front\n";
cout<<"\t\t\t\tPress 4 for Display the queue\n";
cout<<"\t\t\t\tPress 5 for exit for program\n";
cin>>choice;
switch (choice)
{
    	case 1:
			enqueue();
			break;		
		case 2:
			dequeue();
			break;
		case 3:
			showfront();
			break;
		case 4:
			displayqueue();
			break;
		case 5:
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
void enqueue()
{
	int e=0;
	if(rear == size-1)
	{
		cout<<"Queue is full\n";
	}
	else
	{
		if(front == -1)
		{
			front++;
		}
		cout<<"Enter the Element: ";
		cin>>e;
		rear++;
		A[rear] = e;
		cout<<"Integer "<<e<<" save into the queue\n";
	}
}

void dequeue()
{
	if (rear == -1)
	{
		cout<<"Queue is Empty\n\n";
	}
	else
	{
		cout<<"Integer "<<A[front]<<" is delete from queue\n";
		if(front == rear)
		{
		front=-1;
		rear=-1;
		}
		else
		{
		front++;	
		}
	}	
}

void showfront()
{
	if (rear == -1)
	{
		cout<<"Queue is Empty\n\n";
	}
	else
	{
		cout<<"The Element at front is : "<<A[front]<<endl<<endl;
	}
}

void displayqueue()
{
	if (rear == -1)
	{
		cout<<"Queue is Empty\n\n";
	}
	else
	{
		cout<<"The element in the queue are {  ";
		for(int i=front; i<=rear; i++)
		cout<<A[i]<<"  ";
		cout<<"}\n\n";	
	}
}
