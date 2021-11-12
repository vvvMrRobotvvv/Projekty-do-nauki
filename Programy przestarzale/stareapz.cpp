#include <iostream>
#include <cstdio>
#include <conio.h>
#include <limits>
int main()
{
    std::cout << "Oto eksperymentalny program testowy\n" << std::endl;
	
	//Menu programu (switch, pętla do while)
	
	menu_programu:
	for (char a = 0; a == 0;)
		{
		std::cout << "___Menu programu___\n";
		std::cout << "1) Program obliczajacy pola figur\n";
		std::cout << "2) Wyjscie" << std::endl;
		int selection = 0;
		std::cin >> selection;
		while (std::cin.fail())
		{
			std::cout << "\nPodales wartosc nieliczbowa";
			std::cin.clear();
			std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
			std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
			std::cin >> selection;
		}
		switch(selection)
		{
		case 1:
			goto Program_obliczajacy_pola_figur;
			a++;
			break;
		case 2:
			return 0;
			break;
		default:
			std::cout << "\nWybrales niepoprawna opcje sprobuj ponownie\n" << std::endl;
		}
	}
	
		
	//Pola figur
	{
		Program_obliczajacy_pola_figur:
		std::cout << "\n___Program oblicajacy pola figur___\n\nWybierz figure, ktorej pole chcesz obliczyc:" << std::endl;
		
	for (char a = 0; a == 0;)
	{
		std::cout << "1)Kwadrat\n";
		std::cout << "2)Prostokat\n";
		std::cout << "3)Trojkat\n";
		std::cout << "4)Trapez\n";
		std::cout << "5)Romb\n";
		std::cout << "6)Deltoid\n";
		std::cout << "7)Wyjscie\n" << std:: endl;
		int selection = 0;
		std::cin >> selection;
		while (std::cin.fail())
		{
			std::cout << "\nPodales wartosc nieliczbowa";
			std::cin.clear();
			std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
			std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
			std::cin >> selection;
		}
			switch(selection)
		{
		case 1:
			goto kwadrat;
			a++;
			break;

		case 2:
			goto prostokat;
			a++;
			break;

		case 3:
			goto trojkat;
			a++;
			break;

		case 4:
			goto trapez;
			a++;
			break;

		case 5:
			goto romb;
			a++;
			break;

		case 6:
			goto deltoid;
			a++;
			break;

		case 7:
			goto menu_programu;
			a++;
			break;
		default:
			std::cout << "\nWybrales niepoprawna opcje sprobuj ponownie\n" << std::endl;
		}
	}

		//Kwadrat
		{
			kwadrat:
			char a = 0;
			{
				std::cout << "\nJakiego wzoru chcesz uzyc?\n";

				do
				{
					std::cout << "1)Wzor z uzyciem dlugosci boku\n";
					std::cout << "2)Wzor z uzyciem dlugosci przekatnej" << std::endl;
					int selection = 0;
					std::cin >> selection;
					while (std::cin.fail())
					{
						std::cout << "\nPodales wartosc nieliczbowa";
						std::cin.clear();
						std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
						std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
						std::cin >> selection;
					}
					switch(selection)
					{
					case 1:
						goto kwadrat_boki;
						a++;
						break;
					case 2:
						goto kwadrat_przekatne;
						a++;
						break;
					default:
						std::cout << "\nWybrales niepoprawna opcje sprobuj ponownie\n" << std::endl;
					}
				} 
				while (a == 0);
			}
		}
			{
				kwadrat_boki:
				float a = 0;
				std::cout << "Podaj bok a kwadratu: ";
				std::cin >> a;
				while (std::cin.fail())
				{
					std::cout << "\nPodales wartosc nieliczbowa";
					std::cin.clear();
					std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
					std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
					std::cin >> a;
				}
				if (a > 0)
				{
					float z = a;
					z *= z;
					std::cout << "\nPole kwadratu o boku " << a << " jest rowne " << z << std::endl;
					goto Program_obliczajacy_pola_figur;
				}
				else
				{
					std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
					goto kwadrat_boki;
				}
				
			}

			{
				kwadrat_przekatne:
				float d = 0;
				std::cout << "Podaj przekatna d kwadratu: ";
				std::cin >> d;
				while (std::cin.fail())
				{
					std::cout << "\nPodales wartosc nieliczbowa";
					std::cin.clear();
					std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
					std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
					std::cin >> d;
				}
				if (d > 0)
				{
					float z = d;
					z *= z;
					z /= 2;
					std::cout << "\nPole kwadratu o przekatnej " << d << " jest rowne " << z << std::endl;
					goto Program_obliczajacy_pola_figur;
				}
				else
				{
					std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
					goto kwadrat_przekatne;
				}
			}
		//Prostokat
		{
			prostokat:
			float a = 0;
			float b = 0;
			std::cout << "Podaj bok a prostokatu: ";
			std::cin >> a;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> a;
			}
			std::cout << "Podaj bok b prostokatu: ";
			std::cin >> b;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> b;
			}
			if (a > 0 && b > 0)
			{
				float z = a;
				z *= b;
				std::cout << "\nPole kwadratu o boku a rownym " << a << " i boku b rownym " << b << " jest rowne " << z << std::endl;
				goto Program_obliczajacy_pola_figur;
			}
			else
			{
				std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
				goto prostokat;
			}
		}
		//Trojkat
		{
			trojkat:
			float a = 0;
			float h = 0;
			std::cout << "Podaj dlugosc boku trojkatu: ";
			std::cin >> a;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> a;
			}
			std::cout << "Podaj wysokosc opuszczona na podany bok: ";
			std::cin >> h;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> h;
			}
			if (a > 0 && h > 0)
			{
				float z = 0;
				z = a * h / 2;
				std::cout << "\nPole trojkatu o boku a rownym " << a << " i wysokosci h opuszczonej na bok a, ktora wynosi " << h << " jest rowne " << z << std::endl;
				goto Program_obliczajacy_pola_figur;
			}
			else
			{
				std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
				goto trojkat;
			}
		}

		//Trapez
		{
			trapez:
			float a = 0;
			float b = 0;
			float h = 0;
			std::cout << "Podaj bok a trapezu: ";
			std::cin >> a;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> a;
			}
			std::cout << "Podaj bok b trapezu rownolegly do boku a: ";
			std::cin >> b;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> b;
			}
			std::cout << "Podaj wysokosc h opuszczona na jeden z bokow podanych wczesniej: ";
			std::cin >> h;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> h;
			}
			if (a > 0 && b > 0 && h > 0)
			{
				float z = 0;
				z = (a + b) * h / 2;
				std::cout << "\nPole trapezu o boku a rownym " << a << ",boku b oposzczonym na bok a rownym " << b << " i wysokosci h opuszczonej na podane wczesniej boki, ktora wynosi" << h << "jest rowne " << z << std::endl;
				goto Program_obliczajacy_pola_figur;
			}
			else
			{
				std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
				goto trapez;
			}
		}

		//Romb
		{
			romb:
			char a = 0;
			{
				std::cout << "\nJakiego wzoru chcesz uzyc?\n";

				do
				{
					std::cout << "1)Wzor z uzyciem dlugosci boku i opadajacej na niego wysokosci\n";
					std::cout << "2)Wzor z uzyciem dlugosci przekatnych" << std::endl;
					int selection = 0;
					std::cin >> selection;
					while (std::cin.fail())
					{
						std::cout << "\nPodales wartosc nieliczbowa";
						std::cin.clear();
						std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
						std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
						std::cin >> selection;
					}
					switch(selection)
					{
					case 1:
						goto romb_bok_wysokosc;
						a++;
						break;
					case 2:
						goto romb_przekatne;
						a++;
						break;
					default:
						std::cout << "\nWybrales niepoprawna opcje sprobuj ponownie\n" << std::endl;
					}
				} 
				while (a == 0);
			}
		}
			{
				romb_bok_wysokosc:
				float a = 0;
				float h = 0;
				std::cout << "Podaj bok a rombu: ";
				std::cin >> a;
				while (std::cin.fail())
				{
					std::cout << "\nPodales wartosc nieliczbowa";
					std::cin.clear();
					std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
					std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
					std::cin >> a;
				}
				std::cout << "Podaj wysokosc h rombu: ";
				std::cin >> h;
				while (std::cin.fail())
				{
					std::cout << "\nPodales wartosc nieliczbowa";
					std::cin.clear();
					std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
					std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
					std::cin >> h;
				}
				if (a > 0 && h > 0)
				{
					float z = a;
					z *= h;
					std::cout << "\nPole rombu o boku a rownym " << a << " i wysokosci h opuszczonej na bok a, ktora wynosi " << h << " jest rowne " << z << std::endl;
					goto Program_obliczajacy_pola_figur;
				}
				else
				{
					std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
					goto romb_bok_wysokosc;
				}
				
			}

			{
				romb_przekatne:
				float d1 = 0;
				float d2 = 0;
				std::cout << "Podaj pierwsza przekatna rombu: ";
				std::cin >> d1;
				while (std::cin.fail())
				{
					std::cout << "\nPodales wartosc nieliczbowa";
					std::cin.clear();
					std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
					std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
					std::cin >> d1;
				}
				std::cout << "Podaj druga przekatna rombu: ";
				std::cin >> d2;
				while (std::cin.fail())
				{
					std::cout << "\nPodales wartosc nieliczbowa";
					std::cin.clear();
					std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
					std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
					std::cin >> d2;
				}
				if (d1 > 0 && d2 > 0)
				{
					float z = d1;
					z *= d2 / 2;
					std::cout << "\nPole rombu o przekatnej d1 rownej " << d1 << " i przekatnej d2 wynoszacej" << d2 << " jest rowne " << z << std::endl;
					goto Program_obliczajacy_pola_figur;
				}
				else
				{
					std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
					goto romb_przekatne;
				}
			}
		//Deltoid
		{
			deltoid:
			float d1 = 0;
			float d2 = 0;
			std::cout << "Podaj bprzekatna d1 deltoidu: ";
			std::cin >> d1;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> d1;
			}
			std::cout << "Podaj przekatna d2 deltoidu: ";
			std::cin >> d2;
			while (std::cin.fail())
			{
				std::cout << "\nPodales wartosc nieliczbowa";
				std::cin.clear();
				std::cin.ignore( std::numeric_limits <std::streamsize>::max(), '\n');
				std::cout << "\n\nSproboj ponownie podac liczbe" << std::endl;
				std::cin >> d2;
			}
			if (d1 > 0 && d2 > 0)
			{
				float z = d1;
				z *= d2 / 2;
				std::cout << "\nPole deltoidu o przekatnej d1 rownej " << d1 << " i przekatnej d2 rownej " << d2 << " jest rowne " << z << std::endl;
				goto Program_obliczajacy_pola_figur;
			}
			else
			{
				std::cout << "\nPodales nieprawidlowa dlugosc boku sprobuj ponownie\n" << std::endl;
				goto deltoid;
			}
		}
	}
}