#include<iostream>
using namespace std;

int main()
{
    char tv;
    cout<<"enter any character:";
    cin>> tv;
    if( tv >= 'A' && tv <= 'Z' || tv >= 'a'&& tv<='z')
    {



                if(tv == 'A' || tv == 'E' || tv == 'I' || tv == 'O' || tv == 'U' || tv == 'a' || tv == 'e' || tv == 'i' || tv == 'o' || tv == 'u')

                {
                    cout<<"Entered character is a vowel." ;
                }else
                {
                    cout<<"Entered character is a consonent." ;
                }
    }else

    {
        cout<<"Entered character is not an alphabet." ;
    }

    return 0;
}
