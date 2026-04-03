#include<iostream>
using namespace std;
int main()
{
	int score;

	cout << " Enter the SCORE" << endl;

	cin >> score;
	if (score >= 50)
	{
		cout << "You Passed, " << endl;

	}
	else
		cout << "You Failed." << endl;
	return 0;

}
