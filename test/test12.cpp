#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wylosujLiczby(int t[], int ile)
{
	srand(time(0));
	for (int i = 0; i < ile; i++)
	{
		t[i] = (rand() % 21) + 10;
	}
}

void wypiszTablice(int t[], int ile)
{
	for(int i = 0; i < ile; i++)
	{
		cout << t[i] << endl;
	}
}

void wypiszTabliceOdTylu(int t[], int ile)
{
	cout << endl;
	for(int i = 9; i > ile - 11;i--)
	{
		cout << t[i] << endl;
	}
}

int znajdzMinimum(int t[], int ile)
{
    int min = 100;
    for(int i = 0; i < ile; i++)
    {
        if(t[i] < min) min = t[i];
    }
    return min;
}

int znajdzMaksimum(int t[], int ile)
{
    int max = 0;
    for(int i = 0; i < ile; i++)
    {
        if(t[i] > max) max = t[i];
    }
    return max;
}

void wypiszMinMax(int min, int max)
{
    cout << endl << "Najmniejsza liczba to: " << min << endl;
    cout << "Najwieksza liczba to: " << max << endl;
}

int main()
{
	int tablica[10];
	wylosujLiczby(tablica, 10);
	wypiszTablice(tablica, 10);
	wypiszTabliceOdTylu(tablica, 10);
	int iMin = znajdzMinimum(tablica, 10);
	int iMax = znajdzMaksimum(tablica, 10);
	wypiszMinMax(iMin, iMax);
	return 0;
}