#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter a Number: ";
	cin >> num;

	for (int b = 1; b <= 10; ++b) {
		cout << num << "X" << b << "= " << num * b << endl;
	}

	system("pause");
	return 0;
}
