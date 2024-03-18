#include "pch.h"
#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	int a[10] = { 5,3,62,623,5,56,1,24,7,4 }, deger1, deger2;

	for (int i = 0; i < 10; i++) {

		deger1 = a[i];

		for (int j = i; j < 10; j++) {

			if (deger1 >= a[j]) { deger1 = a[j]; deger2 = j; }

		}

		int gecici;

		gecici = a[i];
		a[i] = a[deger2];
		a[deger2] = gecici;

	}

	for (int i = 0; i < 10; i++) cout << a[i] << endl;


	system("PAUSE");
	return 0;
}