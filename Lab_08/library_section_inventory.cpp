#include<iostream>
using namespace std;
int main()
{
	for (int Section = 1; Section <= 3; Section++)
	{
		cout << "Section " << Section << ": ";
		for (int Shelf = 1; Shelf <= 4; Shelf++)
		{

			cout << "Shelf " << Shelf;

			if (Shelf != 4)
			{
				cout << ", ";
			}
		}
		cout << endl;

	}
	system("pause");
	return 0;
}
