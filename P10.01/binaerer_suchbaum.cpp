#pragma once
#include <iostream>
#include "binaerer_suchbaum.h"
using namespace std;

void suchbaum::knoten_ausgeben(BaumKnoten* knoten, int tiefe)
{
	if (knoten == nullptr)
		return;
	knoten_ausgeben(knoten->kindKnotenR, tiefe + 1);
	for (int i = 1; i <= tiefe; i++)
		cout << "++";
	cout << knoten->data << endl;
	knoten_ausgeben(knoten->kindKnotenL, tiefe + 1);
}

void suchbaum::ausgeben(BaumKnoten * anker)
{
	knoten_ausgeben(anker, 0);
}

void suchbaum::einfuegen(BaumKnoten *&anker, int wert)
{
	BaumKnoten *tmp = anker;
	bool stop = false;

	while (!stop) {
		if (anker == nullptr)
			stop = true;
		else if (wert < tmp->data) {
			if (tmp->kindKnotenL != nullptr)
				tmp = tmp->kindKnotenL;
			else
				stop = true;
		}
		else if (wert > tmp->data) {
			if (tmp->kindKnotenR != nullptr)
				tmp = tmp->kindKnotenR;
			else
				stop = true;
		}
		else
			stop = true;
	}
	if (anker == nullptr) {
		BaumKnoten *neuerEintrag = new BaumKnoten;
		neuerEintrag->kindKnotenL = nullptr;
		neuerEintrag->kindKnotenR = nullptr;
		neuerEintrag->data = wert;
		anker = neuerEintrag;
	}
	else if (wert != tmp->data) {
		BaumKnoten *neuerEintrag = new BaumKnoten;
		neuerEintrag->kindKnotenL = nullptr;
		neuerEintrag->kindKnotenR = nullptr;
		neuerEintrag->data = wert;
		if (wert < tmp->data)
			tmp->kindKnotenL = neuerEintrag;
		else
			tmp->kindKnotenR = neuerEintrag;
	}
}
