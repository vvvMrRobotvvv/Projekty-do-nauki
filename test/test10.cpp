#include <iostream>

void wypiszTablice( int tablica[], int ile )
{    
    for( int indeks = 0; indeks < ile; indeks++ )
        std::cout << tablica[ indeks ] << std::endl;  
}

int sumujLiczby( int tablica[], int ile )
{
    int oblicz = 0;
    int i = 0;
    do
    {
        oblicz += tablica[ i ];
        i++;
    } while (i < ile);
    return oblicz;
}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 11;
    dane[ 1 ] = 5;
    dane[ 2 ] = 7;
    dane[ 3 ] = 8;
    dane[ 4 ] = 2;
    wypiszTablice( dane, 5 );
    int wynik = sumujLiczby( dane, 5 );
    std::cout << "Suma liczb wynosi = " << wynik << std::endl;
    return 0;
}