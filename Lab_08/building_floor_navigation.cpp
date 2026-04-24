#include<iostream>
using namespace std;
int main()
{
	for (int Floor = 5; Floor >= 1; Floor--)
	{
		cout << "Floor " << Floor << ": ";
		for (int c = 3; c >= 0; c--)
		{

			cout << c;
			if (c != 0)
			{
				cout << ", ";
			}


		}
		cout << endl;

	}
	system("pause");
	return 0;
}
