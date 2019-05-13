#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
const int a =3, b =7;
char province;

    int temperature[a][b];

    cout << "Enter all temperature for a week of Province A, Province B and the Province C. \n";

    for (int x=0;x<a;x++)
   
    {for(int y=0; y<b; y++)
       {	if(x+1==1) 	province = 'A'; 
			else if(x+1==2) province = 'B';
			else if (x+1==3) province ='C';
            cout << "Province " <<province << ", Day " <<y + 1 << " : "; cin >> temperature[x][y];
        }
    } cout << "\n\nDisplaying Values:\n";
 
   		 for (int x =0;x<a; x++)
   		 {	if(x+1==1) 	province = 'A'; 
			else if(x+1==2) 	province = 'B';
			else if (x+1==3) province ='C';
        
	for(int y=0; y<b; y++)
    {  cout << "Province " << province<< ", Day " << y + 1 << " = " << temperature[x][y] << endl; }
		}

getch();
return 0;
}
