#include <iostream>
#include <string>
using namespace std;




int main()
{
	int stunde, minute, takt;
	do {
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> stunde;
	} while (stunde >= 24 || stunde < 0);
	do {
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> minute;
	} while (minute >= 60 || minute < 0);

	cout << "Der erste Bus faehrt also um " << stunde << ":" << minute << " Uhr." << endl;

	do {
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
    	cin >> takt;
	} while (takt > 180 || takt < 0);

	cout << stunde << ":" << minute;
	int tempstunde = stunde;
	while (true) {
		minute += takt;
		while (minute >= 60) {
			minute -= 60;
			tempstunde++;
		}

	    if (tempstunde >= 24) {
			cout << endl;
			break;
		}
		else if (tempstunde > stunde) {
			cout << endl;
			stunde = tempstunde;
			cout << stunde << ":" << minute;
		}
		else
		cout << " " << stunde << ":" << minute;

	}
		
		

	system("PAUSE");
	return(0);
}