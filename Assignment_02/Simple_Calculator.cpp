#include <iostream> 

using namespace std;



int main() {

    int number1, number2;

    char operators;
    cout << "Check Multiple Operation" << endl;

    cout << "Enter 1st Number: ";

    cin >> number1;
    cout << "Enter 2nd Number: ";
    cin >> number2;

    cout << "Enter operation [+, -, *, /, %, or q to exit]: ";

    cin >> operators;

    switch (operators) {

    case '+':

        cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;

        break;

    case '-':

        cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;

        break;

    case '*':

        cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;

        break;

    case '/':

        if (number2 != 0) {

            cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;

        }

        else {

            cout << "Error: Division by zero is not allowed." << endl;

        }

        break;

    case '%':

        if (number2 != 0) {

            cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;

        }

        else {

            cout << "Error: Division by zero is not allowed." << endl;

        }

        break;

    case 'q':

        cout << "Successfully Exit" << endl;

        break;

    default:

        cout << "Please enter [+, -, *, /, %, or q]." << endl;

    }
    return 0;

}