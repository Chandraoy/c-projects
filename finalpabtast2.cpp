/*write a function that accepts a string as a character pointer and counts the number of vowels.
Enter a string: Hello World
Number of vowels: 3*/


#include <iostream>
using namespace std;


int countVowels(const char *str) {
    int count = 0;
    while (*str != '\0') {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Number of vowels: " << countVowels(str) << endl;

    return 0;
}
