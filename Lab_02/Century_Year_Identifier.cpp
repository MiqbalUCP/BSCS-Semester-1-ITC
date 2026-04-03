#include<iostream>
using namespace std;
int main()
{
	int year;

	cout << "Enter the year in 4 digit formate" << endl;

	cin >> year;
	if (year % 100 == 0)
	{
		cout << "Century Year," << endl;

	}
	else
		cout << "Not a Century Year" << endl;
	return 0;

}
