#include <iostream>
using namespace std;

double celsius;

int main()
{
	cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
	cin >> celsius;
	cout << "Die Temperatur in Fahrenheit lautet: " << celsius * 1.8 + 32 << endl;


	system("PAUSE");
	return(0);
}