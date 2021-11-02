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
		cout << "Blad wczytywania sproboj ponownie" << endl;
		return false;
	}
	return true;
}

void menu()
{
	cout << "\nMenu glowne:\n";
	cout << "1) Wypisz\n";
	cout << "2) Wczytaj\n";
	cout << "3) \n";
	cout << "0) Wyjdz" << endl;
}

void wypisz(string t[], int ile)
{
	if (ile <= 0)
	{
		cout << "\nTablica jest pusta :(" << endl;
		return;
	}
	cout << "\nTablica:\n";
	for (int i = 0; i < ile; i++)
	{
		cout << "Komorka nr " << i + 1 << ": " << t[i] << endl;
	}
}

void wczytaj(string t[], int &ile, int number)
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i = 0; i < number; i++)
	{
		cout << "\nPodaj komorke nr " << ile + 1 << ": ";
		getline(cin, t[ile]);
		ile++;
		cout << ile << endl;
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
			if (a < 0 || a > 3)
				cout << "\nBlad wczytywania sproboj ponownie" << endl;
		} while (czy() == false || a < 0 || a > 3);

		switch (a)
		{
		case 1:
			wypisz(tablica, ile);
			break;
		case 2:
			int number;
			cout << "\nPodaj ilosc komorek jakie chcesz zadeklarowac: ";
			do
			{
				podaj(number);
				if (number > 10 - ile)
					cout << "\nBlad wczytywania sproboj ponownie" << endl;
			} while (czy() == false || number > 10 - ile);
			wczytaj(tablica, ile, number);
			break;
		default:
			break;
		}
	} while (a != 0);
	return 0;
}