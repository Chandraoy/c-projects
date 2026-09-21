#include <iostream>
using namespace std;

int main()
{
   int num1, num2, choice;
    cout<<"enter 2 n umber:";
    cin>>num1>>num2;
    cout<<"1.add\n2.sub\n3.mult\n4.div"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"the result is" << num1 + num2;
        break;
    case 2:
        cout<<"the result is" << num1 - num2;
        break;
    case 3:
        cout<<"the result is" << num1 * num2;
        break;
    case 4:
        if(num2==0){
            cout<<"div is impossible";
            break;
        }
        else{
              cout<<"the result is" << num1 / num2;}
              break;


    default:
        cout<<"the choice is invalid";

    }

    return 0;
}


