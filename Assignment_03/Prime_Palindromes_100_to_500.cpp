#include<iostream>
using namespace std;
int main()
{
	int a = 100, j = 0;

	while (a <= 500) {
		int b = 2, checkit = 0;
		int reverse = 0;
		int c = a;
		int original = a;
		while (b < a) {
			if (a % b == 0) {
				checkit = 1;
				break;

			}
			b++;
		}
		if (checkit == 0) {
			while (c != 0) {

				int digit = c % 10;
				reverse = reverse * 10 + digit;


				c = c / 10;
			}
			if (original == reverse) {
				cout << a << "  ";
			}
		}
		a++;
	}
}