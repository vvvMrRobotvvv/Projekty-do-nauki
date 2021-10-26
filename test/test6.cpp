#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void podaj(int t[])
{
	int i = 0;
	cout << "Podaj 20 liczb z czego co najmniej 10 roznych" << endl;
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
			cout << "\nPodales wartosc nieliczbowa sproboj ponownie" << endl;
			cin >> t[i];
		}
		i++;
	} while (i < 20);
}

void wypisz(int t[])
{
	cout << "\n\nPodales liczby:" << endl;
	int i = 0;
	do
	{
		i++;
		cout << i << ") ";
		i--;
		cout << t[i] << endl;
		i++;
	} while (i < 20);
	
}

int losuj()
{
	int a = (rand() % 20);
	return a;
}

bool czybyla(int t[], int p[], int L, int W)
{
	if (W == 0)
	{
		return false;
	}
	int i = 0;
	do
	{
		if (t[i] == L)
		{
			return true;
		}
		else i++;
	} while (i < W);
	return false;
}

void wynik(int p[])
{
	cout << "\n\nOto wylosowane liczby:" << endl;
	int i = 0;
	do
	{
		i++;
		cout << "\n" << i << ") ";
		i--;
		cout << p[i] << endl;
		i++;
	} while (i < 10);
	
}

int main()
{
	int podane[20];
	int wylosowane[10];
	int wylosowanych = 0;
	podaj(podane);
	wypisz(podane);
	do
	{
		int liczba = podane[losuj()];
		if (czybyla(podane, wylosowane, liczba, wylosowanych) == false)
		{
			wylosowane[wylosowanych] = liczba;
			wylosowanych++;
		}
	} while (wylosowanych < 10);
	wynik(wylosowane);
	return 0;
}