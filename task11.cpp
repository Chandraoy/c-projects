#include <iostream>
using namespace std;

int main()
{
    double F;

    cout<<"enter your Fahrenheit temperature:"<<endl;
    cin>>F;

    double C=(F-32)*0.56;
    cout<<"this is your Celsius temperature:"<<C<<endl;

    return 0;

}
