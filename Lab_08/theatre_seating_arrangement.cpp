#include<iostream>
using namespace std;
int main()
{
	for (int row = 1; row <= 4; row++)
	{
		cout << "Row " << row << "; ";
		for (int seat = 1; seat <= 6; ++seat)
		{
			cout << "seat " << seat;

			if (seat != 6)
			{
				cout << ", ";
			}
		}
		cout << endl;

	}
	system("pause");
	return 0;
}
