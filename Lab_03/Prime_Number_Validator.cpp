#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> num;
    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

