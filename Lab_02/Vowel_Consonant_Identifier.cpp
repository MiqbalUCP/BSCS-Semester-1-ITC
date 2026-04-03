#include<iostream>
using namespace std;
int main()
{
	char vowel;

	cout << " Enter the Alphabet" << endl;

	cin >> vowel;
	if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
	{
		cout << " VOWEL" << endl;

	}
	else
		cout << " CONSTANT" << endl;
	return 0;

}
