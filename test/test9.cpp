#include <iostream>
using namespace std;

const char N = 3;
int t[N];

void podaj()
{
	for(int i = 0;i < N;i++)
	{
		cin >> t[i];
	}
}

void wypisz()
{
	cout << endl;
	for(int i = 0;i < N;i++)
	{
		cout  << t[i] << endl;
	}
}

int funkcja()
{
	int max = 0;
	for(int i = 0;i < N;i++)
	{
		if(t[i] > max)
		{
			max = t[i];
		}
	}
	return max;
}

int main(){
	podaj();
	wypisz();
	int liczba = funkcja();
	cout << "\nWynik: " << liczba << endl;
}