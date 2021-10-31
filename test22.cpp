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
	cout << "1) Wypisz\n";
	cout << "2) \n";
	cout << "3) \n";
	cout << "0) Wyjdz" << endl;
}

void wypisz(string t[], int &ile)
{
	cout << "\nTablica:\n";
    for (int i = 0; i < ile; i++)
    {
        cout << "Komorka nr " << i + 1 << ": " << t[i] << endl;
    }
}

int main()
{
	string tablica[10];
    tablica[0] = "a";
    tablica[1] = "b";
    tablica[2] = "f";
    tablica[3] = "e";
    tablica[4] = "d";
    tablica[5] = "c";
	int ile = 6;
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