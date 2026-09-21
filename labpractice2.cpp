#include <iostream>
using namespace std;

int* findMax(int* a, int* b) {
    if (*a > *b)
        return a;
    else
        return b;
}

int main() {
    int x = 15, y = 25;
    int* maxPtr = findMax(&x, &y);

    cout << "Maximum value is: " << *maxPtr << endl;
    return 0;
}
