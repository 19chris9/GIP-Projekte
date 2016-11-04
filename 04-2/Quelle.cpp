#include <iostream>
using namespace std;



int main()
{
	int breite;
	int hoehe;
	int zaehler = 1;
	int count = 0;
	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ";
	cin >> breite;
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ";
	cin >> hoehe;

	for (int i = breite; i >= 1; i--) {
		cout << "*";
	}
	for (int i = hoehe - 2; i >= 1; i--) {
		cout << endl;
		while (zaehler >= 1) {
			cout << ".";
			zaehler--;
			count++;
		}
		zaehler = count + 1;
		count = 0;
		cout << "*";
		for (int i = (breite - 2); i >= 1; i--) {
			cout << "+";
		}
		cout << "*";
	}
	cout << endl;
	for (int i = hoehe - 1; i >= 1; i--) {
		cout << ".";
	}
	for (int i = breite; i >= 1; i--) {
		cout << "*";
	}


	cout << endl << endl;
	system("PAUSE");
	return(0);
}