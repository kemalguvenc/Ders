//=========================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//=========================================
// Özyinelemeli Fonksiyonlar
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

unsigned int rec_faktoriyel(unsigned int);

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	unsigned int sayi;

	cout << "Sayı........:";
	cin >> sayi;

	cout << "[REKÜRSİF]...." << sayi << "! = " << rec_faktoriyel(sayi) << endl;

	system("pause");

	return 0;
}

unsigned int rec_faktoriyel(unsigned int n)
{
	if (n == 1)
		return 1;
	else
		return rec_faktoriyel(n - 1)*n;
}
