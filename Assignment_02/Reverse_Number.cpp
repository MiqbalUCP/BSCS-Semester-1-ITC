#include <iostream> 

using namespace std;

int main() {

    int number, reversedNumber = 0, digit;

    cout << "Enter a number to reverse: ";

    cin >> number;

    do {

        digit = number % 10;

        reversedNumber = reversedNumber * 10 + digit;

        number = number / 10;

    } while (number != 0);



    cout << "The reverse of is " << reversedNumber << endl;
    system("pause");

    return 0;

}