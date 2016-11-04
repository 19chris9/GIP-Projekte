#include <iostream>
#include <string>
using namespace std;

void a1();
void a2();
void a3();
void a4();

int main()
{	
	//a1();
	//a2();
	//a3();
	//a4();

	system("PAUSE");
	return(0);
}


void a1()
{
	int a[9];

	for (int i = 1; i <= 9; i++)
	{
		int eingabe;
		do {
			cout << "Bitte geben Sie die " << i << "-te Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe > 6 || eingabe < 1);
		a[i - 1] = eingabe;
	}
	for (int i = 1; i <= 9; i++)
	{
		cout << "Die " << i << "-te eingegebene Zahl lautete: " << a[i - 1] << endl;
	}
}

void a2()
{
	int a[9];
	int b[6] = { 0 };
	for (int i = 1; i <= 9; i++)
	{
		int eingabe;
		do {
			cout << "Bitte geben Sie die " << i << "-te Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe > 6 || eingabe < 1);
		a[i - 1] = eingabe;
	}
	for (int i = 1; i <= 9; i++)
	{
		switch (a[i - 1]) {
		case 1:
			b[0]++;
			break;
		case 2:
			b[1]++;
			break;
		case 3:
			b[2]++;
			break;
		case 4:
			b[3]++;
			break;
		case 5:
			b[4]++;
			break;
		case 6:
			b[5]++;
			break;
		}
	}
	for (int i = 1; i <= 6; i++)
	{
		cout << "Die Zahl " << i << " wurde " << b[i - 1] << " mal eingegeben." << endl;
	}
}

void a3()
{
	int a[9], unterschiedlich = 0;

	for (int i = 1; i <= 9; i++)
	{
		int eingabe;
		do {
			cout << "Bitte geben Sie die " << i << "-te Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe > 6 || eingabe < 1);
		a[i - 1] = eingabe;
	}
	for (int i = 1; i <= 6; i++)
	{
		for (int z = 1; z <= 9; z++)
		{
			if (a[z - 1] == i) {
				unterschiedlich++;
				z = 10;
			} 
		}
	}
	cout << "In der Eingabe kamen " << unterschiedlich << " unterschiedliche Zahlen vor." << endl;
}

void a4()
{
	string eingabe;
	int ausgabe = 0;
	cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
	cin >> eingabe;

	if (eingabe == "ende")
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	}
	else {
		int temp = 0;
		while (temp < eingabe.length()) {
			int i = (int(eingabe.at(temp)) - int('0')) * 2;
			for (int z = 1; z < eingabe.length() - temp; z++) {
				i *= 10;
			}
			ausgabe += i;
			temp++;
		}
		cout << "Der doppelte Wert betraegt: " << ausgabe << endl;
	}
}