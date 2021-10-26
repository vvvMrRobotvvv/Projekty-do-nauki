#include <iostream>
#include <limits>

using namespace std;

void podaj(float &a)
{
	cin >> a;
}

bool czy()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n\nBlad wczytywania" << endl;
		return false;
	}
	return true;
}

int kryteria(float p, float m)
{
	if (p == m)
		return 6;
	else if (p >= (m * 0.91))
		return 5;
	else if (p >= (m * 0.76))
		return 4;
	else if (p >= (m * 0.51))
		return 3;
	else if (p >= (m * 0.33))
		return 2;
	else
		return 1;
}

void punktacja(float m)
{
    cout << endl;
    cout << "Punktacja:\n";
    cout << "6 - " << m << " punktow\n";
    cout << "5 - od " << (m * 0.99) << " punktow do " << (m * 0.91) << " punktow\n";
    cout << "4 - od " << (m * 0.90) << " punktow do " << (m * 0.76) << " punktow\n";
    cout << "3 - od " << (m * 0.75) << " punktow do " << (m * 0.51) << " punktow\n";
    cout << "2 - od " << (m * 0.50) << " punktow do " << (m * 0.33) << " punktow\n";
    cout << "1 - od " << (m * 0.32) << " punktow do " << 0 << " punktow" << endl;
}

int main()
{
	float punkty, max;
	do
	{
		cout << "\nPodaj ilosc zdobytych punktow: ";
		podaj(punkty);
	} while (czy() == false);
	do
	{
		cout << "\n\nPodaj maksymalna ilosc punktow: ";
		podaj(max);
	} while (czy() == false);
	int ocena = kryteria(punkty, max);
	cout << "\n\nTwoja ocena to: " << ocena << endl;
    punktacja(max);
	return 0;
}