#include <iostream>
using namespace std;

int main()
{
   double sales = 95000;
   double state_tax = 0.04;
   double country_tax = 0.02;


   cout<<"sales="<<sales<<"$"<<endl;
   double statetax= sales*state_tax;
   cout<<"state tax="<<statetax<<"$"<<endl;
   double countrytax= sales*country_tax;
   cout<<"country tax="<<countrytax<<"$"<<endl;

   double totaltax= statetax+countrytax;
   cout<<"total tax="<<totaltax<<"$"<<endl;

    return 0;
}
