//=========================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//=========================================
// Değişken Kapsamları - static
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

float ortaAl(int sayi)
{
	static float toplam = 0;
	static int say = 0;

	say++;
	toplam += sayi;

	return toplam / say;
}

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	unsigned int sayi;
	float ort;

	cout << "Sayı........:";
	cin >> sayi;

	while (sayi != 0)
	{
		cout << "Ortalama" << ortaAl(sayi) << endl;
		cout << "Sayı........:";
		cin >> sayi;
	} 
	

	system("pause");

	return 0;
}


