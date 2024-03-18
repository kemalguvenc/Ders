//=========================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//=========================================
// Değişken Kapsamları
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

int x = 4, y = 5;				// Global Değişkenler
float c;
char ch;


int f1(int a, int b)
{
	int x = 3;					// f1'in yerel x değişkeni
	int y;
}

void f2()
{
	int x = 4;					// f2'nin yerel x değişkeni
	static int y = 2;			// f2'nin statik değişkeni
}

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	int x = 5;					// main fonksiyonunun yerel x değişkeni
	y = 10;

	system("pause");

	return 0;
}


