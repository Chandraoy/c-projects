/* Write a program to implement a menu-driven calculator using an array of pointers to functions (add, subtract, multiply, divide)*/

#include<iostream>
using namespace std;

int calculater(int *add, int *sub, int *mult, int *divi, int  a, int b)
{
	*add= a+b;
	*sub= a-b;
	*mult= a*b;
	*divi= a/ b;
	
	return a,b;
	
}

int main()
{
	
	int function[0]= add;
	int function[1]= sub;
	int function[2]= mult;
	int function[3]= divi;
	
	
	cout<<"enter 0 to see addition."<<endl
	<<"enter 1 to see subtract."<<endl
	<<"enter 2 to see multiply."<<endl
	<<"enter 3 to see divide."<<endl;
	cin>> function[]
	
	int a,b;
	cout<<"enter 2 number:";
	cin>> a,b;
	
	cout<<"RESULT:"<<calculater(&a, &b)
	return 0;
}