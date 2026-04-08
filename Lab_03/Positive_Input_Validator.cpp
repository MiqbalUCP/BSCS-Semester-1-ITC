#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a positive number: ";
        cin >> num;

        if (num < 0) {
            cout << "The number must be positive. Please try again." << endl;
        }
    } while (num < 0);

    cout << "You entered a positive number: " << num << endl;

    return 0;
}

