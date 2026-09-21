#include <iostream>
using namespace std;

bool palindrome (string x)
{ 
     for(int i  = 0; i < x.length()/2; i++)
     {    if( x[i] != x[x.length() - i - 1])
               return false;
     }
               
           return true;
     }
     
int main()
{ string x;
  cout<<" enter ur string to see palindrome:";
  cin>> x;
  
  
  if (palindrome (x))
  { cout<< x << " --> this is a palindrome";
  }
  else{ cout<< x << "--> this isnt a palindrome";
  }return 0;
}