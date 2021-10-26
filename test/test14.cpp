#include <iostream>

using namespace std;

void wypisz(int& a)
{
	cout << a << endl;
	a += 10;
	cout << a << endl;
	return;
}

int main()
{
	int a = 0;
	wypisz(a);
	cout << a << endl;
	return 0;
}