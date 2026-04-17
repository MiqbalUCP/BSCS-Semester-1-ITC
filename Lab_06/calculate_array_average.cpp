#include <iostream>
using namespace std;

int main() {
    int numbers[10] = { 12, 15, 8, 7, 20, 33, 40, 9, 18, 25 };
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    double average = sum / 10.0;


    cout << "Average of the elements: " << average << endl;

    return 0;
}

