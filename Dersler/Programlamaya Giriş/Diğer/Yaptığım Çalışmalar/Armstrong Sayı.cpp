// Armstrong sayıları bulan program.

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int x, y, z;

	for (int i = 100; i < 999; i++) {

		x = i % 10;
		y = (i % 100) / 10;
		z = i / 100;

		if ((x*x*x) + (y*y*y) + (z*z*z) == i) cout << i << endl;

	}

	system("PAUSE");
	return 0;

}