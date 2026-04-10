#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {

        cout << "Menu:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        defaul:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}

