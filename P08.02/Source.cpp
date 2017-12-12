#include <iostream>
#include <string>
using namespace std;

int** erstelleSudoku()
{
	int** tsudoku = new int*[9];
	for (int i = 0; i < 9; ++i)
	{
		tsudoku[i] = new int[9];
	}
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
				tsudoku[x][y] = eingabe[i].at(z) - '0';
				y++;
			}
		}
	}
	/*cout << "Das Sudoku lautet:" << endl;
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
	}*/
	return tsudoku;
}

void pruefeSudoku(int **sudoku) 
{
	int counter1 = 0, counter2 = 0, yglobal = 0;
	bool fehler = false;

	for (int x = 0; x < 9; x++) {
		for (int i = 1; i <= 9; i++) {
			for (int y = 0; y < 9; y++) {
				if (sudoku[x][y] == i)
					counter1++;
			}
			if (counter1 == 0) {
				cout << "Zeile " << x << ": Zahl " << i << " kommt nicht vor." << endl;
				fehler = true;
			}
			else if (counter1 > 1) {
				cout << "Zeile " << x << ": Zahl " << i << " kommt mehrfach vor." << endl;
				fehler = true;
			}
			counter1 = 0;


		}
	}
	for (int x = 0; x < 9; x++) {
		for (int i = 1; i <= 9; i++) {
			for (int y = 0; y < 9; y++) {
				if (sudoku[y][x] == i)
					counter1++;
			}
			if (counter1 == 0) {
				cout << "Spalte " << x << ": Zahl " << i << " kommt nicht vor." << endl;
				fehler = true;
			}
			else if (counter1 > 1) {
				cout << "Spalte " << x << ": Zahl " << i << " kommt mehrfach vor." << endl;
				fehler = true;
			}
			counter1 = 0;


		}
	}

	int temparray[9] = { 0 };
	int counter3 = 0;
	for (int i = 0, z = 0; i <= 8; i++) {
		for (int x = 0; x <= 8; x++) {
			for (int y = 0; y <= 8; y++) {
				if (x >= i / 3 * 3 && x <= i / 3 * 3 + 2 && y >= i % 3 * 3 && y <= i % 3 * 3 + 2) {
					temparray[z] = sudoku[x][y];
					z++;
				}
			}
		}
		for (int b = 1; b <= 9; b++) {
			for (int bz = 0; bz <= 8; bz++) {
				if (temparray[bz] == b)
					counter3++;
			}
			if (counter3 == 0) {
				cout << "Block " << i << ": Zahl " << b << " kommt nicht vor." << endl;
				fehler = true;
			}
			else if (counter3 > 1) {
				cout << "Block " << i << ": Zahl " << b << " kommt mehrfach vor." << endl;
				fehler = true;
			}
			counter3 = 0;
		}
		z = 0;
	}
	if (!fehler) {
		cout << "Das Sudoku ist gueltig." << endl;
	}
}

int main()
{

	int **sudoku = erstelleSudoku();
	pruefeSudoku(sudoku);

	for (int i = 0; i < 9; i++)
	{
		delete[] sudoku[i];
	}
	delete[] sudoku;
	sudoku = 0;

	system("PAUSE");
	return 0;
}