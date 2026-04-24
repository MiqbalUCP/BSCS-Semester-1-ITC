#include<iostream>
using namespace std;
int main()
{
	for (int Hour = 1; Hour <= 12; Hour++)
	{
		cout << "Hour " << Hour << ": ";
		for (int c = 00; c <= 59; c++)
		{

			cout << c;
			if (c != 59)
			{
				cout << ", ";
			}


		}
		cout << endl;

	}
	system("pause");
	return 0;
}
