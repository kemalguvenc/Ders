//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Karakter değişkenleri örnekleyen program
//=========================================

#include <iostream>
#include <conio.h>										
 
using namespace std;

int main()
{
   char ch1, ch2 ;    									// char tipi karakter değişken tanımlar
   char ch3 = '\t';   									// char tipi 'tab' karakteri tanımlar
   
   ch1 = 'B';         									// char değişkene değer atar.
   cout << ch3<< ch1<<'\t'<<"\\ t"<<ch2<< endl ;       	// karakterleri ekranan yazdırır
   
   cout << '\n';           								// ekrana yeniş satır karakteri yazdırır
   
   cout << 'Öğretmen\'\dersimiz matematik \' dedi';

   char ch=getch(); 									

   system("pause");
	
   return 0;
}
