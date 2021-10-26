#include <iostream>
#include <limits>
#include <string>

using namespace std;

void wczytajOsobe(string &imie, string &nazwisko, int& wiek)
{
	cout << "\nPodaj imie: ";
    getline(cin, imie);
	cout << "\nPodaj nazwisko: ";
	getline(cin, nazwisko);
	cout << "\nPodaj wiek: ";
	cin >> wiek;
	if (cin.fail())
	{
		do
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nPodaj wiek ponownie: ";
			cin >> wiek;
		} while (cin.fail());
		
	}
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return;
}

void wypiszOsobe(string imie, string nazwisko, int wiek)
{

	cout << endl
		 << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Wiek: " << wiek << endl;

	return;
}

int main()
{
	string imie[2];
	string nazwisko[2];
	int wiek[2];
	for (int i = 0; i < 2; i++)
		wczytajOsobe(imie[i], nazwisko[i], wiek[i]);

	for (int i = 0; i < 2; i++)
		wypiszOsobe(imie[i], nazwisko[i], wiek[i]);

	return 0;
}