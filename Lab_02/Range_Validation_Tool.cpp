#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	if (num >= 10 && num <= 50)
		cout << "Number is between 10 and 50," << endl;
	else
		cout << "Number is out of range" << endl;

	system("pause");
}
