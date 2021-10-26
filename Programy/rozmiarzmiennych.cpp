#include <iostream>
#include <cstdio>
int main()
{
    std::cout << "sizeof(bool) true / false = " << sizeof( bool ) << std::endl;
    std::cout << "sizeof(char) od -128 do 127 = " << sizeof( char ) << std::endl;
    std::cout << "sizeof(unsigned char) od 0 do 255 = " << sizeof( unsigned char ) << std::endl;
    std::cout << "sizeof(wchar_t) = " << sizeof( wchar_t ) << std::endl;
    std::cout << "sizeof(short) = " << sizeof( short ) << std::endl;
    std::cout << "sizeof(unsigned short) = " << sizeof( unsigned short ) << std::endl;
    std::cout << "sizeof(int) = " << sizeof( int ) << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof( unsigned int ) << std::endl;
    std::cout << "sizeof(long) = " << sizeof( long ) << std::endl;
    std::cout << "sizeof(unsigned long) = " << sizeof( unsigned long ) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof( long long ) << std::endl;
    std::cout << "sizeof(float) = " << sizeof( float ) << std::endl;
    std::cout << "sizeof(double) = " << sizeof( double ) << std::endl;
    std::cout << "sizeof(long double) = " << sizeof( long double ) << std::endl;
    return 0;
}