//=========================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//=========================================
// Fonksiyonlar - Parametre Gönderme 
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

void ciz(char, int);
void ciz();

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	ciz();								//fonksiyon çağırma
	cout << "Veri Tipi       Aralik" << endl;
	ciz('-',50);                       //fonksiyon çağırma
	cout << "char        -128 to 127" << endl
        << "short       -32,768 to 32,767" << endl
        << "int         Sisteme bağlı" << endl
        << "long        -2,147,483,648 to 2,147,483,647" << endl;
	ciz('-', 50);
   
	system("pause");

	return 0;
}


void ciz(char ch, int n)
{
   for(int j=0; j<n; j++)               
      cout << ch;
   cout << endl;
}

void ciz()
{
   for(int j=0; j<45; j++)               
      cout << '*';
   cout << endl;
}



