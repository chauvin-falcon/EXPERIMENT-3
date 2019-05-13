#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std; 

int main ()

{ 
int l , s;

const int values  = 10;

int sum = 0;

float average;

int a [values];
 cout << "Enter your 10 values: ";
 
 for ( int i = 0; i < 10; i++)
 	{ cout << "\nEnter value: "; cin>> a[i];  }
 	
 s = a[0];
 l = a[0];
 	
 	for (int i = 1; i < 10; i++)
 	{ 
 		if (s > a [i])
 			{ s = a[i]; 
			 }
		else if ( l < a[i])
			{ l = a[i];
			}
		
	 }
	 
 for (int i = 0; i < 10; i++)

	 { 	 sum = sum + a[i]; } 
	average =  sum/10;

	

	 	
  
  
cout << "the total: " << sum << endl;
cout << "smallest integer is: " << s << endl;
cout << "largest integer is: " << l << endl;
cout << "the average: " << average  << endl;



getch ();
return 0;
		 
 
}
