//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Tamsayı değişkenleri örnekleyen program
//============================================

#include <iostream>
 
using namespace std;

int main()
{
   int sayi1;
   int sayi2;
   int toplam = 0;
   //Yukarıdaki üç satırlık tamsayı tanımlama
   //aşağıdaki şekilde de yazılabilir:
   //int sayi1, sayi2, toplam = 0;
   
   cout <<" iki sayiyi giriniz: "; 
   cin >> sayi1 >> sayi2;
   
   toplam = sayi1 + sayi2;

   //endl: imleçin bir sonraki satıra geçmesini sağlar. 
   //std isim uzayı içerisinde tanımlanmıştır. (std::endl)
   cout << "islemin sonucu:\n" << toplam << endl;
   //system("pause") => !!!!
   //system("pause");
   return 0;
}
