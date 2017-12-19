#include <iostream>
using namespace std;
struct TListenKnoten
{
	int data;
	TListenKnoten *next, *prev;
};
void hinten_anfuegen(TListenKnoten *&anker, const int wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	if (anker == nullptr) {
		anker = neuer_eintrag;
		anker->prev = nullptr;
	}
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr)
			ptr = ptr->next;
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;
		//ptr->next->prev = ptr;
	}
}
void liste_ausgeben(TListenKnoten * anker)
{
	if (anker == nullptr)
		cout << "Leere Liste." << endl;
	else
	{
		cout << "[ ";
		TListenKnoten *ptr = anker;
		do
		{
			cout << ptr->data;
			if (ptr->next != nullptr) cout << " , ";
			else cout << " ";
			ptr = ptr->next;
		} while (ptr != nullptr);
		cout << "]" << endl;
	}
}

void liste_ausgeben_rueckwaerts(TListenKnoten * anker)
{
	if (anker == nullptr)
		cout << "Leere Liste." << endl;
	else {
		cout << "[ ";
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr)
			ptr = ptr->next;
		do {
			cout << ptr->data;
			if (ptr->prev != nullptr)
				cout << " , ";
			else
				cout << " ";
			ptr = ptr->prev;
		} while (ptr != nullptr);
		cout << "]" << endl;
	}
}

void einfuegen(TListenKnoten* &anker, int wert_neu, int vor_wert)
{
	TListenKnoten *neuerEintrag = new TListenKnoten;
	neuerEintrag->data = wert_neu;
	neuerEintrag->next = nullptr;
	neuerEintrag->prev = nullptr;

	TListenKnoten *ptr = anker;
	if (anker == nullptr) 
		anker = neuerEintrag;
	else
	{
		while (ptr->next != nullptr)
			if (ptr->data != vor_wert)
			{
				ptr = ptr->next;
			}	else break;
		if (ptr->next == nullptr && ptr->data != vor_wert) {
			ptr->next = neuerEintrag;
			neuerEintrag->prev = ptr;
		} 
		else if (ptr->prev == nullptr)
		{
			ptr->prev = neuerEintrag;
			neuerEintrag->next = ptr;
			anker = ptr->prev;
		}
		else
		{
			neuerEintrag->prev = ptr->prev;
			neuerEintrag->next = ptr;
			ptr->prev->next = neuerEintrag;
			ptr->prev = neuerEintrag;
		}
	}
	
}

int main()
{
	const int laenge = 10;
	TListenKnoten *anker = nullptr;
	for (int i = 0; i < laenge; i++)
		einfuegen(anker, i*i, 9999);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
	int wert_neu, vor_wert;
	cout << "Einzufuegender Wert: "; cin >> wert_neu;
	cout << "Vor welchem Wert? "; cin >> vor_wert;
	einfuegen(anker, wert_neu, vor_wert);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
	system("PAUSE");
	return 0;
}