#include <iostream>
using namespace std;

void domino();
void verbrauch();


int main()
{
	domino();
	verbrauch();

	system("PAUSE");
	return(0);
}


void domino()
{
	for (int s = 0; s <= 6; s++)
	{
		for (int i = s; i <= 6; i++)
		{
			cout << "+---+---+ ";
		}
		cout << endl;
		for (int i = s; i <= 6; i++)
		{
			cout << "| " << s << " | " << i << " | ";
		}
		cout << endl;
		for (int i = s; i <= 6; i++)
		{
			cout << "+---+---+ ";
		}
		cout << endl;
	}
}

void verbrauch()
{
	double tempaktuell = 0, aktuell = 0, vorher = 0, vorvorher = 0, gesamt = 0;

	while (true)
	{
		do {
			cout << "Bitte geben Sie den neuen letzten Verbrauchswert ein: ";
			cin >> tempaktuell;
		} while (tempaktuell < 0);
		if (int(tempaktuell) == 99) {
		break;
		}
		vorvorher = vorher;
		vorher = aktuell;
		aktuell = tempaktuell;
		gesamt += aktuell;
		cout << "Der bisherige Gesamtverbrauch betraegt " << gesamt << endl;

		cout << "Der Durchschnitt der letzten drei Verbrauchswerte betraegt " << (aktuell + vorher + vorvorher) / 3 << endl;
	}
}