#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wczytywanie(int t[])
{
	cout << "Podaj 10 roznych liczb" << endl;
	int i = 0;
	do
	{
		cin >> t[i];
		i++;
	} while (i < 10);
}

void losuj(int *a, int *b,  int *c, int *d, int *e, int *f, int *g, int *h, int t[])
{
	*a = rand() % 10;
	*b = rand() % 10;
	*c = rand() % 10;
	*d = rand() % 10;
	*e = rand() % 10;
	*f = rand() % 10;
	*g = rand() % 10;
	*h = rand() % 10;
	while (t[*a] == t[*b])
	{
		*b = rand() % 10;
	}
	while (t[*a] == t[*c] || t[*b] == t[*c])
	{
		*c = rand() % 10;
	}
	while (t[*a] == t[*d] || t[*b] == t[*d] || t[*c] == t[*d])
	{
		*d = rand() % 10;
	}
	while (t[*a] == t[*e] || t[*b] == t[*e] || t[*c] == t[*e] || t[*d] == t[*e])
	{
		*e = rand() % 10;
	}
	while (t[*a] == t[*f] || t[*b] == t[*f] || t[*c] == t[*f] || t[*d] == t[*f] || t[*e] == t[*f])
	{
		*f = rand() % 10;
	}
	while (t[*a] == t[*g] || t[*b] == t[*g] || t[*c] == t[*g] || t[*d] == t[*g] || t[*e] == t[*g] || t[*f] == t[*g])
	{
		*g = rand() % 10;
	}
	while (t[*a] == t[*h] || t[*b] == t[*h] || t[*c] == t[*h] ||  t[*d] == t[*h] || t[*e] == t[*h] || t[*f] == t[*h] || t[*g] == t[*h])
	{
		*h = rand() % 10;
	}
}

void wypisz(int *a, int *b, int *c, int *d, int *e, int *f, int *g, int *h, int t[])
{
	cout << endl << "Wylosowane liczby:" << endl;
	cout << "1) " << t[*a] << endl;
	cout << "2) " << t[*b] << endl;
	cout << "3) " << t[*c] << endl;
	cout << "4) " << t[*d] << endl;
	cout << "5) " << t[*e] << endl;
	cout << "6) " << t[*f] << endl;
	cout << "7) " << t[*g] << endl;
	cout << "8) " << t[*h] << endl;
}

int main()
{
	srand(time(0));
	int tablica[10];
	int a, b, c, d, e, f, g, h;
	wczytywanie(tablica);
	losuj(&a, &b, &c, &d, &e, &f, &g, &h, tablica);
	wypisz(&a, &b, &c, &d, &e, &f, &g, &h, tablica);
	return 0;
}