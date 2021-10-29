#include <iostream>
#include <string>
#include <limits>

using namespace std;

void menu()
{
	cout << "\n1) Wczytaj";
	cout << "\n2) Wypisz";
	cout << "\n0) Wyjdz" << endl;
}

int menu_switch()
{
	int a;
	do
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cin >> a;
	} while (cin.fail() || (a < 0) && (a > 2));
	return a;
}

void wczytywanie(string t[], int ile)
{
	int a;
	cout << "\nPodaj ile komorek chcesz wczytac: ";
	cin >> a;
	for (int i; i < a; i++)
	{
		cout << "Podaj komorke " << ile + 1 << ": ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, t[ile]);
	}
}

void wypisz(string t[], int ile)
{
    cout << "\nTablica:\n";
    for(int i = 0; i < ile; i++)
    {
        cout << "Komorka nr " << i + 1 << ": " << t[i] << endl;
    }
}

int main()
{
	int ile = 0;
	string tablica[10];
    int selection;
	do
	{
        menu();
	    selection = menu_switch();
		switch (selection)
		{
		case 1:
			wczytywanie(tablica, ile);
			break;
        case 2:
			wypisz(tablica, ile);
			break;
		default:
			break;
		}
	} while (selection != 0);
	return 0;
}