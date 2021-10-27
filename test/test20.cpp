#include <iostream>
#include <limits>
#include <string>

using namespace std;

void wczytaj_imie(string imiona[], int i)
{
	cout << "\nPodaj imie osoby nr " << i + 1 << ":";
	getline(cin, imiona[i]);
	return;
}

int main()
{
	string imiona[10];
	string nazwiska[10];
	int wiek[10];
	for(int i = 0; i < 10; i++)
	{
		wczytaj_imie(imiona, i);
	}
    cout << "\n" << imiona << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << imiona[i] << endl;
	}
	return 0;
}