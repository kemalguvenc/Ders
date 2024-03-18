//=========================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//=========================================
// Değişken Döndürme 
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

void degistir (int, int);
int x=10, y=5;
int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	cout << "x = " << x << " y = " << y << endl;  
	swap (x,y);
	cout << "x = " << x << " y = " << y << endl;

	system("pause");

	return 0;
}

void degistir (int ilk, int ikinci)
{
	x=ilk;
	y=ikinci;
}


