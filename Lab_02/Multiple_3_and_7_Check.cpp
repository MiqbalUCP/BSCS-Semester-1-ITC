#include<iostream>
using namespace std;
int main()
{
	int num;

	cout << " Enter the NUMBER" << endl;

	cin >> num;
	if (num % 3 == 0 && num % 7 == 0)
	{
		cout << "Multiple of both 3 and 7," << endl;

	}
	else
		cout << "Not a multiple of both 3 and 7." << endl;
	return 0;

}
