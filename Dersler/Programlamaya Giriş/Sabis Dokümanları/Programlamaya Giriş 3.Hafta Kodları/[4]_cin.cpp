//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Klavyeden değişken değeri alma - cin komutu
// Birimine göre sıcaklık değerini 
// yeniden hesaplayan program
//============================================

#include <iostream>
 
using namespace std;

int main()
{
   int fSicaklik, cSicaklik;  									// fahrenheit ve derece cinsinden sıcaklık değeri

   cout << "Sicaklik \"fahrenheit cinsinden\" giriniz \n";
   cin >> fSicaklik;											// cin >> degisken_adi    : dışarıdan veri girişi komutu
   
   cSicaklik = (fSicaklik - 32) * 5 / 9;  
 
   cout << "Derece olarak: " << cSicaklik << " C dir"<<endl; 	// derece nin ASCII konu ?????
   
   system("pause");
	
   return 0;
}


