#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Any 10 Integers : ";
    int arr[10], largest;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    largest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest Number = " << largest;
    return 0;
}
