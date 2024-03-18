//=========================================
// Adı				: Programlamaya Giriş 
// Yazar			: Gülüzar ÇİT
// Versiyon			: 1.0
// Telif Hakkı		: @Copyright 2018
//=========================================
// Sınıf ve Nesne 
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

#include "KarmasikSayi.h"

using namespace std;

int main()
{
	KarmasikSayi sayilar[5];

	sayilar[0].kartezyenGoster();

	for (int i = 0; i < 5; i++)
		sayilar[i].bilgiGir();


	for (int i = 0; i < 5; i++)
		sayilar[i].kartezyenGoster();

	system("pause");
	return 0;
}



