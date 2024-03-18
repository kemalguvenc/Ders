//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
#include <iostream>
#include <iomanip>     // setw kullanımı için
using namespace std;
int main()
   {
   long A=1234567, B=123, C=2345;
   cout << setw(4)<<"A"<<setw(10)<< A << endl
           << setw(4)<<"B"<<setw(10)<< B << endl
           << setw(4)<<"C"<<setw(10)<< C << endl;
   system ("pause");     
   return 0;
   }
