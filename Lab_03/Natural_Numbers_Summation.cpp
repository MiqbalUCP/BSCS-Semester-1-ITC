#include<iostream>
using namespace std;
int main() {
	int a, c = 0;
	cout << "Enter a Natural Number: ";
	cin >> a;
	for (int b = 1; b <= a; b++) {
		cout << c << " ";
		c += b;
	}
	system("pause");
	return 0;
}

