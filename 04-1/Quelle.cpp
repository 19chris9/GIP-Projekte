#include <iostream>
#include <string>
using namespace std;


int main()
{
	string eingabe;
	int length;
	string ausgabe;
	cout << "Bitte geben Sie die Zeichenkette ein: ";
	getline(cin, eingabe);
	length = eingabe.size();

	for (int i = length; i >= 1; i--) {
		ausgabe += eingabe.at(i-1);
	}

	cout << "Die umgekehrte Zeichenkette lautet: " << ausgabe << endl;


	system("PAUSE");
	return(0);
}