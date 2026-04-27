#include <iostream>
using namespace std;

int main() {
    char arr[50];
    int number;

    cout << "Enter the number of characters: ";
    cin >> number;

    cout << "Enter the character array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Encrypted characters:\n";
    for (int i = 0; i < n; i++) {
        cout << (arr[i] - 'A' + 1) << " ";
    }
    cout << endl;

    return 0;
}
