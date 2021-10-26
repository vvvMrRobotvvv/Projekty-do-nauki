#include <iostream>

using namespace std;

int main()
{
	for (;;)
	{
		int a, wykladnik;
		cin >> a;
		if (a == 0)
		{
			return 0;
		}
		else
		{
			cin >> wykladnik;
			int b = a;
			wykladnik--;
			for (int i = 0; i < wykladnik; i++)
			{
				a *= b;
			}

			cout << a << endl;
		}
	}
}