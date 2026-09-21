#include<iostream>
using namespace std;

int main()
{   int i= 0156;
    int pin;
    cout<<"enter your pincode:";
    cin>>pin;

    if(i==pin){

        cout<<1<<"Check Balance"<<endl;
        cout<<2<<"Withdraw Money"<<endl;
        cout<<3<<"Exit";
    }
    else{
        cout<<"your pincode is incorrect";
    }
    return 0;

}
