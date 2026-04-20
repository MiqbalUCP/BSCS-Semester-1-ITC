#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter Any  Number From 1 TO 7 " << endl ;
	cin >> num;

	if (num == 1)
	{
		for (int i = 1; i < 9; i++)
		{

			for (int j = 1; j < 9; j++)
			{
				if (i <= j)
				{
					cout << "* ";
				}
				else {
					cout << " ";
				}
			}

			cout << endl;
		}

	}

	else if (num == 2)
	{
		for (int i = 1; i < 6; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		for (int i = 4; i >0; i --)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}

	else if (num == 3)
	{
		int r = 6;
		int c = 7;
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				if (i == 1 || i == 6 || j == 1 || j == 7)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	else if (num == 4)
	{
		for (int i = 9; i >= 1; i--)
		{
			for (int j = 1; j < 9; j++)
			{
				if (i <= j)
				{
					cout << "* ";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	else if (num == 5)
	{
		for (int i = 1; i <= 5; i++) 
		{ 
			for (int j = 1; j <= 9; j++)
			{
				if (j >= 6 - i && j <= 4 + i) {
					cout << i;
				}
				else {
					cout << " "; 
				}
			}
			cout << endl;
		}
	}
	else if (num == 6)
	{
		int count = 6;
		for (int i = 1; i <= count; i++)
		{
			for (int j = 1; j <= count + i - 1; j++)
			{
				if (j <= count - i)
				{
					cout << " ";
				}
				else if (j <= count)
				{
					cout << count - j + 1 ;
				}
				else 
				{
					cout << j - count + 1 ;
				}
			}
			cout << endl;
		}

	}
	else if (num == 7)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (i - j == 0 || i + j == 10)
				{
					cout << "@";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl ;
		}
	}
	else if( num == 0 )
	{
		cout << "Program is Exit" << endl ;
	}
	else
	{
		cout << " Plz Enter Valid Number " << endl;
	}
	system("pause");
	return 0;
}