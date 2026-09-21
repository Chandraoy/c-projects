#include<iostream>
using namespace std;

int main()
{
   int number;
    while(number!=-1)
    {
        cout<<"please enter your number to see the while loop!"<<endl;
        cin>>number;

    if(number==-1)
    {
        cout<<"please enter a positive number!"<<endl;
         break;
    }
    else
    {
     cout<<"the number is!"<<number<<endl;
    continue;
    }
     cout<<"you are entered"<<endl;
    }

     return 0;
}
