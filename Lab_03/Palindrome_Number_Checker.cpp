#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;
    do {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    } while (num != 0);

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    }
    else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}

