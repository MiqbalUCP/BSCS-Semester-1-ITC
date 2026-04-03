#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	if (num >= 18)
		cout << "Eligible to Vote," << endl;
	else
		cout << "Not Eligible to Vote." << endl;

	system("pause");
}
