#include <iostream>
using namespace std;

int main()
{
    char letters[5];

    cout << "Enter 5 characters: ";
    for (int i = 0; i < 5; i++) {
        cin >> letters[i];
    }


    cout << "Characters in reverse order: ";
    for (int i = 4; i >= 0; i--) {
        cout << letters[i] << " ";
    }

    cout << endl;
    return 0;
}

