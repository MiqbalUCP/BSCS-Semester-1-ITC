#include <iostream> 

using namespace std;

int main() {

    int number, divisor_fector = 2;

    cout << "Check the prime fectors of a positive number: " << endl;

    cout << "Enter a positive number[greater than 1]: ";

    cin >> number;

    if (number <= 1) {

        cout << "Number Must be Greater than 1";

    }

    else {

        cout << "The prime fectors are ";

        while (divisor_fector <= number) {

            while (number % divisor_fector == 0) {

                cout << divisor_fector << ",";

                number /= divisor_fector;

            }

            divisor_fector++;

        }
    }

    return 0;

}