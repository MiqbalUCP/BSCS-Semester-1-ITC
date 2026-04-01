#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4;
	cout << "enter three numbers" << endl;
	cout << "enter first number" << endl;
	cin >> num1;
	cout << "enter second number" << endl;
	cin >> num2;
	cout << "enter third number" << endl;
	cin >> num3;
	float sum = num1 + num2 + num3;
	float average = sum / 3;
	cout << " the average of given numbers is" << average << endl;


}
