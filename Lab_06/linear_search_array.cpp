#include <iostream>
using namespace std;

int searchNumber(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[10] = { 12, 15, 8, 7, 20, 33, 40, 9, 18, 25 };
    int target = 33;

    int index = searchNumber(numbers, 10, target);

    if (index != -1) {
        cout << "Number found at index: " << index << endl;
    }
    else {
        cout << "Number not found!" << endl;
    }

    return 0;
}

