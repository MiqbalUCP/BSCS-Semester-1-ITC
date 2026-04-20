#include <iostream>
using namespace std;

int main() {
    int start, end;

    
    for (int i = 0; i < 1; i++) {
        cout << "Enter the starting number: ";
        cin >> start;
    }
    for (int i = 0; i < 1; i++) {
        cout << "Enter the ending number: ";
        cin >> end;
    }

   
    for (int num = end; num >= start; num--) {
        
        int lastDigit = 0;
        for (int i = 0; i < 1; i++) {
            lastDigit = num % 10;
        }
        if (lastDigit != 7) {
            continue;
        }

        
        bool isPrime = true;
        for (int i = 0; i < 1; i++) {
            if (num < 2) {
                isPrime = false;
            }
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

      
        for (int i = 0; i < 1; i++) {
            if (isPrime) {
                cout << num << " ";
            }
        }
    }

    return 0;
}
