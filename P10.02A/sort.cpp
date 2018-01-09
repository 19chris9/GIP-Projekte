#include "sort.h"

void sortiere(int *a, int N)
{
	int temp;
	int swap;
	do {
		swap = 0;
		for (int i = 0; i < N - 1; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				swap = 1;
			}
		}
	} while (swap);
}
