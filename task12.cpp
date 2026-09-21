#include <iostream>
using namespace std;

int main(){
   int i;
   cout<<"A+=(100-90)"<<endl<<"A=(80-89)"<<endl<<"A-=(70-79)"<<endl<<"B=(60-69)"<<endl<<"C=(50-59)"<<endl<<"D=(40-49)"<<endl<<"E=(30-39)"<<endl<<"F=(20-10)"<<endl;

   cout<<"ENTER YOUR MARKS TO SEE YOUR GRADE:"<<endl;
   cin>>i;

   if(i>=90 && i<=100){
    cout<<"A+";
   }
   else if(i>=80 && i<=89){
    cout<<"A";
   }
   else if(i>=70 && i<=79){
    cout<<"A-";
   }
   else if(i>=60 && i<=69){
    cout<<"B";
   }
   else if(i>=50 && i<=59){
    cout<<"C";
   }
   else if(i>=40 && i<=49){
    cout<<"D";
   }
   else if(i>=30 && i<=39){
    cout<<"E";
   }
   else if(i>=20 && i<=10){
    cout<<"F";
   }
   else{
    cout<<"you are fail";
   }
   return 0;

}
