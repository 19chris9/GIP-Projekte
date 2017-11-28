#include <iostream>
#include <string>
using namespace std;

int main()
{
	int wert[5];
	for (int i = 1; i <= 5; i++) {
		int eingabe;
		do {
			cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe < 1 || eingabe > 9);
		wert[i - 1] = eingabe;
	}

	for (int i = 9; i >= 1; i--) {
		cout << i;
		for (int z = 1; z <= 5; z++) {
			if (wert[z - 1] == i) {
				cout << "*";
			}
			else if (wert[z - 1] < i) {
					cout << ".";
			}
			else {
				cout << "+";
			}
		}
		cout << endl;
	}
	cout << " 12345" << endl;

	system("PAUSE");
	return 0;
}