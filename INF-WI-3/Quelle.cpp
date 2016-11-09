#include <iostream>
using namespace std;

int tag1, tag2, monat1, monat2, jahr1, jahr2;
void a1();
void a2();

int main()
{
	//a1();
	a2();

	system("PAUSE");
	return(0);
}

void a1()
{
	cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	cin >> tag1;
	cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	cin >> monat1;
	cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	cin >> jahr1;
	cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	cin >> tag2;
	cout << "Bitte geben Sie den Monat des zweiten Datums ein:";
	cin >> monat2;
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein:";
	cin >> jahr2;

	if (jahr1 == jahr2 && monat1 == monat2 && tag1 == tag2) {
		cout << "Beide Datumsangaben sind gleich." << endl;
	}
	else if (jahr1 < jahr2 || (jahr1 == jahr2 && monat1 < monat2) || jahr1 < jahr2 && monat1 == monat2 && tag1 < tag2) {
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
	}
	else {
		cout << "Das erste Datum liegt nach dem zweiten Datum." << endl;
	}
}

void a2()
{
	int klein, gross, indexk, indexg;
	for (int i = 1; i <= 5; i++) {
		int eingabe;
		cout << "Bitte geben Sie die " << i << ". Zahl ein: ";
		cin >> eingabe;
		if (i == 1) {
			gross = eingabe;
			klein = eingabe;
			indexk = i;
			indexg = i;
		}
		else if (eingabe > gross) {
			gross = eingabe; 
			indexg = i;
		}
		else if (eingabe < klein) {
			klein = eingabe; 
			indexk = i;
		}
	}
	cout << "Die " << indexk << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << klein << endl;
	cout << "Die " << indexg << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << gross << endl;
}