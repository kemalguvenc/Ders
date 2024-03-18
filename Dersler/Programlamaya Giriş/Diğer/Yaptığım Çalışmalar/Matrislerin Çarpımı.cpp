#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	int a[2][2] = { {1,3}, {0,2} }, b[2][2] = { {0,1}, {3,4} }, c[2][2];



	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {

			int deger1 = 0;

			for (int k = 0; k < 2; k++) {

				int deger2;

				deger2 = a[i][k] * b[k][j];

				deger1 += deger2;

			}

			c[i][j] = deger1;
			cout << "c[" << i << "][ " << j << "]: " << c[i][j] << endl;

		}

	}



	system("PAUSE");
	return 0;

}