#include <iostream>
using namespace std;

int a;
char buchstabe;
int ausgabe;

int main()
{
	a = int('a') - 1;
	cout << "Bitte geben Sie den Buchstaben ein: ? ";
	cin >> buchstabe;
	ausgabe = int(buchstabe) - a;
	cout << "Der Buchstabe " << buchstabe << " hat die Position " << ausgabe << " im Alphabet." << endl;
	

	system("PAUSE");
	return(0);
}