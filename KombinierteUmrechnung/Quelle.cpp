#include <iostream>
using namespace std;

double eingabe, ausgabe;
int auswahl;

int main()
{
	cout << "Ihre Eingabe: ? ";
	cin >> eingabe;
	cout << endl << "Ihre Auswahl der Umwandlung:" << endl << " 1 - Celsius in Fahrenheit" << endl << " 2 - Meter in Fuss" 
		<< endl << " 3 - Euro in US Dollar" << endl;
	cin >> auswahl;
	
	ausgabe = ((eingabe * 1.8 + 32)*(auswahl-2)*(auswahl-3)/2) + ((eingabe * 3.2808)*(auswahl - 1)*(auswahl - 3)*-1)
		+ ((eingabe * 1.2957)*(auswahl - 1)*(auswahl - 2)/2);

	cout << "Das Ergebnis lautet: " << ausgabe << endl << endl;

	system("PAUSE");
	return(0);
}