#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

bool czyBylaWylosowana(int iLiczba, int tab[], int ile)
{
    if (ile <= 0)
        return false;

    int i = 0;
    do
    {
        if (tab[i] == iLiczba)
            return true;

        i++;
    } while (i < ile);

    return false;
}

int wylosuj()
{
    return (rand() % 8) + 2;
}

int main()
{
    srand(time(0));
    unsigned char d;
    int wylosowane[2];
    int wylosowanych = 0;
    for (;;)
    {
        do
        {
            int liczba = wylosuj();
            if (czyBylaWylosowana(liczba, wylosowane, wylosowanych) == false)
            {
                wylosowane[wylosowanych] = liczba;
                wylosowanych++;
            } //if
        } while (wylosowanych < 2);

        int mnozna = wylosowane[0];
        int mnoznik = wylosowane[1];
        cout << "\n\t\t\t\t\t\t\t\t\t" << mnozna << " * " << mnoznik << " = ";
        d = getch();
        if (d == 27)
            return 0;
        cout << mnozna * mnoznik << endl
             << endl;
        wylosowane[0] = 0;
        wylosowane[1] = 0;
        wylosowanych = 0;
    }

    return 0;
}