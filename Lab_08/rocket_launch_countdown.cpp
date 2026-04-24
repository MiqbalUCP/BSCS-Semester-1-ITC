#include<iostream>
using namespace std;
int main()
{
	for (int Launch = 1; Launch <= 3; Launch++)
	{
		cout << "Launch " << Launch << ": ";
		for (int cd = 10; cd >= 0; cd--)
		{
			if (cd == 10)
			{
				cout << "Countdown : ";
			}
			cout << cd << ", ";
		}
		cout << endl;

	}
	system("pause");
	return 0;
}
