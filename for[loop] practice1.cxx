//enter number from user and show the list of number of even or odd


#include <iostream>
using namespace std;


int main()
{ int num;
	cout<<" enter any integer number to see the list of  even or odd: ";
	
	
	for(cin>>num; num<=100; num+=2 ){
		cout<< num<<endl;
	}
	
	return 0;
}