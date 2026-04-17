#include <iostream>
using namespace std;

int main()
{
    int originalArray[5] = { 10, 20, 30, 40, 50 };
    int newArray[5];

    for (int i = 0; i < 5; i++)
    {
        newArray[i] = originalArray[i];
    }

    cout << "New array: ";
    for (int i = 0; i < 5; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}

