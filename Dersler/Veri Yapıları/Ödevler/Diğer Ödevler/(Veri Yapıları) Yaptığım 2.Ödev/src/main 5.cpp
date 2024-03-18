/*
* @file main.cpp
* @description Ana programýn kaynak dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "AVLTree.h"

int main()
{
	// Eðer program makefile üzerinden derlenip çalýþtýrýlýrsa noktalar dosyasýna bu þekilde eriþiliyor.
	ifstream file("./Noktalar.txt");

	// Eðer program main.exe üzerinden çalýþtýrýlýrsa noktalar dosyasýna bu þekilde eriþiliyor.
	if (!file.is_open())
		file.open("../Noktalar.txt");

	// Dosyanýn açýlýp açýlmadýðý kontrol ediliyor. Eðer açýlmadýysa program hata gösterip, kendini kapatýyor.
	if (file.is_open()) {

		int x, y, z;
		AVLTree avlTree;
		LineQueue* lineQueue;
		// Okunan satýr.
		string row;
		// Okunan sayý.
		string number;

		while (!file.eof()) {
			// Ýlk önce yeni bir doðru kuyruðu oluþturulur.
			lineQueue = new LineQueue();
			// Dosyadan satýr okunur.
			getline(file, row);
			stringstream streamRow(row);

			// Okunan satýrdadaki sayýlar alýnmaya baþlar.
			getline(streamRow, number, ' ');

			do {
				x = stoi(number);

				getline(streamRow, number, ' ');
				y = stoi(number);

				getline(streamRow, number, ' ');
				z = stoi(number);

				// Kordinatlarý alýnan nokta doðru kuyruðuna eklenir.
				lineQueue->Enqueue(x, y, z);

			} while (getline(streamRow, number, ' '));
			// Satýrdaki noktalarla doldurulan doðru kuyruðu aðaca eklenir.
			avlTree.Add(lineQueue);
		}
		// Aðacýn içindeki doðru kuyruklarý gösterilir.
		cout << avlTree;
		// Dosya kapatýlýr.
		file.close();
	}

	else {
		cout << "Veri.txt dosyasi bulunamadi. Veri.txt dosyasýnýn \"makefile\" dosyasinin yaninda oldugundan emin olun. Program kapatiliyor...";
	}

	system("PAUSE");
	return 0;
}