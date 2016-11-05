#include <iostream>
#include <string>
using namespace std;

void a1();

int main()
{
	a1();

	system("PAUSE");
	return(0);
}


void a1()
{
	string text, zeichen;
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text);
	cout << "Bitte geben Sie die zu zaehlenden Zeichen ein: ? ";
	getline(cin, zeichen);

	for (int i = 0; i < zeichen.length(); i++)
	{
		int anzahl = 0;
		for (int z = 0; z < text.length(); z++)
		{
			if (text.at(z) == zeichen.at(i))
				anzahl++;
		}
		cout << "Das Zeichen " << zeichen.at(i) << " kommt " << anzahl << " mal in dem Text vor." << endl;
	}
}