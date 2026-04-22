#include <iostream>
using namespace std;

int main()
{
    char letters[5] = { 'A', 'B', 'C', 'D', 'E' };

    cout << "The elements of the character array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << letters[i] << " ";
    }

    cout << endl;
    return 0;
}
