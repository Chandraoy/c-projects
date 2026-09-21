#include <iostream>
using namespace std;

int factorialN(int *a)
{
    int fact = 1;
    for (int i = 1; i <= *a; i++) {
        fact = fact * i;
    }
    cout << fact << endl;
}
int main(){

    int a;
    cout<<"enter number to see the factorial of that num:";
    cin>> a;

    cout<<"factorial of "<<a<<" is :"<<factorialN(&a);
    return 0;
}
