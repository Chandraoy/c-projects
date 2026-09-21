#include<iostream>
using namespace std;

int main()
{
    int number,i=1;
    cout<<"enter your number to view the multiplication table!"<<endl;
    cin>>number;

    while(i<11)
    {
        cout<<number<<" x "<<i<<"="<<number*i<<endl;
        i++;
    }

 return 0;
}
