#include <iostream>
#include <string>

using namespace std;

bool podaj(string p)
{
	string a;
	cout << "Podaj pin: ";
	getline(cin, a);
	if (a == p)
		return true;
	return false;
}

int main()
{
	string pin = "1234";
	for (int i = 2; i >= 0; i--)
	{
		if (podaj(pin) == true)
		{
			cout << "\nJaka operacja" << endl;
			return 0;
		}
		if (i == 0)
		{
			break;
		}
		cout << "\nBlad pozostale proby: " << i << endl;
	}
	cout << "\nKarta zablokowana" << endl;
	return 0;
}