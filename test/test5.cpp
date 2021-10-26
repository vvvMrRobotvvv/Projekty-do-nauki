#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void podajliczbe(int liczby[])
{
	int ile = 0;
	do
	{
		cout << "Podaj " << ile + 1 << " liczbe:" << endl;
		cin >> liczby[ile];
		cin.clear();
		cin.sync();
		ile++;
	} while (ile < 10);
}

void wysliczby(int liczby[])
{
	int ile = 0;
	do
	{
		cout << "Liczby to:" << liczby[ile] << endl;
		ile++;
	} while (ile < 10);
}

int losuj()
{
	int a = (rand() % 10) + 0;
	return a;
}

bool czybyla(int liczba, int tab[], int z)
{
	if (z <= 0)
	{
		return false;
	}
	int a = 0;
	do
	{
		if (tab[a] == liczba)
		{
			return true;
		}
		else
		{
			a++;
		}

	} while (a < z);

	return false;
}

void pokaz(int wylosowane[])
{
	int ile = 0;
	do
	{
		cout << "Liczby to:" << wylosowane[ile] << endl;
		ile++;
	} while (ile < 8);
}

int main()
{
	srand(time(0));
	int liczby[10];
	int wylosowanych = 0;
	int wylosowane[8];
	int z = 0;
	cout << "Podaj teraz 10 liczby, ktore potem wylosuje bez powtorzen" << endl;
	podajliczbe(liczby);
	wysliczby(liczby);
	cout << "Losujemy teraz 8 z 10 podanych bez powtorzenia" << endl;
	do
	{
		int liczba = liczby[losuj()];
		if (czybyla(liczba, wylosowane, z) == false)
		{
			wylosowane[z] = liczba;
			z++;
		}
	} while (z < 8);

	pokaz(wylosowane);

	return 0;
}