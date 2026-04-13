#include <iostream> 
using namespace std;
int main() {

    int number, temp = 0, sum = 0, remainder = 0;

    cout << "Check the  Armstrong number" << endl;

    cout << "Enter Number: ";

    cin >> number;

    temp = number;

    do {

        remainder = number % 10;

        sum += remainder * remainder * remainder;

        number = number / 10;



    } while (number != 0);

    if (temp == sum) {

        cout << "It is  Armstrong number ";

    }

    else {

        cout << "It is not  Armstrong number ";

    }
    return 0;

}