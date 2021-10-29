#include <iostream>
#include <string>
#include <limits>

using namespace std;

void menu()
{
	cout << "\n1) Wczytaj" << endl;
}

int menu_switch()
{
	int a;
	do
	{
		if(cin.fail())
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
	for(int i; i < a; i++)
	{
		cout << "Podaj komorke " << ile + 1 << ": ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, t[ile]);
	}
}

int main()
{
	int ile = 0;
	menu();
	int selection = menu_switch();
	string tablica[10];
	switch (selection)
	{
	case 1:
		wczytywanie(tablica, ile);
		break;
	
	default:
		break;
	}
}