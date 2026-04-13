#include <iostream> 
using namespace std;
int main() {

    int number1 = 0, number2 = 1, counter = 0, n = 20, next;

    cout << "Check the fabionic Series: " << endl;

    cout << " fabionic Series is ";

    while (counter < n) {

        cout << number1 << " ";

        next = number1 + number2;

        number1 = number2;           //number value update 

        number2 = next;

        counter++;

    }

    return 0;

}