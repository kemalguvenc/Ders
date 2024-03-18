// 5.8 - Kullanıcıdan 2 değer alan ve bu değerler arasında yer alan tüm mükemmel sayıları ekranda gösteren programı yazınız.
// (Mükemmel sayı : kendisi hariç pozitif tam bölenlerinin toplamı kendine eşit olan sayıdır.)

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int x, y, bolen_sayisi_toplami, sayac = 1;

	cout << "Iki sayi giriniz:\nBirincisi: ";
	cin >> x;
	cout << "Ikincisi: ";
	cin >> y;

	for (; x < y; x++) {

		bolen_sayisi_toplami = 0;

		for (int i = 1; i < x; i++) if (x%i == 0) bolen_sayisi_toplami += i;

		if (bolen_sayisi_toplami == x) {
		
			cout << sayac << ". mukemmel sayi: " << x << endl;
			sayac++;

		}

	}

	system("PAUSE");
	return 0;
}