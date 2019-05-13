#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
char a[50];
int size;
	
	cout << "Input array element \n"; cin>> a;
	
	size =0;

	while(a[size] !='\0') size++;
	
	for(int x=size-1;x>=0;x--)

	{cout << a[x];}

	cout<< "\nSize of the array "<< size;
		
	getch();
	return 0;
}
