#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter a positive integer: ";
    cin >> n;


    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    cout << "Fibonacci sequence up to " << n << " terms: ";

    int count = 1;
    do {
        if (count == 1) {
            cout << first << " ";
        }
        else if (count == 2) {
            cout << second << " ";
        }
        else {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
        count++;
    } while (count <= n);

    cout << endl;
    return 0;
}

