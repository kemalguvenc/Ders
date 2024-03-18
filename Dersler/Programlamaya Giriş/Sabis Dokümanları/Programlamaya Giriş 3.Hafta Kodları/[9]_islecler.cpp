//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Aritmetik Atama İşlemleri
//============================================

#include <iostream>
#include<locale.h>					// Diller ve karakter setleri kütüphanesi
using namespace std;

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");
	int sayi = 27;

	sayi += 10;							// a = a + 10;
	sayi -= 7;							// a = a - 7;
	sayi *= 2;							// a = a * 2;
	sayi /= 3;							// a = a / 3;
	sayi %= 3;							// a = a % 3;
	cout << sayi << endl;

	sayi = 10;

	cout << "Sayı =" << sayi << endl;		// 10
	cout << "Sayı =" << ++sayi << endl;		// 11 (önceden arttırma)
	cout << "Sayı =" << sayi << endl;		// 11
	cout << "Sayı =" << sayi++ << endl;		// 11 (sonradan arttırma)
	cout << "Sayı =" << sayi << endl;		// 12

	system("pause");  //display answer

	return 0;
}





