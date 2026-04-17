#include <iostream>
using namespace std;
int main() {
    cout << "Enetr Any 10 Integers :";
    int arr[10], smallest;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    smallest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "Smallest Number = " << smallest;
    return 0;
}

