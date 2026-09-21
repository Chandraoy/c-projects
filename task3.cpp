#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"enter 3 number";
    cin>>num1>>num2>>num3;


      //Largest number
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"largest num is "<<num1<<endl;
        }else
        {
            cout<<"Largest num is "<<num3<<endl;
        }
    }else if(num2>num3)
    {
        cout<<"Largest Number is"<<num2<<endl;
    }else
    {
        cout<<"Largest Number is"<<num3<<endl;
    }

    //smallest number
     if(num1<num2)
    {
        if(num1<num3)
        {
            cout<<"smallest num is "<<num1<<endl;
        }else
        {
            cout<<"smallest num is "<<num3<<endl;
        }
    }else if(num2<num3)
    {
        cout<<"smallest Number is"<<num2<<endl;
    }else
    {
        cout<<"smallest Number is"<<num3<<endl;
    }


    //Determine if all the numbers are equal or not
    if(num1 == num2 && num2== num3)
    {
        cout<<"All the entered values are equal"<<endl;
    } else if (num1 != num2 && num2 != num3)
    {
        cout<<"All the entered values are not equal"<<endl;
    }else
    {
        cout<<"Two of the entered values are equal"<<endl;
    }



    return 0;
}

