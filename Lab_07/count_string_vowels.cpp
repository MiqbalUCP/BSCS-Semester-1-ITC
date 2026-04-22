#include <iostream>
using namespace std;

int main() {
    char str[100];
    int vowelCount = 0;
    cout << "Enter a string (up to 100 characters): ";
    cin.ignore();
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelCount++;
        }
    }


    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}

