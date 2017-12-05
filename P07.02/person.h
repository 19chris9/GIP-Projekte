#pragma once
#include <string>
using namespace std;

struct Person {
	string vorname, nachname, geburtsdatum;
};

Person extrahiere_person(string eingabezeile);