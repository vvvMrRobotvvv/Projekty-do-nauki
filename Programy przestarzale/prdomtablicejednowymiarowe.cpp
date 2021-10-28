#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int tablica[999];
	int i = 0;
	do
	{
		tablica[i] = (rand() % 10) + 4;
		i++;
	} while (i < 999);
	i = 0;
	do
	{
		cout << tablica[i] << endl;
		i++;
	} while (i < 999);
	int wynik = 0;
	i = 0;
	do
	{
		wynik += tablica[i];
		i++;
	} while (i < 999);
	cout << "\n\n Wynik:" << wynik << endl;
	return 0;
}