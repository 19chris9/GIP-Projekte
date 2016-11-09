#include <iostream>
#include <string>
using namespace std;

// ... (ihre Funktion) ...
string ersetze(string zeile, char zu_ersetzendes_zeichen, string ersatztext)
{
	string ausgabe;
	for (int i = 0; i < zeile.length(); i++) {
		if (zeile.at(i) == zu_ersetzendes_zeichen) {
			ausgabe += ersatztext;
		}
		else
			ausgabe += zeile.at(i);
	}
	return ausgabe;
}


int main()
{
	string s1 = "", s2 = "";
	char c;
	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s1);
	cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
	getline(cin, s2);
	cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
	cin >> c;
	cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;


	system("PAUSE");
}