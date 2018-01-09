#include <iostream>
#include "binaerer_suchbaum.h"
using namespace std;
using namespace suchbaum;

int main()
{
	BaumKnoten *anker = nullptr;
	int eingabe;
	do {
		cout << "Naechster Wert (99 beendet): ? ";
		cin >> eingabe;
		if (eingabe != 99)
			einfuegen(anker, eingabe);
	} while (eingabe != 99);
	
	if (anker == nullptr)
		cout << "Leerer Baum." << endl;
	else
		ausgeben(anker);
	system("PAUSE");
	return 0;
}