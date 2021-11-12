#include <iostream>
#include <limits>

int main()
{
	start:
    std::cout << "Oto mini kalkulator wykonujacy dodawanie, odejmowanie, mnozenie i dzielenie na 2 dowolnych liczbach podanych przez ciebie" << std::endl;
    long double a = 0;
    long double b = 0;
    std::cout << "\nPodaj pierwsza wartosc: ";
    std::cin >> a;
    while (std::cin.fail())
    {
        std::cout << "Podales wartosc nieliczbowa" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
        std::cout << "\nSproboj ponownie podac pierwsza wartosc: ";
        std::cin >> a;
    }
	selekcja:
	int selection = 0;
    std::cout << "\n\nPodaj rodzaj operacji jaki bedziesz chcial/a wykonac na liczbach\n1) Dodawanie\n2) odejmowanie\n3) Mnozenie\n4) Dzielenie\n5) Cofnij\n6) Wyjdz z programu\n" << std::endl;
	std::cin >> selection;
	while (std::cin.fail())
    {
        std::cout << "Podales wartosc nieliczbowa" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
        std::cout << "\nSproboj ponownie podac numer pozadanej opercaji: ";
        std::cin >> selection;
	}
	
	switch (selection)
	{
		case 1:
		{
			std::cout << "Wybrales dodawanie podaj druga wartosc, aby otrzymac sume podanych liczb: ";
			std::cin >> b;
			while (std::cin.fail())
			{
				std::cout << "Podales wartosc nieliczbowa" << std::endl;
  				std::cin.clear();
  				std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
  				std::cout << "\nSproboj ponownie podac druga wartosc: ";
  				std::cin >> b;
			}
			a += b;
			std::cout << "Suma tych liczb wynosi: " << a << std::endl;
			goto start;
			break;
		}
		case 2:
		{
			std::cout << "Wybrales odejmowanie podaj druga wartosc, aby otrzymac roznice podanych liczb: ";
			std::cin >> b;
			while (std::cin.fail())
			{
				std::cout << "Podales wartosc nieliczbowa" << std::endl;
  				std::cin.clear();
  				std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
  				std::cout << "\nSproboj ponownie podac druga wartosc: ";
  				std::cin >> b;
			}
			a -= b;
			std::cout << "Roznica tych liczb wynosi: " << a << std::endl;
			goto start;
			break;
		}
		case 3:
		{
			std::cout << "Wybrales mnozenie podaj druga wartosc, aby otrzymac iloczyn podanych liczb: ";
			std::cin >> b;
			while (std::cin.fail())
			{
				std::cout << "Podales wartosc nieliczbowa" << std::endl;
  				std::cin.clear();
  				std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
  				std::cout << "\nSproboj ponownie podac druga wartosc: ";
  				std::cin >> b;
			}
			a *= b;
			std::cout << "Roznica tych liczb wynosi: " << a << std::endl;
			goto start;
			break;
		}
		case 4:
		{	
			dzielenie:
			std::cout << "Wybrales dzielenie podaj druga wartosc, aby otrzymac iloraz podanych liczb: ";
			std::cin >> b;
			while (std::cin.fail())
			{
				std::cout << "Podales wartosc nieliczbowa" << std::endl;
  				std::cin.clear();
  				std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
  				std::cout << "\nSproboj ponownie podac druga wartosc: ";
  				std::cin >> b;
			}
			if (b != 0)
			{
				a /= b;
				std::cout << "iloraz tych liczb wynosi: " << a << std::endl;
				goto start;
			}
			else
			{
				std::cout << "Nie dzielimy przez zero!!!\nSproboj ponownie" << std::endl;
				goto dzielenie;
			}
			break;
		}
		case 5:
			goto start;
			break;
		case 6:
			return 0;
			break;
		default:
			std::cout << "Wybrales niepoprawny numer sprobuj ponownie" << std::endl;
			goto selekcja;
			break;
	}
}