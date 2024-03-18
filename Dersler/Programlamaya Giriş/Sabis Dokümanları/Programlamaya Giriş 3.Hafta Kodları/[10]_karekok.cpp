//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Karekök Alma
//============================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi
#include <cmath>					// sqrt() - karekök alma fonksiyonu için

using namespace std;

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	double sayi, sonuc;				//sqrt() fonksiyonu double veri tipi alır.

	cout << "Bir sayi girin: ";
	cin >> sayi;					
	sonuc = sqrt(sayi);			//sayının karekökünü hesapla
	
	cout << sayi << " sayısının karekökü : " << sonuc << endl;          

	system("pause");  

	return 0;
}





