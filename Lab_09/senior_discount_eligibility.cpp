#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "ENTER THE AGE " << endl;
	cin >> age;
	if (age >= 65) {
		cout << "Eligible for Senior Citizen Discount" << endl;
	}
	else if (age > 18 && age < 64) {
		cout << "Not Eligible for Senior Citizen Discount" << endl;
	}
	else if (age < 18) {
		cout << "Not Eligible for Discount" << endl;
	}
	system("pause");
	return 0;

}
