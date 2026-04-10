#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        int lastDigit = num % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        num /= 10;
    }

    cout << "The reversed number is: " << reversedNum << endl;

    return 0;
}

