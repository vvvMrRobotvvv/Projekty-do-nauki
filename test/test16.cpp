#include <iostream>
#include <limits>

using namespace std;

bool podaj(int& liczba)
{
	cin >> liczba;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
	return true;
}

int main()
{
	int a, b, c, d = 0;
	do
	{
		cout << endl << "Podaj liczbe ";
	} while (podaj(a) == false);
	do
	{
		cout << endl << "Podaj liczbe ";
	} while (podaj(b) == false);
	do
	{
		cout << endl << "Podaj liczbe ";
	} while (podaj(c) == false);
	do
	{
		cout << endl << "Podaj liczbe ";
	} while (podaj(d) == false);
	cout << a << endl << b << endl << c << endl << d << endl;
	return 0;
}