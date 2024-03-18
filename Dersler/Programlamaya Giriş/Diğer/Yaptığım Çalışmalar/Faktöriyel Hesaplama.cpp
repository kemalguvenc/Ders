// Girilen sayının faktöriyelini hesaplayan program.

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int x,y=1;

	cout << "Faktoriyeli alinacak sayiyi giriniz: ";
	cin >> x;

	for (; x > 0; x--) {

		y *= x;

	}

	cout << "Girdiginiz sayinin faktoriyeli: " << y << endl;

	system("PAUSE");
	return 0;

}