/*
* @file LineQueue.cpp
* @description Doðru kuyruðunun kaynak dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "LineQueue.h"

LineQueue::LineQueue() {
	front = back = NULL;
}

LineQueue::~LineQueue() {
	Clear();
}

bool LineQueue::IsEmpty() {
	return front == NULL;
}

PointNode* LineQueue::PreviousPriorityNode(PointNode*& findPointNode) {
	PointNode* pointNode = front;

	// Doðru kuyruðunun baþýndan sonuna kadar düðümlerin öncelikleri kontrol edilir.
	while (pointNode->next != NULL) {
		if (*findPointNode > *pointNode->next)
			break;
		pointNode = pointNode->next;
	}

	return pointNode;
}

unsigned long long int LineQueue::DistancePoints(PointNode*& pointNode1, PointNode*& pointNode2) {
	int x = pointNode1->x - pointNode2->x;
	int y = pointNode1->y - pointNode2->y;
	int z = pointNode1->z - pointNode2->z;
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

PointNode* LineQueue::Peek() {
	return front;
}

void LineQueue::Enqueue(const int& x, const int& y, const int& z) {
	PointNode* pointNode = new PointNode(x, y, z);

	// Ýlk önce doðru kuyruðunun boþ olup olmadýðý kontrol edilir.
	if (IsEmpty())
		front = back = pointNode;

	// Eðer eklenecek noktanýn önceliði, doðru kuyruðunun önündeki noktanýn önceliðinden büyüksek bu þekilde eklenir.
	else if (*pointNode > *front) {
		pointNode->next = front;
		front = pointNode;
	}

	// Eðer eklenecek nokta doðru kuyruðunun arasýna veya sonuna eklenecek ise bu þekilde eklenir.
	else {
		PointNode* prev = PreviousPriorityNode(pointNode);
		pointNode->next = prev->next;
		prev->next = pointNode;

		// Eðer doðru kuyruðunun sonuna eleman eklenirse doðru kuyruðunun arkasýn düzeltilir.
		if (prev == back)
			back = pointNode;
	}
}

void LineQueue::Dequeue() {
	PointNode* tmp = front;
	front = front->next;
	delete tmp;
}

unsigned long long int LineQueue::TotalLength() {
	unsigned long long int length = 0;

	// Eðer doðru kuyruðu boþ veya sadece bir noktaya sahip ise uzunluðu 0 olarak hesaplanýr.
	if (this->IsEmpty() || !this->Peek()->next)
		return 0;

	// Kuyruktaki noktalar arasýndaki tüm uzunluklar hesaplanýp toplanýr.
	PointNode* pointNode = this->Peek();
		while (pointNode->next) {
			length += this->DistancePoints(pointNode, pointNode->next);
			pointNode = pointNode->next;
		}

	return length;
}

void LineQueue::Clear() {
	while (!IsEmpty()) {
		Dequeue();
	}
	// Doðru kuyruðu temizlendikten sonra back hala en son çýkan düðüme gösterdiði için NULL'a eþitlenir.
	back = NULL;
}

ostream& operator<< (ostream& display, LineQueue& lineQueue) {
	if (!lineQueue.IsEmpty()) {
		PointNode* pointNode = lineQueue.Peek();
		while (pointNode) {
			display << *pointNode << " ";
			pointNode = pointNode->next;
		}
	}
	return display;
}

bool operator> (LineQueue& leftLineQueue, LineQueue& rightLineQueue) {
	if (leftLineQueue.TotalLength() > rightLineQueue.TotalLength())
		return true;
	else
		return false;
}

bool operator<= (LineQueue& leftLineQueue, LineQueue& rightLineQueue) {
	if (leftLineQueue.TotalLength() <= rightLineQueue.TotalLength())
		return true;
	else
		return false;
}