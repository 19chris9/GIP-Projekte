#include <iostream>
using namespace std;

void a01();
void a02();
void a03();

int main()
{
	//a01();
	//a02();
	a03();

	system("PAUSE");
	return(0);
}


void a01()
{
	char eingabe;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> eingabe;

	if (int(eingabe) >= int('a') && int(eingabe) <= int('z'))
	{
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
	}
	else
		cout << "KEIN Kleinbuchstabe (a-z)." << endl;
}

void a02()
{
	char eingabe;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> eingabe;

	if (int(eingabe) == 101)
		cout << "Das Programm beendet sich jetzt." << endl;
	else if (int(eingabe) >= int('0') && int(eingabe) <= int('9'))
		cout << eingabe << " + 5 = " << int(eingabe) + 5 - int('0') << endl;
	else
		cout << "Weder 'e' noch Ziffer." << endl;
}

void a03()
{
	int eingabe;
	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> eingabe;
	switch (eingabe)
	{
	case 23: case 0: case 1: case 2: case 3: case 4: case 5:{
		cout << "Gute Nacht." << endl;
		break;
	}
	case 6: case 7: case 8: case 9: case 10:{
		cout << "Guten Morgen." << endl;
		break;
	}
	case 11: case 12: case 13:{
		cout << "Mahlzeit." << endl;
		break;
	}
	case 14: case 15: case 16: case 17: {
		cout << "Guten Tag." << endl;
		break;
	}
	case 18: case 19: case 20: case 21: case 22:{
		cout << "Guten Abend." << endl;
		break;
	}
	default:{
		cout << "Keine erlaubte Stundenangabe." << endl;
		break;
	}
	}
}
