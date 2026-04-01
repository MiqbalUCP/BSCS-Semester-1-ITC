#include <iostream>
using namespace std;

int main() {
	float priceWheat, quantityWheat, valueWheat;
	float priceRice, quantityRice, valueRice;
	float priceSugar, quantitySugar, valueSugar;
	cout << "Enter the price of Wheat: ";
	cin >> priceWheat;
	cout << "Enter the quantity of Wheat: ";
	cin >> quantityWheat;


	cout << "Enter the price of Rice: ";
	cin >> priceRice;
	cout << "Enter the quantity of Rice: ";
	cin >> quantityRice;


	cout << "Enter the price of Sugar: ";
	cin >> priceSugar;
	cout << "Enter the quantity of Sugar: ";
	cin >> quantitySugar;


	valueWheat = priceWheat * quantityWheat;
	valueRice = priceRice * quantityRice;
	valueSugar = priceSugar * quantitySugar;


	cout << "Total value of Wheat: " << valueWheat << endl;
	cout << "Total value of Rice: " << valueRice << endl;
	cout << "Total value of Sugar: " << valueSugar << endl;

	return 0;
}

