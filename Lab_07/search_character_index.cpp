#include <iostream>
using namespace std;

int main()
{
    char str[100];     char searchChar;

    cout << "Enter a string (up to 100 characters): ";
    cin >> str;
    cout << "Enter the character to search (a-z): ";
    cin >> searchChar;

    int index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == searchChar) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout << "First occurrence of '" << searchChar << "' found at index: " << index << endl;
    }
    else {
        cout << "Character '" << searchChar << "' not found in the string." << endl;
    }

    return 0;
}

