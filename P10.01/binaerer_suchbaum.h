#pragma once

namespace suchbaum
{
	struct BaumKnoten {
		BaumKnoten *kindKnotenL, *kindKnotenR;
		int data;
	};
	void einfuegen(BaumKnoten *&anker, int wert);
	void ausgeben(BaumKnoten *anker);
	void knoten_ausgeben(BaumKnoten* knoten, int tiefe);
}