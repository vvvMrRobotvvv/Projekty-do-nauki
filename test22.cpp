#include <iostream>
#include <string>
#include <limits>

using namespace std;

int podaj(int &a)
{
	cin >> a;
	return a;
}

bool czy()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
	return true;
}

void menu()
{
	cout << "Menu glowne:\n";
	cout << "Pocja 1 wypisz\n";
	cout << "Pocja 2\n";
	cout << "Pocja 3\n";
	cout << "Pocja 0" << endl;
}

void wypisz(string t[], int &ile)
{
	int x;
	cout << "\nIle komorek chcesz podac ";
	cin >> x;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nIle komorek chcesz podac ";
		cin >> x;
	}
	for (int i = ile; i < (x + ile - 1); i++)
	{
		cout << t[i] << endl;
	}
}

int main()
{
	string tablica[10];
	int ile = 0;
	int a;
	do
	{
		a = -1;
		do
		{
			menu();
			podaj(a);
			cout << endl;
		} while (czy() == false || a < 0 || a > 3);

		switch (a)
		{
		case 1:
			wypisz(tablica, ile);
			break;
		default:
			break;
		}
	} while (a != 0);
	return 0;
}