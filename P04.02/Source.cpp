#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe, ausgabe = "";
	int v = 0;
	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	for (int i = 0; i < eingabe.length(); i++) {
		if (eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z') {
			eingabe.at(i) = eingabe.at(i) + v;
			while (!(eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z')) {
				eingabe.at(i) = eingabe.at(i) - 26;
			}
		}
		if (eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z') {
			eingabe.at(i) = eingabe.at(i) + v;
			while (!(eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')) {
				eingabe.at(i) = eingabe.at(i) - 26;
			}
		}
	}
	cout << eingabe << endl;

	system("PAUSE");
	return 0;
}