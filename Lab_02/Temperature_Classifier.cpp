#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout << "Enter The Temperature " << endl;
	cin >> temp;
	if (temp > 30)
	{
		cout << " The temperature is hot" << endl;
	}
	if (temp >= 15 && temp <= 30)
	{
		cout << " The temperature is warm" << endl;
	}
	if (temp < 15)
	{
		cout << " The temperature is cold" << endl;
	}

}
