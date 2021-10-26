#include <iostream>
#include <limits>

using namespace std;

bool wczytaj_liczbe(int &liczba)
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
	int x;
	do
	{
		cout << "Podaj liczbe: ";
	} while (wczytaj_liczbe(x) == false);

	cout << "Liczba podana to: " << x << endl;
	return 0;
}