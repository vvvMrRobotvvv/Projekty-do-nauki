#include <iostream>
using namespace std;

void wypelnijTablice( int t[], int iRozmiar )
{
    std::cout << "Podaj " << iRozmiar << " liczb:" << std::endl;
    int i = 0;
    do
    {
        std::cin >> t[ i ];
        i++;
    } while( i < iRozmiar );
   
}

int main()
{
    int moja_tablica[ 5 ];
    wypelnijTablice( moja_tablica, 5 );
    int i = 0;
    do
    {
        std::cout << moja_tablica[ i ] << ", ";
        i++;
    } while( i < 5 );
   
    return 0;
}