#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sudoku[9][9] = { 0 };
	string eingabe[11];

	cout << "Bitte geben Sie das Sudoku ein:" << endl;
	for (int i = 0; i < 11; i++) {
		getline(cin, eingabe[i]);
	}

	for (int i = 0, x = 0, y = 0; i < 11; i++) {
		for (int z = 0; z < eingabe[i].length(); z++) {
			if (y == 9) {
				x++;
				y = 0;
			}
			if (eingabe[i].at(z) == '-') {
				break;
			}
			if (eingabe[i].at(z) >= '0' && eingabe[i].at(z) <= '9') {
				sudoku[x][y] = eingabe[i].at(z) - '0';
				y++;
			}
		}
	}
	cout << "Das Sudoku lautet:" << endl;
	for (int i = 0; i < 9; i++) {
		for (int z = 0; z < 9; z++) {
			cout << ";" << sudoku[i][z];
			if (z == 2 || z == 5) {
				cout << ";//";
			}
		}
		cout << endl;
		if (i == 2 || i == 5) {
			cout << "=======//=======//=======" << endl;
		}
	}

	system("PAUSE");
	return 0;
}