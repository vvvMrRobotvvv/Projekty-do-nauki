#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;

bool czybyla(int liczba, int t[], int ile)
{
	if (ile <= 0)
		return false;
	int i = 0;
	do
	{
		if (t[i] == liczba)
			return true;
		i++;
	} while (i < ile);
	return false;
}
int losuj()
{
	return (rand() % 9) + 2;
}

int main()
{
	srand(time(0));
	char a;
	int liczba = 0;
	int wylosowane[2];
	int wylosowanych = 0;
	for (;;)
	{
		a = getch();
		if (a == 0)
			return 0;
		do
		{
			liczba = losuj();
			if (czybyla(liczba, wylosowane, wylosowanych) == false)
			{
				wylosowane[wylosowanych] = liczba;
				wylosowanych++;
			}
		} while (wylosowanych < 2);
		int mnozna = wylosowane[0];
		int mnoznik = wylosowane[1];
		cout << "\n\t" << mnozna << " * " << mnozna << " = ";
		getch();
		cout << mnozna * mnoznik << endl;
        wylosowane[0] = 0;
        wylosowane[1] = 0;
        wylosowanych = 0;
	}
}