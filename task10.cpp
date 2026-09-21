#include <iostream>
using namespace std;

int main()
{
    double sales;
    cout<<"your sales amount is=";
    cin>>sales;
    cout<<"sales="<<sales<<"$"<<endl;

    double state_tax=0.04;
    double country_tax=0.02;

    double statetax = sales* state_tax;
    cout<<"state tax="<<statetax<<"$"<<endl;


    double countrytax= sales* country_tax;
    cout<<"country tax="<< countrytax<<"$"<<endl;


    double total= statetax + countrytax;
    cout<<"show your total amount of tax:"<<total<<"$";


    return 0;
}
