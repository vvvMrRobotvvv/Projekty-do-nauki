#include <iostream>
#include <limits>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;

void menu() //Menu
{
	cout << "\nMenu programu\n";
	cout << "1) Kalkulator\n";
	cout << "2) Program obliczajacy pola figur\n";
	cout << "3) Program losujacy liiczby w podanym zakresie\n";
	cout << "0) Wyjscie" << endl;
}

void menu_kalkulator()
{
	cout << "\nMenu kalkulatora\n";
	cout << "1) Dodawanie\n";
	cout << "2) Odejmowanie\n";
	cout << "3) Mnozenie\n";
	cout << "4) Dzielenie\n";
	cout << "5) Potegowanie\n";
	cout << "6) Dzielenie z reszta\n";
	cout << "0) Wyjscie" << endl;
}

void menu_program_opbliczajacy_pola_figur() //Menu programu obliczajacego pola figur
{
	cout << "Program oblicajacy pola figur\nWybierz figure, ktorej pole chcesz obliczyc\n";
	cout << "1) Kwadrat\n";
	cout << "2) Prostoakat\n";
	cout << "3) Trojkat\n";
	cout << "4) Trapez\n";
	cout << "5) Romb\n";
	cout << "6) Deltoid\n";
	cout << "0) WYjscie" << endl;
	return;
}

void dodawanie() //Dodawanie
{
	float a, b = 0;
	cout << "Podaj pierwsza liczbe ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe ";
	cin >> b;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> b;
	}
	cout << "\n\n\t" << a << " + " << b << " = " << (a + b) << endl;
}

void odejmowanie() //Odejmowanie
{
	float a, b = 0;
	cout << "Podaj pierwsza liczbe ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe ";
	cin >> b;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> b;
	}
	cout << "\n\n\t" << a << " - " << b << " = " << (a - b) << endl;
}

void mnozenie() //Mnozenie
{
	long double a, b = 0;
	cout << "Podaj pierwsza liczbe ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe ";
	cin >> b;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> b;
	}
	cout << "\n\n\t" << a << " * " << b << " = " << (a * b) << endl;
}

void dzielenie() //Dzielenie
{
	float a, b = 0;
	cout << "Podaj pierwsza liczbe ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe ";
	cin >> b;	
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> b;
	}
	while (b == 0)
	{
		cout << "\n\n\tNIE DZIELIMY PRZEZ ZERO!!!\n\tPodaj liczbe ponownie" << endl;
		cin >> b;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
			cin >> b;
		}
	}
	cout << "\n\n\t" << a << " / " << b << " = " << (a / b) << endl;
}

void potegowanie() //Mnozenie
{
	long double podstawa, wykladnik = 0;
	cout << "Podaj podstawe potegi ";
	cin >> podstawa;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> podstawa;
	}
	cout << "Podaj wykladnik ";
	cin >> wykladnik;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> wykladnik;
	}
	cout << "\n\n\t" << podstawa << " ^ " << wykladnik << " = " << pow(podstawa, wykladnik) << endl;
}

void dzielenie_reszta() //Dzielenie z reszta
{
	int a, b = 0;
	cout << "Podaj pierwsza liczbe ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe ";
	cin >> b;	
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
		cin >> b;
	}
	while (b == 0)
	{
		cout << "\n\n\tNIE DZIELIMY PRZEZ ZERO!!!\n\tPodaj liczbe ponownie" << endl;
		cin >> b;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
			cin >> b;
		}
	}
	cout << "\n\n\t" << a << " / " << b << " = " << (a / b) << " r " << (a % b) << endl;
}

int losowanie(int a, int b)
{
	srand(time(0));
	return (rand() % a) + b;
}

int main()
{
	int liczba = 0;
	do
	{
		menu();
		cin >> liczba;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
			cin >> liczba;
		}
		switch (liczba)
		{
			case 1:
			{
				int liczba1 = 0;
				do
				{
					menu_kalkulator();
					cin >> liczba1;
					while (cin.fail())
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
						cin >> liczba1;
					}
					if (liczba1 == 1)
					{
						dodawanie();
						break;
					}
					else if (liczba1 == 2)
					{
						odejmowanie();
						break;
					}
					else if (liczba1 == 3)
					{
						mnozenie();
						break;
					}
					else if (liczba1 == 4)
					{
						dzielenie();
						break;
					}
					else if (liczba1 == 5)
					{
						potegowanie();
						break;
					}
					else if (liczba1 == 6)
					{
						dzielenie_reszta();
						break;
					}
					else if (liczba1 == 0)
					{}
					else
					cout << "\n Podales niewlasciwa liczbe sproboj ponownie" << endl;
				} while (liczba1 != 0);	
				break;
			}
			case 3:
			{
				int a, b = 0;
				cout << "Podaj zakres losowania:\nPodaj gorna granice ";
				cin >> a;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
					cin >> a;
				}
				cout << "\nPodaj dolna granice ";
				cin >> b;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
					cin >> b;
				}
				while (b >= a)
				{
					cout << "\nDolna granica musi byc mniejsza od drugiej sproboj ponownie ja podac" << endl;
					cin >> b;
					while (cin.fail())
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << " Podales wartosc nieliczbowa spruboj ponownie" << endl;
						cin >> b;
					}
				}
				int wylosowana_liczba = losowanie(a, b);
				cout << "Wylosowana liczba to " << wylosowana_liczba << endl;
				break;
			}
			case 0:
			{
				return 0;
				break;
			}
			default:
			{
				cout << "\nPodales niewlasciwy numer sproboj ponownie" << endl;
				break;
			}
		}
	} while (liczba != 0);
	
	
	return 0;
}