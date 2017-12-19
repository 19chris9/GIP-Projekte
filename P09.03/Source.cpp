#include <iostream>
#include <string>
using namespace std;

int zeichenkette_suchen(char* text, char* zkette)
{
	int counter;
	bool enthalten = false;
	for (int i = 0; i < 20; i++)
	{
		if (enthalten == true || text[i] == '\0')
			break;
		if (text[i] == zkette[0])
		{
			counter = i;
			for (int z = 0; z < 20; z++)
			{
				if (zkette[z] == '\0')
				{
					enthalten = true;
					break;
				}
				if (text[i + z] != zkette[z])
					break;
			}
		}
	}
	if (enthalten != true)
		return -1;
	else
		return counter;
}

int main()
{
	string text, zeichenkette;
	char *c1, *c2;
	cout << "Bitte geben Sie den Text ein: ";
	getline(cin, text);
	cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
	getline(cin, zeichenkette);
	c1 = &text[0];
	c2 = &zeichenkette[0];
	int counter = zeichenkette_suchen(c1, c2);

	if (counter == -1)
		cout << "Die Zeichenkette '" << zeichenkette << "' ist NICHT in dem Text '" << text << "' enthalten." << endl;
	else
		cout << "Die Zeichenkette '" << zeichenkette << "' ist in dem Text '" << text << "' enthalten." << endl << "Sie startet ab Zeichen " << counter << " (bei Zaehlung ab 0)." << endl;

	system("PAUSE");
	return 0;
}