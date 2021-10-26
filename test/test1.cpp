#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void wylosujLiczby(int t[], int rozmiar, int min, int max)
{
	srand(time(0));
	int i = 0;
	do
	{
		t[i] = ((rand() % max) + min);
		i++;
	} while (i < rozmiar);
	return;
}

void wypiszLiczby(int t[], int rozmiar)
{
	int i = 0;
	do
	{
		cout << t[i] << endl;
		i++;
	} while (i < rozmiar);
}

int obliczSume(int t[], int rozmiar)
{
	int i = 0;
	int wynik = 0;
	do
	{
		wynik += t[i];
		i++;
	} while (i < rozmiar);
	return wynik;
}

int main()
{
	int tablica[999];
	wylosujLiczby(tablica, 999, 4, 10);
	wypiszLiczby(tablica, 999);
	int iSuma = obliczSume(tablica, 999);
	std::cout << "Suma liczb wynosi: " << iSuma << std::endl;
	return 0;
}