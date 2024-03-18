//============================================
// BSM 103 - Programlamaya Giriş Dersi
// 2019-2020 Güz Dönemi
//============================================
// Açık Tip Dönüşümü
//============================================

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char ch1 = _getch();

	cout << ch1 << " karakterinin ASCI karsiligi : " << static_cast<int>(ch1) << endl;
	// (int)ch1 -  C standardı tip dönüştürme ifadesi
	//cout << ch1 << " karakterinin ASCI karsiligi:" << (int)ch1 << endl;

	system("pause");

	return 0;
}



