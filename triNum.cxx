/* program to calculate the 200th triangular number introduction of the for statment */

#include <iostream>
using namespace std;


int main()
{
	int n, triNum;
	triNum=0;
	
	for( n= 1; n <= 200; n=n+1 ){
		triNum = triNum + n;
	
	cout<<" show the triangular num:" << triNum<< endl;
	}
	return 0;
	
}