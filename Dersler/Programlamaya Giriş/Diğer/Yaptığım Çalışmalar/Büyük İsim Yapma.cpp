// Girilen ismin bütün harflerini büyük yapan program.

#include <iostream>
#include <clocale>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	char isim[50];

	cout << "İsminizi giriniz: ";
	cin.get(isim, 50);

	for (int i = 0; i < 50; i++) {

		if (isim[i] == '\0') break;

		if (islower(isim[i])) isim[i] = toupper(isim[i]);

	}

	cout << isim << endl;

	system("PAUSE");
	return 0;

}