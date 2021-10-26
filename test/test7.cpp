#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

void podaj(int t[])
{
	cout << "\nPodaj 3 rozne liczby" << endl;
	int i = 0;
	int ii = 1;
	do
	{
		i++;
		cout << "Podaj liczbe " << i << ": ";
		i--;
		cin >> t[i];
		cout << endl;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nPodales wartosc nieliczbowa sproboj ponownie podac liczbe" << endl;
			cin >> t[i];
		}
		i++;
	} while (i < 3);
}

int losuj()
{
	int a = (rand() % 2);
	return a;
}

bool czybyla(int p[], int l, int w)
{
	if (w == 0)
	{
		return false;
	}
	int i = 0;
	do
	{
		if (p[i] == l)
		{
			return true;
		}
		else
		{
			i++;
		}
	} while (i < w);
	return false;
}

void wynik(int w[])
{
	int i = 0;
	cout << "\n\nOto wylosowane liczby:" << endl;
	do
	{
		i++;
		cout << "\n" << i << ") ";
		i--;
		cout << w[i] << endl;
		i++;
	} while (i < 2);
}

int main()
{
	int podane[3];
	int wylosowane[2];
	int wylosowanych = 0;
	podaj(podane);
	do
	{
		int liczba = podane[losuj()];
		if (czybyla(wylosowane, liczba, wylosowanych) == false)
		{
			wylosowane[wylosowanych] = liczba;
			wylosowanych++;
		}
	} while (wylosowanych < 2);
	wynik(wylosowane);
	return 0;
}