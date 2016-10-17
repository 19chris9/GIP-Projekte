#include <iostream>
using namespace std;

int gesamt, erster, zweiter, dritter;


int main()
{
	cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
	cin >> gesamt;
	cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
	cin >> erster;
	cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
	cin >> zweiter;
	dritter = gesamt - erster - zweiter;
	cout << "Auf den dritten Kandidaten sind somit " << dritter << " Stimmen entfallen." << endl;

	cout << "Kandidat 1 erhielt " << double(erster) / double(gesamt) * 100 << "% der Stimmen." << endl;
	cout << "Kandidat 2 erhielt " << double(zweiter) / double(gesamt) * 100 << "% der Stimmen." << endl;
	cout << "Kandidat 3 erhielt " << double(dritter) / double(gesamt) * 100 << "% der Stimmen." << endl;

	system("PAUSE");
	return(0);
}