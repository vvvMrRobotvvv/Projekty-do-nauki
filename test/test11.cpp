#include <iostream>

using namespace std;

void wypelnij(int t[], int ile)
{
	int n = 1;
	for (int i = 0;i < ile;i++)
	{
		t[i] = (1 + i * 5);
	}
}

void wypisz(int t[], int ile)
{
	cout << endl;
	for(int i = 0;i < ile;i++)
	{
		cout << t[i] << endl;
	}
}

int main()
{
	int tablica[20];
	wypelnij(tablica, 20);
	wypisz(tablica, 20);
	return 0;
}