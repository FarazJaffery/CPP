#include<iostream>

using namespace std;
int main()
{
float choice, R1=0, R2=0, R3=0, Ra=0, Rb=0, Rc=0;
cout<<"Select the conversion\nFor 'Star to Delta' press 1\nFor 'Delta to Star' press 2\n";
cin>>choice;
if(choice==1)
{
	cout<<"Enter the value of Ra, Rb and Rc \n";
	cout<<"Ra = ";
	cin>>Ra;
	cout<<"Rb = ";
	cin>>Rb;
	cout<<"Rc = ";
	cin>>Rc;
	R1=(Rb*Rc)/(Ra+Rb+Rc);
	R2=(Ra*Rc)/(Ra+Rb+Rc);
	R3=(Ra*Rb)/(Ra+Rb+Rc);
	cout<<"R1 = "<<R1<<" Ohm\nR2 = "<<R2<<" Ohm\nR3 = "<<R3<<" Ohm\n";
}
if(choice==2)
{
	cout<<"Enter the value of R1, R2 and R3 \n";
	cout<<"R1 = ";
	cin>>R1;
	cout<<"R2 = ";
	cin>>R2;
	cout<<"R3 = ";
	cin>>R3;
	Ra=((R1*R2)+(R2*R3)+(R3*R1))/R1;
	Rb=((R1*R2)+(R2*R3)+(R3*R1))/R2;
	Rc=((R1*R2)+(R2*R3)+(R3*R1))/R3;
	cout<<"Ra = "<<Ra<<" Ohm\nRb = "<<Rb<<" Ohm\nRc = "<<Rc<<" Ohm\n";
}
if(choice!=1 && choice!=2)
cout<<"Invalid Entry\n";

system("Pause");
return(0);



}



