#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string (up to 100 characters, no spaces): ";
    cin >> str;
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    cout << "Total number of characters: " << count << endl;

    return 0;
}

