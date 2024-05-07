//#include<iostream>
//using namespace std;
//int main()
//{
//	cout<<endl<<endl<<endl; // 3 Horizantal Spaces
//	system ("color 72");
//	for(int i=1; i<=35; i++)
//	{
//		for(int j=1; j<30; j++)// 30 Vertical Spaces
//		cout<<" ";
//		for(int j=1; j<=100; j++)
//		{
//			if( j<=3 &&j>=3 && i<=8)
//			cout<<"*";	
//			else	if(i==9 &&j<=3 || i==9 &&j>=30 && j<=60 ||i==9 && j>61 )
//			cout<<"*";	
//			else if(i==10 && j<=3 ||i==10 && j>=30 && j<=58 ||i==10 && j>=61)
//			cout<<"*";	
//			else if(i==11 && j<=3 ||i==11 && j>=30 && j<=57 ||i==11 && j>=60 )
//			cout<<"*";		
//			else if(i==12 && j<=3 ||i==12 && j>=30 && j<=55 || i==12 &&j>=59 )
//			cout<<"*";
//			else if(i==13 && j<=3 ||i==13 &&  j>=30 && j<=54 ||i==13 &&  j>=58 && j<=69||i==13 &&  j>=71 )
//			cout<<"*";
//			else if(i==14&& j<=3 ||i==14&& j>=30 && j<=52 ||i==14&& j>=57 && j<69||i==14&&   j>71)
//			cout<<"*";	
//			else if( i==15 && j<=3 || i==15 &&  j>=30 && j<=51 || i==15 &&  j>=56 && j<68||  i==15 &&   j>72 )
//			cout<<"*";	
//			else if(i==16 && j<=3 ||i==16 && j>=30 && j<=50 ||i==16 && j>=56&& j<65||i==16 &&   j>75 )
//			cout<<"*";
//			else if( i==17 && j<=3 ||i==17 && j>=30 && j<=50 ||i==17 && j>=56&& j<=65||i==17 &&   j>=75 )
//			cout<<"*";		
//		    else if(i==18 && j<=3 || i==18 && j>=30 && j<=50 ||i==18 && j>=56&& j<=66||i==18 &&   j>=74 )
//			cout<<"*";		
//			else if( i==19 &&j<=3 ||i==19 && j>=30 && j<=51 ||i==19 && j>=56 && j<=67||i==19 && j>=73||i==19 && j==70 ) 
//			cout<<"*";		
//	    	else if(i==20 && j<=3 ||i==20 && j>=30 && j<53 ||i==20 && j>=57&& j<=66||i==20 && j>=69 && j<=71  ||i==20 &&j>=74 )
//			cout<<"*";	
//			else if( i==21 &&j<=3 ||i==21 && j>=30 && j<54 ||i==21 && j>=58&& j<66||i==21 && j>=67 && j<=73  ||i==21 &&  j>74 )
//			cout<<"*";
//			else if(i==22 && j<=3 ||i==22 && j>=30 && j<=55 ||i==22 && j>=59 )
//			cout<<"*";
//			else if(i==23 && j<=3 ||i==23 && j>=30 && j<=56 ||i==23 && j>=60 )
//			cout<<"*";
//			else if(i==24 && j<=3 ||i==24 && j>=30 && j<=57 ||i==24 && j>=61 )
//			cout<<"*";
//			else if(i==25 &&  j<=3 ||i==25 &&  j>=30 && j<=59 ||i==25 &&  j>=62 )
//			cout<<"*";
//			else if( i==26 && j<=3 || i==26 && j>=30 && j<=61 || i==26 && j>=63 )
//			cout<<"*";	
//			else if(i>=27 && j<=3 && i<=33 ||i>=27 && j>=30 &&i<=33 || i>=34)
//			cout<<"*";					
//			else 
//			cout<<" ";	
//				}
//		cout<<endl; // New Line
//	}		
//			cout<<endl<<"\t\t\t\t\t\t\t\t\tPakistan Zindabad "<<endl;
//				system("pause");		
//}



#include<iostream>
using namespace std;
int main()
{
	cout<<endl<<endl<<endl; // 3 Horizantal Spaces
	system ("color 72");
	for(int i=1; i<=35; i++)
	{
		for(int j=1; j<30; j++)// 30 Vertical Spaces
		cout<<" ";
		for(int j=1; j<=100; j++)
		{
			if( i<=2 ||j<=3 || i>=2 &&j>=30 && i<=8)
			cout<<"*";	
			else	if(i==9 &&j<=3 || i==9 &&j>=30 && j<=60 ||i==9 && j>61 )
			cout<<"*";	
			else if(i==10 && j<=3 ||i==10 && j>=30 && j<=58 ||i==10 && j>=61)
			cout<<"*";	
			else if(i==11 && j<=3 ||i==11 && j>=30 && j<=57 ||i==11 && j>=60 )
			cout<<"*";		
			else if(i==12 && j<=3 ||i==12 && j>=30 && j<=55 || i==12 &&j>=59 )
			cout<<"*";
			else if(i==13 && j<=3 ||i==13 &&  j>=30 && j<=54 ||i==13 &&  j>=58 && j<=69||i==13 &&  j>=71 )
			cout<<"*";
			else if(i==14&& j<=3 ||i==14&& j>=30 && j<=52 ||i==14&& j>=57 && j<69||i==14&&   j>71)
			cout<<"*";	
			else if( i==15 && j<=3 || i==15 &&  j>=30 && j<=51 || i==15 &&  j>=56 && j<68||  i==15 &&   j>72 )
			cout<<"*";	
			else if(i==16 && j<=3 ||i==16 && j>=30 && j<=50 ||i==16 && j>=56&& j<65||i==16 &&   j>75 )
			cout<<"*";
			else if( i==17 && j<=3 ||i==17 && j>=30 && j<=50 ||i==17 && j>=56&& j<=65||i==17 &&   j>=75 )
			cout<<"*";		
		    else if(i==18 && j<=3 || i==18 && j>=30 && j<=50 ||i==18 && j>=56&& j<=66||i==18 &&   j>=74 )
			cout<<"*";		
			else if( i==19 &&j<=3 ||i==19 && j>=30 && j<=51 ||i==19 && j>=56 && j<=67||i==19 && j>=73||i==19 && j==70 ) 
			cout<<"*";		
	    	else if(i==20 && j<=3 ||i==20 && j>=30 && j<53 ||i==20 && j>=57&& j<=66||i==20 && j>=69 && j<=71  ||i==20 &&j>=74 )
			cout<<"*";	
			else if( i==21 &&j<=3 ||i==21 && j>=30 && j<54 ||i==21 && j>=58&& j<66||i==21 && j>=67 && j<=73  ||i==21 &&  j>74 )
			cout<<"*";
			else if(i==22 && j<=3 ||i==22 && j>=30 && j<=55 ||i==22 && j>=59 )
			cout<<"*";
			else if(i==23 && j<=3 ||i==23 && j>=30 && j<=56 ||i==23 && j>=60 )
			cout<<"*";
			else if(i==24 && j<=3 ||i==24 && j>=30 && j<=57 ||i==24 && j>=61 )
			cout<<"*";
			else if(i==25 &&  j<=3 ||i==25 &&  j>=30 && j<=59 ||i==25 &&  j>=62 )
			cout<<"*";
			else if( i==26 && j<=3 || i==26 && j>=30 && j<=61 || i==26 && j>=63 )
			cout<<"*";	
			else if(i>=27 && j<=3 && i<=33 ||i>=27 && j>=30 &&i<=33 || i>=34)
			cout<<"*";					
			else 
			cout<<" ";	
				}
		cout<<endl; // New Line
	}		
			cout<<endl<<"\t\t\t\t\t\t\t\t\tPakistan Zindabad "<<endl;
				system("pause");		
}
