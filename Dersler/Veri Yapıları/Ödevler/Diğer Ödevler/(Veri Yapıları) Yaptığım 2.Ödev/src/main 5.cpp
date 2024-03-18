/*
* @file main.cpp
* @description Ana program�n kaynak dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "AVLTree.h"

int main()
{
	// E�er program makefile �zerinden derlenip �al��t�r�l�rsa noktalar dosyas�na bu �ekilde eri�iliyor.
	ifstream file("./Noktalar.txt");

	// E�er program main.exe �zerinden �al��t�r�l�rsa noktalar dosyas�na bu �ekilde eri�iliyor.
	if (!file.is_open())
		file.open("../Noktalar.txt");

	// Dosyan�n a��l�p a��lmad��� kontrol ediliyor. E�er a��lmad�ysa program hata g�sterip, kendini kapat�yor.
	if (file.is_open()) {

		int x, y, z;
		AVLTree avlTree;
		LineQueue* lineQueue;
		// Okunan sat�r.
		string row;
		// Okunan say�.
		string number;

		while (!file.eof()) {
			// �lk �nce yeni bir do�ru kuyru�u olu�turulur.
			lineQueue = new LineQueue();
			// Dosyadan sat�r okunur.
			getline(file, row);
			stringstream streamRow(row);

			// Okunan sat�rdadaki say�lar al�nmaya ba�lar.
			getline(streamRow, number, ' ');

			do {
				x = stoi(number);

				getline(streamRow, number, ' ');
				y = stoi(number);

				getline(streamRow, number, ' ');
				z = stoi(number);

				// Kordinatlar� al�nan nokta do�ru kuyru�una eklenir.
				lineQueue->Enqueue(x, y, z);

			} while (getline(streamRow, number, ' '));
			// Sat�rdaki noktalarla doldurulan do�ru kuyru�u a�aca eklenir.
			avlTree.Add(lineQueue);
		}
		// A�ac�n i�indeki do�ru kuyruklar� g�sterilir.
		cout << avlTree;
		// Dosya kapat�l�r.
		file.close();
	}

	else {
		cout << "Veri.txt dosyasi bulunamadi. Veri.txt dosyas�n�n \"makefile\" dosyasinin yaninda oldugundan emin olun. Program kapatiliyor...";
	}

	system("PAUSE");
	return 0;
}