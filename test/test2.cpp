#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool czybyla(int liczba, int tab[], int ile)
{
	if (ile <= 0)
		return false;
	int i = 0;
	do
	{
		if (tab[i] == liczba)
			return true;
		i++;
	} while (i < ile);

	return false;
}

int losuj()
{
	return (rand() % 10) + 1;
}

int main()
{
	srand(time(0));
	int wylosowane[5];
	int liczba = 0;
	int wylosowanych = 0;
	do
	{
		liczba = losuj();
		if (czybyla(liczba, wylosowane, wylosowanych) == false);
		{
			wylosowane[wylosowanych] = liczba;
			wylosowanych++;
		}
	} while (wylosowanych < 5);

	wylosowanych = 0;
	do
	{
		cout << wylosowane[wylosowanych] << endl;
		wylosowanych++;
	} while (wylosowanych < 5);
	return 0;
}