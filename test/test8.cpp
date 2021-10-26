#include <iostream>
using namespace std;

void podaj(int t[])
{
	for(int i = 0;i < 3;i++)
	{
		cin >> t[i];
	}
}

void wypisz(int t[])
{
	cout << endl;
	for(int i = 0;i < 3;i++)
	{
		cout  << t[i] << endl;
	}
}

int funkcja(int t[])
{
	int max = 0;
	for(int i = 0;i < 3;i++)
	{
		if(t[i] > max)
		{
			max = t[i];
		}
	}
	return max;
}

int funkcja1(int t[])
{
	int max = 0;;
	for(int i = 0;i < 3;i++)
	{
		if(t[i] > max)
		{
			max = t[i];
		}
	}
    for(int i = 0; i < 3;i++)
    {
        if (t[i] == max)
        {
            int pozycja = i;
            return pozycja;
        }
    }
    return -1;
}

int main(){
	int tablica[3];
	podaj(tablica);
	wypisz(tablica);
	int liczba = funkcja(tablica);
    int pozycja = funkcja1(tablica);
	cout << "\nWynik: " << liczba << endl;
    if ( pozycja > -1)
    {
        cout << "\nPozycja " << pozycja << endl;
    }
    else
    {
        cout << "\nOkreslenie pozycji nie powidlo sie" << endl;
    }
}