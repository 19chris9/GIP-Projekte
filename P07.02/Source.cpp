#include <iostream>
#include <string>
#include <fstream>
#include "person.h"
using namespace std;

string br(string s)
{
	string ausgabe = s + "<br/>";
	return ausgabe;
}
string b(string s)
{
	string ausgabe = "<b>" + s + "</b>";
	return ausgabe;
}
string ersetze(string zeile, char zu_ersetzendes_zeichen, string ersatztext)
{
	string ausgabe;
	for (int i = 0; i < zeile.length(); i++) {
		if (zeile.at(i) != zu_ersetzendes_zeichen)
			ausgabe += zeile.at(i);
		else
			ausgabe += ersatztext;
	}
	return ausgabe;
}


int main()
{
	string eingabezeile, kurztext, langtext;
	fstream text("personendaten.txt", ios::in);
	while (getline(text, eingabezeile)) {
		Person person = extrahiere_person(eingabezeile);
		kurztext += br(b(person.nachname) + ", " + person.vorname) + "\n";
		langtext += br(	b(person.vorname + " " + person.nachname) + ", " +	person.geburtsdatum) + "\n";

	}
	text.close();

	fstream tmpl("webseite.html.tmpl", ios::in);
	fstream webseite("webseite.html", ios::out);
	while (getline(tmpl, eingabezeile)) {
		eingabezeile = ersetze(eingabezeile, '%', kurztext);
		eingabezeile = ersetze(eingabezeile, '$', langtext);
		webseite << eingabezeile + "\n";
	}
	tmpl.close();
	webseite.close();

	return 0;
}