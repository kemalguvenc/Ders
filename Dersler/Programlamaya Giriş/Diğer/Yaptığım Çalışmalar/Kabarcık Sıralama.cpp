#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	int a[10] = { 5,3,62,623,5,56,1,24,7,4 };

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 9; j++) {

			int gecici;

			if (a[j] > a[j + 1]) {

				gecici = a[j];
				a[j] = a[j + 1];
				a[j + 1] = gecici;

			}

		}

	}

	for (int i = 0; i < 9; i++) cout << a[i] << endl;


	system("PAUSE");
	return 0;
}