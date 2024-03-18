/*
* @file LineQueue.h
* @description Doðru kuyruðunun baþlýk dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#pragma once

#include "PointNode.h"

class LineQueue {
private:

	PointNode* front;
	PointNode* back;

	// Doðru kuyruðunun içindeki noktalarýn önceliklerine göre ekrana çýkartýr.
	friend ostream& operator<< (ostream& display, LineQueue& lineQueue);
	// Doðru kuyruklarýný toplam uzunluklarýna göre kýyaslar.
	friend bool operator> (LineQueue& leftLineQueue, LineQueue& rightLineQueue);
	friend bool operator<= (LineQueue& leftLineQueue, LineQueue& rightLineQueue);

public:

	LineQueue();
	~LineQueue();
	// Verilen noktadan bir týk daha yüksek önceliðe sahip noktayý döndürür.
	PointNode* PreviousPriorityNode(PointNode*& findPointNode);
	// Ýki nokta arasýndaki uzaklýðý hesaplar.
	unsigned long long int DistancePoints(PointNode*& pointNode1, PointNode*& pointNode2);
	// Kordinatlarý verilen noktayý doðru kuyruðuna ekler.
	void Enqueue(const int& x, const int& y, const int& z);
	// Doðru kuyruðundan en yüksek önceliðe sahip noktayý siler.
	void Dequeue();
	// Doðru kuyruðundaki en yüksek önceliðe sahip noktayý döndürür.
	PointNode* Peek();
	// Doðru kuyruðu boþ ise true döndürür.
	bool IsEmpty();
	// Doðru kuyruðunun toplam uzunluðunu hesaplar.
	unsigned long long int TotalLength();
	// Doðru kuyruðunun içindeki tüm noktalarý siler.
	void Clear();

};