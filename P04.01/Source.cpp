#include <iostream>
using namespace std;

int main()
{
	int anfang = 1, ende = 100;
	char eingabe;
	cout << "Merken Sie sich eine Zahl zwischen 1 und 100 (inkl.)" << endl << endl;
	while (true) {
		cout << "Aktueller Ratebereich: " << anfang << " bis " << ende << endl << "Ist " << (anfang + ende) / 2 << " ihre Zahl?" << endl;
		cout << "(j) ja: gleich," << endl << "(k) nein: meine Zahl ist kleiner," << endl << "(g) nein: meine Zahl ist groesser." << endl;
		cin >> eingabe;
		if (eingabe == 'j')
			break;
		else if (eingabe == 'k') {
			ende = (anfang + ende) / 2;
		}
		else {
			anfang = (anfang + ende) / 2;
		}
	}
	system("PAUSE");
	return 0;
}