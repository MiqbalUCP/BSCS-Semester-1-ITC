#include<iostream>
using namespace std;
int main()
{
	for (int row = 1; row <= 5; row++)
	{
		cout << "Row " << row << ": ";
		for (int Desk = 1; Desk <= 4; Desk++)
		{

			cout << "Desk " << Desk;

			if (Desk != 4)
			{
				cout << ", ";
			}
		}
		cout << endl;

	}
	system("pause");
	return 0;
}
