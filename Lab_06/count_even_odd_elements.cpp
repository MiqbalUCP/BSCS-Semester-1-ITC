#include <iostream>
using namespace std;

int main() {

    int numbers[10] = { 12, 15, 8, 7, 20, 33, 40, 9, 18, 25 };

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }

    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;

    return 0;
}

