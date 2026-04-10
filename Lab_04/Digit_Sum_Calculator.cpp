#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
