// ESC tuşuna basılana kadar girilen değerlerin ortalamasını hesaplayan program.

#include <iostream>
#include <conio.h>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	int toplam = 0, sayac = 0, ort, g_sayi = 0, sayac2 = 0;

	while (1) {

		cout << "Pozitif bir tam sayi (En fazla 8 karakter) giriniz: ";

		unsigned int sayac = 0, ort;
		char sayi[8] = {};

		while (1) {

			char gecici = _getch();
			if (gecici == 27) { sayac = -1; break; }
			if (gecici == 13) { sayac2++; cout << endl; break; }
			if (sayac > 8) { cout << "\nDaha fazla rakam girilemez!\n"; sayac = 0; };
			if (isdigit(gecici)) { cout << gecici; sayi[sayac] = gecici; sayac++; }

		}

		if (sayac == -1) break;

		g_sayi += atol(sayi);

		sayac2 > 0 ? ort = (g_sayi / sayac2) : ort = 0;

		cout << "Ortalama: " << ort << endl;
		system("pause");
		system("cls");

	}

	system("PAUSE");

	return 0;

}