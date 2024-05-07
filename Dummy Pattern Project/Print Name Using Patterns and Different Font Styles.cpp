/*___________________________________________________________________________________________________________*/
/*___________________________________________________________________________________________________________*/
/*__________________________________ Engr: "Syed Ali Faraz Jaffery" ________________________________________*/
/*______________________________  Project: "Print Name Using Patterns" ______________________________________*/
/*____________________________________ Password: "faraz12345"______________________________________________*/
/*___________________________________________________________________________________________________________*/
/*___________________________________________________________________________________________________________*/

#include<iostream>
#include <conio.h>

	int size, Bold_Layer,password;
	char a, ib,again;
void bold();
using namespace std;
int main()
{
		char input_password[20];
	string password = "faraz12345";
	system ("color 01");
	 cout << "\n\n\t\t\t \t\t    Enter passward : ";
	{
	 		char a;
 		for(int i = 0;;)
 		{
 			a = getch();
 			if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
 			{
 				input_password[i] = a;
 				i++;
 				cout<<"*";
			}
			if(a == '\b' && i >= 1)
			{
				cout<<"\b \b";
				i--;
			}
			if(a == '\r')
			{
				input_password[i] = '\0';
				break;
			}
	    }
    }

	if(password == input_password)
	{
		tryagain:
			cout<<endl<<endl;
	cout<<"ENTER THE SIZE OF THE NAME "<<endl<<endl;
	cin>>size;
	
		cout<<endl<<endl;
	cout<<"FOR SIMPLE PRESS 'S' "<<endl<<endl;
	cout<<"FOR ITALIC PRESS 'I' " <<endl<<endl;
	cout<<"For THE BOLD PRESS 'B' "<<endl<<endl;
	cin>>a;
		if(a!='s' && a!='S' &&   a!='i' && a!='I' && a!='b' && a!='B')
cout<<endl<<endl<<"INVALID ENTRY "<<endl<<endl;
	else if( a=='b' || a=='B')
{
		cout<<endl<<endl;
cout<<"ENTER THE NUMBER OF BOLD LAYER 1, 2, or 3 "<<endl<<endl;
cin>>Bold_Layer;
if(Bold_Layer<=3)
{
	cout<<endl<<endl;
cout<<"ENTER 'S' IF YOU WANT TO GET SIMPLE BOLD LAYER "<<endl<<endl;
cout<<"Enter 'I' IF YOU WANT TO GET ITALIC AND BOLD LAYER "<<endl<<endl;
cin>>ib;
 if(ib=='s' || ib=='S' ||   ib=='i' || ib=='I')
bold();
else
cout<<"INVALID ENTRY "<<endl<<endl;
}
else
{
cout<<"INVALID ENTRY "<<endl<<endl;
cout<<"SORRY! YOU CAN GET MAXIMUM 3 LAYERS "<<endl<<endl;

}
}
else if(a=='s' || a=='S' || a=='i' || a=='I' )
	{
	if(size%2!=0)
size=size+1;
cout<<endl<<endl;				// 2 Horizantal space
	for(int i=1; i<=size; i++)
	{
		if(a=='i' || a=='I' || ib=='i' || ib=='I' )
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
        if(i==1 || i==size/2 || j==1 || j==size)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++) // 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++) // Logic L
	 {
	 	if(j==1 || i==size)
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++)
	 {
	 	if(i==1 || j==size/2 || i==size) // Logic I
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=9; j++)// /9 Vertical Spaces
	 cout<<" ";
		for(int j=1; j<=size; j++)
		{
			if(i==1 || j==1|| i==size/2)// Logic F
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
		{
			if(i==1 || j==1 || i==size/2|| j==size)//Logic A
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
			for(int j=1; j<=size; j++) // LOGIC R
	{
	if(j==1 || i==1 &&j<size|| i==size/2 &&j<size ||j==size &&  i<size/2 && i>1)
	cout<<"*";
	else if (i>size/2)
	{
			j=j+2;
		     	if(i==j)
		     	cout<<"*";
		     	else
		     	cout<<" ";
		     	j=j-2;	   
	}
	else
	cout<<" ";
	 }	
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=2; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
        if(i==1 || i==size/2 || j==1 || j==size)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
	 for(int j=1; j<=size; j++)
	 	{
        if(i==1 ||j==size-i+1 || i==size)  // Logic Z
        cout<<"*";
        else
        cout<<" ";
	 }
		cout<<endl;
	}
	/*_________________________________*/ // For registration Number
cout<<endl<<endl<<endl<<endl;				// 4 Horizantal space
	for(int i=1; i<=size; i++)
	{
				if(a=='i' || a=='I' || ib=='i' || ib=='I')
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 1
	{
		if(j==1)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 9
	{
		if(i==1 || i==size || i==size/2 || j==size || j==1&& i<size/2)
			cout<<"*";
				else
					cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
		if(i==size/2)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
		for(int j=1; j<=size; j++) // E LOGIC
		{
			if(i==1 || j==1 || i==size/2 || i==size)
			cout<<"*";
			else
			cout<<" ";
		}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // N LOGIC
		{
			if(j==1 || j==size || i==j)
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // C LOGIC
		{
			if(j==1 || i==1 || i==size)
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
		if(i==size/2)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 vertical  Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 1
	{
		if(j==1)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 8
	{
		if(j==1 | i==1 || i==size/2 || i==size || j==size)
		cout<<"*";
		else
		cout<<" ";
	}
	cout<<endl;
	}
cout<<endl<<endl<<endl;				// 3 Horizantal space
}
tryagain1:
	cout<<endl;
cout<<"ARE YOU WANT TO TRY AGAIN {Y/N}? "<<endl<<endl;
cin>>again;
if (again=='y'|| again=='Y')
	goto tryagain;
else if (again=='n'|| again=='N')
{
for(int j=1; j<=75; j++)
	cout<<" ";
cout<<"THANKYOU !"<<endl<<endl;
cout<<endl;				
system("pause");
cout<<endl<<endl<<"PRESS ENTER OR ANY KEY FOR EXIT "<<endl<<endl;
}
else if (again!='n'|| again!='N' || again!='y'|| again!='Y')
{
cout<<"INVALID ENTRY"<<endl<<endl;
	goto tryagain1;
}
}
else
{
	cout<<endl<<endl<<"WORNG PASSWORD !"<<endl<<endl;
tryagain2:
cout<<endl<<endl<<"ARE YOU WANT TO TRY AGAIN {Y/N}? "<<endl<<endl;
cin>>again;
cout<<endl<<endl;
if (again=='y'|| again=='Y')
{
	cout<<endl<<endl;
main();
}
else if (again=='n'|| again=='N')
{
for(int j=1; j<=75; j++)
	cout<<" ";
cout<<"THANKYOU !"<<endl<<endl;
cout<<endl;				
system("pause");
cout<<endl<<endl<<"PRESS ENTER OR ANY KEY FOR EXIT "<<endl<<endl;
}
else if (again!='n'|| again!='N' || again!='y'|| again!='Y')
{
cout<<"INVALID ENTRY"<<endl<<endl;
	goto tryagain2;
}
}
return(0);
}//Main function end
void bold()
{
 /*____________________________________________if(Bold_Layer==1)_____________________________________________*/
	if(Bold_Layer==1)

	{
		for(int i=1; i<=size; i++)
	{
		if(a=='i' || a=='I' || ib=='i' || ib=='I' )
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
            if(i<=2 || i==size/2 || i==(size/2)+1 ||j<=2 || j>=size-1)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++) // 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++) // Logic L
	 {
	 	if(j<=2 || i>=size-1 )
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++)
	 {
	 	if(i<=2 || j==size/2 || j==size/2+1 || i>=size-1) // Logic I
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=9; j++)// /9 Vertical Spaces
	 cout<<" ";
		for(int j=1; j<=size; j++)
		{
			if(i<=2 || j<=2|| i==size/2 || i==size/2+1)// Logic F
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
		{
		         if(i<=2 || i==size/2 || i==(size/2)+1 ||j<=2 || j>=size-1)  // Logic A
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++) // LOGIC R
	{
	if(j<=2 || i<=2 &&j<=size|| i==size/2 &&j<size+3|| i==size/2+1 &&j<=size ||j>=size-1 &&  i<size/2 && i>1)
	cout<<"*";
	else if (i>size/2)
	{
			j=j+2;
		     	if(i==j|| i==j+1)
		     	cout<<"*";
		     	else
		     	cout<<" ";
		     	j=j-2;	   
	}
	else
	cout<<" ";
	 }
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=1; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
   if(i<=2 || i==size/2 || i==(size/2)+1 ||j<=2 || j>=size-1)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
	 for(int j=1; j<=size; j++)
	 	{
        if(i<=2 ||j==size-i+2 || j==size-i+1|| j==size-i|| i>=size-1)  // Logic Z
        cout<<"*";
        else
        cout<<" ";
	 }
		cout<<endl;
	}
	/*_________________________________*/ // For registration Number          if(Bold_Layer==1)
	cout<<endl<<endl;				// 2 Horizantal space
	for(int i=1; i<=size; i++)
	{
				if(a=='i' || a=='I' || ib=='i' || ib=='I')
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 1
	{
		if(j<=2)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 9
	{
		if(i<=2 || i>=size-1 || i==size/2 || i==size/2+1 || j>=size-1 || j<=2&& i<size/2)

			cout<<"*";
				else
					cout<<" ";
	} 
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
		if(i==size/2 || i==size/2+1)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
		for(int j=1; j<=size; j++) // E LOGIC
		{
			if(i<=2 || j<=2 || i==size/2|| i==size/2+1 || i>=size-1)
			cout<<"*";
			else
			cout<<" ";
		}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // N LOGIC
		{
			if(j<=2 || j>=size-1 || i==j|| i==j+1)

			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // C LOGIC
		{
			if(j<=2 || i<=2 || i>=size-1)
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
	if(i==size/2 || i==size/2+1)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 vertical  Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 1
	{
		if(j<=2)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 8
	{
		if(j<=2 | i<=2 || i==size/2 || i==size/2+1 || i>=size-1 || j>=size-1)
		cout<<"*";
		else
		cout<<" ";
	}
	cout<<endl;
	}
	}
	 /*____________________________________________if(Bold_Layer==2)_____________________________________________*/
	else if(Bold_Layer==2)
	{
			for(int i=1; i<=size; i++)
	{
		if(a=='i' || a=='I' || ib=='i' || ib=='I' )
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
         if(i<=3 || i==size/2 || i==(size/2)+1 || i==(size/2)+2 ||j<=3 || j>=size-2)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++) // 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++) // Logic L
	 {
	 	if(j<=4 || i>=size-2 )
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++)
	 {
	 	if(i<=3 || j==size/2 || j==size/2+1 || j==size/2+2 || i>=size-2) // Logic I
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=9; j++)// /9 Vertical Spaces
	 cout<<" ";
		for(int j=1; j<=size; j++)
		{
			if(i<=3 || j<=3|| i==size/2 || i==size/2+1 ||i==size/2+2)// Logic F
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
		{
	    if(i<=3 || i==size/2 || i==(size/2)+1 || i==(size/2)+2 ||j<=3 || j>=size-2)  // Logic A
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++) // LOGIC R
	{
	if(j<=3 || i<=3 &&j<=size|| i==size/2 &&j<size+3|| i==size/2-1 &&j<size+3|| i==size/2+1 &&j<=size ||j>=size-2 &&  i<size/2 && i>1)
	cout<<"*";
	else if (i>size/2)
	{
			j=j+2;
		     	if(i==j|| i==j+1|| i==j+2)
		     	cout<<"*";
		     	else
		     	cout<<" ";
		     	j=j-2;	   
	}
	else
	cout<<" ";
	 }	
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
	
		for(int j=1; j<=size; j++)
	 	{
      if(i<=3 || i==size/2 || i==(size/2)+1 || i==(size/2)+2 ||j<=3 || j>=size-2)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
	 for(int j=1; j<=size; j++)
	 	{
  		  if(i<=3 ||j==size-i ||j==size-i+1 || j==size-i+2 ||j==size-i+3||j==size-i+4||j==size-i-1||j==size-i-2 || i>=size-2)  // Logic Z
        cout<<"*";
        else
        cout<<" ";
	 }
		cout<<endl;
	}

	/*_________________________________*/ // For registration Number          if(Bold_Layer==2)

cout<<endl<<endl<<endl<<endl;				// 4 Horizantal space
for(int i=1; i<=size; i++)
	{
				if(a=='i' || a=='I' || ib=='i' || ib=='I')
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 1
	{
		if(j<=3)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 9
	{
		if(i<=3 || i>=size-2 || i==size/2 || i==size/2+1 || i==size/2+2 || j>=size-2 || j<=3&& i<size/2)
			cout<<"*";
				else
					cout<<" ";
	} 	
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
		if(i==size/2 || i==size/2+1 || i==size/2+2)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
		for(int j=1; j<=size; j++) // E LOGIC
		{
			if(i<=3 || j<=3 || i==size/2|| i==size/2+1|| i==size/2+2 || i>=size-2)
			cout<<"*";
			else
			cout<<" ";
		}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // N LOGIC
		{
	if(j<=3 || j>=size-2 || i==j|| i==j+1 || i==j-1)
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // C LOGIC
		{
			if(j<=3 || i<=3 || i>=size-2)
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
	if(i==size/2 || i==size/2+1 || i==size/2+2)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 vertical  Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 1
	{
		if(j<=3)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 8
	{
		if(j<=3 | i<=3 || i==size/2 || i==size/2+1 || i==size/2+2 || i>=size-2 || j>=size-2)
		cout<<"*";
		else
		cout<<" ";
	}
	cout<<endl;
	}
	}
	 /*____________________________________________if(Bold_Layer==3)_____________________________________________*/
	else if(Bold_Layer==3)
	{
			for(int i=1; i<=size; i++)
	{
		if(a=='i' || a=='I' || ib=='i' || ib=='I' )
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
	if(i<=4 || i==size/2 || i==(size/2)+1 || i==(size/2)+2  || i==(size/2)+3||  j<=4 || j>=size-3)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++) // 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++) // Logic L
	 {
	 	if(j<=4 || i>=size-3 )
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
	 cout<<" ";
	 for(int j=1; j<=size; j++)
	 {
	 	if(i<=4 || j==size/2 || j==size/2+1 || j==size/2+2 || j==size/2-1 || i>=size-3) // Logic I
	 	cout<<"*";
	 	else
	 	cout<<" ";
	 }
	 for(int j=1; j<=9; j++)// /9 Vertical Spaces
	 cout<<" ";
		for(int j=1; j<=size; j++)
		{
			if(i<=4 || j<=4 || i==size/2 || i==size/2+1 ||i==size/2+2 || i==size/2+3)// Logic F
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
		{
	if(i<=4 || i==size/2 || i==(size/2)+1 || i==(size/2)+2  || i==(size/2)+3||  j<=4 || j>=size-3)  // Logic A
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC R
	{
	if(j<=4 || i<=4 &&j<=size|| i==size/2 &&j<size+3|| i==size/2+1 &&j<=size || i==size/2+2 ||j>=size-3 &&  i<size/2 && i>1)
	cout<<"*";
	else if (i>size/2)
	{
			j=j+2;
		     	if(i==j|| i==j+1|| i==j+2| i==j+3)
		     	cout<<"*";
		     	else
		     	cout<<" ";
		     	j=j-2;	   
	}
	else
	cout<<" ";
	 }	
		for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=size; j++)
	 	{
	if(i<=4 || i==size/2 || i==(size/2)+1 || i==(size/2)+2  || i==(size/2)+3||  j<=4 || j>=size-3)  // Logic A
        cout<<"*";
        else
        cout<<" ";
	 }
	 for(int j=1; j<=3; j++)// 3 Vertical Spaces
		cout<<" ";
	 for(int j=1; j<=size; j++)
	 	{
             if(i<=4 ||j==size-i+1 ||j==size-i+2 || j==size-i || j==size-i+3|| j==size-i+4|| j==size-i+5|| j==size-i-1|| j==size-i-2 || i>=size-3)  // Logic Z
        cout<<"*";
        else
        cout<<" ";
	 }
		cout<<endl;
	}
	/*_________________________________*/ // For registration Number          if(Bold_Layer==3)
cout<<endl<<endl<<endl<<endl;				// 4 Horizantal space
	for(int i=1; i<=size; i++)
	{
				if(a=='i' || a=='I' || ib=='i' || ib=='I')
		{
			for(int j=1; j<=size-i; j++)// 3 vertical italic Spaces
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 1
	{
		if(j<=4)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // LOGIC 9
	{
		if(i<=4 || i>=size-3  || i==size/2-1|| i==size/2 || i==size/2+1 || i==size/2+2 || j>=size-3 || j<=4&& i<size/2)
			cout<<"*";
				else
					cout<<" ";
	} 	
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
		if(i==size/2 || i==size/2+1 || i==size/2+2|| i==size/2-1)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
		for(int j=1; j<=size; j++) // E LOGIC
		{
			if(i<=4 || j<=4 || i==size/2|| i==size/2+1 || i==size/2+2 || i==size/2-1 || i>=size-3)
			cout<<"*";
			else
			cout<<" ";
		}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
	for(int j=1; j<=size; j++) // N LOGIC
		{
				if(j<=4 || j>=size-3 || i==j|| i==j+1 || i==j-1 || i==j+2)
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=1; j<=3; j++)// 3 verticalSpaces
	cout<<" ";
	for(int j=1; j<=size; j++) // C LOGIC
		{
			if(j<=4 || i<=4 || i>=size-3)
			cout<<"*";
			else
			cout<<" ";
		}
			for(int j=1; j<=4; j++)// 4 verticalSpaces
	cout<<" ";
	for(int j=1; j<=5; j++)// - print
	{
		if(i==size/2 || i==size/2+1 || i==size/2+2|| i==size/2-1)
		cout<<"*";
		else
		cout<<" ";
	}
	for(int j=1; j<=4; j++)// 4 vertical  Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 1
	{
		if(j<=4)
		cout<<"*";
	}
	for(int j=1; j<=3; j++)// 3 vertical Spaces
	cout<<" ";
		for(int j=1; j<=size; j++) // Logic 8
	{
		if(j<=4 | i<=4 || i==size/2-1 || i==size/2 || i==size/2+1 || i==size/2+2 || i>=size-3 || j>=size-3)
		cout<<"*";
		else
		cout<<" ";
	}
	cout<<endl;
	}}}
