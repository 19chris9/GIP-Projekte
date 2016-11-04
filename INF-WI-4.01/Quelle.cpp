#include <iostream>
#include <string>
using namespace std;




int main()
{
	string text;
	int v;

	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, text);
	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	int textlaenge = text.length();
	string ausgabe;
	while (v > 25) {
		v -= 26;
	}
	for (int i = 0; i < textlaenge; i++) {
		if (int(text.at(i)) >= 97 && int(text.at(i)) <= 122) {
			if (int(text.at(i)) + v <= 122) {
				ausgabe += char(int(text.at(i) + v));
			}
			else {
				ausgabe += char(int(text.at(i)) + v - 26);
			}
		}
		else if (int(text.at(i)) >= 65 && int(text.at(i)) <= 90) {
			if (int(text.at(i)) + v <= 90) {
				ausgabe += char(int(text.at(i) + v));
			}
			else {
				ausgabe += char(int(text.at(i)) + v - 26);
			}
		}
		else {
			ausgabe += text.at(i);
		}

	}
	cout << ausgabe << endl;

	system("PAUSE");
	return(0);
}