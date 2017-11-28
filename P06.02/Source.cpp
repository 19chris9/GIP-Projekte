#include <iostream>
#include <string>
#include "wortspiegel.h"
using namespace std;


int main()
{
	int counter = 0;
	string eingabe;
	char befehl;
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, eingabe);

	while (true) {
		cout << endl;
		cout << eingabe << endl;
		for (int i = 0; i <= counter; i++) {
			if (i == counter) {
				cout << "*" << endl;
			}
			else {
				cout << " ";
			}
		}
		cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
		cin >> befehl;
		if (befehl == 'l' && counter != 0) {
			counter--;
		}
		else if (befehl == 'r' && counter != eingabe.length() - 1) {
			counter++;
		}
		else if (befehl == 'q') {
			cout << endl;
			break;
		}
		else {
			wortspiegel(eingabe, counter);
		}

	}

	system("PAUSE");
	return 0;

}