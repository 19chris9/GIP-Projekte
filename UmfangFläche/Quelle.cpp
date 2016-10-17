#include <iostream>
using namespace std;
double a;


int main()
{
	cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
	cin >> a;
	cout << "Der Umfang des Quadrats betraegt (in cm): " << a * 4 << endl;
	cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << a * a << endl;

	system("PAUSE");
	return(0);
	
}