#include <iostream>
#include <string>
#include "texte.h"
using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil) {
	bool z = false;
	for (int i = 0; i < eingabe.length(); i++) {
		if (!z && eingabe.at(i) != zeichen) {
			erster_teil += eingabe.at(i);
		}
		else if (z) {
			zweiter_teil += eingabe.at(i);
		}
		else if (!z && eingabe.at(i) == zeichen) {
			z = true;
		}
	}
}

string trimme(string s) {
	int counter = 0;
	string ausgabe;
	bool keinplus = false;
	for (int i = s.length(); i > 0; i--) {
		if (s.at(i - 1) == ' ') {
			counter++;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < s.length() - counter; i++) {
		if (!(s.at(i) == ' ') || keinplus) {
			keinplus = true;
			ausgabe += s.at(i);
		}
	}
	return ausgabe;
}