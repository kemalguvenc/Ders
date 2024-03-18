//=========================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//=========================================
// Parametre Gönderme - Yapı Kullanımı 
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

struct olcu {
	int mt;
	int cm;
};

void olcuGoster(olcu);

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	olcu d1, d2;            

	cout << "uzunluk(metre) giriniz: ";
	cin >> d1.mt;
	cout << "uzunluk(cmetre) giriniz:: ";
	cin >> d1.cm;

	olcuGoster(d1);

	system("pause");

	return 0;
}

void olcuGoster(olcu a)    
{
	cout << a.mt << " m, " << a.cm << " cm \n";
}



