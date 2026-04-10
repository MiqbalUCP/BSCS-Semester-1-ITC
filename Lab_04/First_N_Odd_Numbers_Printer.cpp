#include <iostream>
using namespace std;

int main() {
    int n, count = 0, num = 1;

    cout << "Enter the number of odd numbers to print: ";
    cin >> n;

    cout << "The first " << n << " odd numbers are:" << endl;

    while (count < n) {
        cout << num << " ";
        num += 2;
        count++;
    }

    cout << endl;
    return 0;
}
