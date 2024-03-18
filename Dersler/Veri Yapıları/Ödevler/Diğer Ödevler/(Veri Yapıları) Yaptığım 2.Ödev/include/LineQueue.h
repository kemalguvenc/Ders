/*
* @file LineQueue.h
* @description Do�ru kuyru�unun ba�l�k dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
*/

#pragma once

#include "PointNode.h"

class LineQueue {
private:

	PointNode* front;
	PointNode* back;

	// Do�ru kuyru�unun i�indeki noktalar�n �nceliklerine g�re ekrana ��kart�r.
	friend ostream& operator<< (ostream& display, LineQueue& lineQueue);
	// Do�ru kuyruklar�n� toplam uzunluklar�na g�re k�yaslar.
	friend bool operator> (LineQueue& leftLineQueue, LineQueue& rightLineQueue);
	friend bool operator<= (LineQueue& leftLineQueue, LineQueue& rightLineQueue);

public:

	LineQueue();
	~LineQueue();
	// Verilen noktadan bir t�k daha y�ksek �nceli�e sahip noktay� d�nd�r�r.
	PointNode* PreviousPriorityNode(PointNode*& findPointNode);
	// �ki nokta aras�ndaki uzakl��� hesaplar.
	unsigned long long int DistancePoints(PointNode*& pointNode1, PointNode*& pointNode2);
	// Kordinatlar� verilen noktay� do�ru kuyru�una ekler.
	void Enqueue(const int& x, const int& y, const int& z);
	// Do�ru kuyru�undan en y�ksek �nceli�e sahip noktay� siler.
	void Dequeue();
	// Do�ru kuyru�undaki en y�ksek �nceli�e sahip noktay� d�nd�r�r.
	PointNode* Peek();
	// Do�ru kuyru�u bo� ise true d�nd�r�r.
	bool IsEmpty();
	// Do�ru kuyru�unun toplam uzunlu�unu hesaplar.
	unsigned long long int TotalLength();
	// Do�ru kuyru�unun i�indeki t�m noktalar� siler.
	void Clear();

};