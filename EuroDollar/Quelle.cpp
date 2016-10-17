#include <iostream>
using namespace std;

double euro;

int main()
{
	cout << "Bitte geben Sie die Geldmenge in Euro ein: ? ";
	cin >> euro;
	cout << "Die Geldmenge in US Dollar lautet: " << euro * 1.2957 << endl;

	system("PAUSE");
	return(0);
}