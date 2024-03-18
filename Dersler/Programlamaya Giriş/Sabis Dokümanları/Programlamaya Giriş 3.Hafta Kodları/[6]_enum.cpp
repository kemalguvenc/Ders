//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Değişmez sabit veri tipi tanımlama - enum
// Haftanın günlerini enum kullanarak 
// örnekleyen program
//============================================

#include <iostream>

using namespace std; 

enum haftanın_gunleri { Pzt, Sa, Car, Pers, Cu, Cts, Pz }; 			// enum veri tipi tanımla


int main()
{
   haftanın_gunleri gun1, gun2;   									// 'haftanın_gunleri' tipinde değişken tanımla

   gun1 = Pzt;               							
   gun2 = Sa;               

   int fark = gun2 - gun1;    										// tamsayı aritmetiği uygular
   cout << "Günler arasındaki fark = " << fark << endl;
  
   system("pause");
   return 0;
}
