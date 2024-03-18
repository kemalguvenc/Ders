// Asal sayıları bulan program.

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int kontrol_sayac;

	for (int x = 2; x < 500; x++) {

		kontrol_sayac = 0;

		for (int y = 2; y < (x/2); y++) { 
			
			if (x%y == 0) { kontrol_sayac++; break; }
			
		}

		if (kontrol_sayac == 0) cout << x << endl;

	}

	system("PAUSE");
	return 0;

}