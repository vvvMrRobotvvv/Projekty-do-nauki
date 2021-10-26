#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	for(;;)
	{
		srand(time(0));
		char znak;
		znak = getch();
		if (znak != 0)
		{
			int liczba;
			switch (liczba)
			{
			case 2: //razy 2
				char znak2;
				liczba = (rand() % 9) + 2;
				switch (liczba)
				{
				case 2:
					
						cout << "\n\t2 * 2 = ";
						znak2 = getch();
						if (znak2 != 0)
						{

						}
						break;
					
				case 3:
					/* code */
					break;
				case 4:
					/* code */
					break;
				case 5:
					/* code */
					break;
				case 6:
					/* code */
					break;
				case 7:
					/* code */
					break;
				case 8:
					/* code */
					break;
				case 9:
					/* code */
					break;
				}
				break;
			case 3: //razy 3
				/* code */
				break;
			case 4: //razy 4
				/* code */
				break;
			case 5: //razy 5
				/* code */
				break;
			case 6: //razy 6
				/* code */
				break;
			case 7: //razy 7
				/* code */
				break;
			case 8: //razy 8
				/* code */
				break;
			case 9: //razy 9
				/* code */
				break;
			default:
				break;
			}
		}	
	}
}