#include "stdafx.h"
#include <iostream>

#include <conio.h> 
#include <Windows.h>
using namespace std ;


int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleOutputCP(1251);
	int Nx;
	Nx=10;
	int *Mass1 =new int [Nx]; 
	//int Mass1[10]={1,2,3,4,5,6,7,8,9,10};5

		cout<<"ввод"<<endl;
	for (int i=0; i<10; i++) {
		cin>>Mass1[i];
	}
	cout<<"===="<<endl;
	int max1=Mass1 [0];
	for (int i=0; i<10; i++) 
	{
		if ( Mass1 [i] > max1 ) {
			max1=Mass1 [i] ; 
		}
	}
	cout << endl;
	cout <<(max1);
	_getch ();

	
