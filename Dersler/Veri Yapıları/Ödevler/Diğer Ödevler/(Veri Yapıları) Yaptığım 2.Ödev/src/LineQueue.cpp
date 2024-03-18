/*
* @file LineQueue.cpp
* @description Do�ru kuyru�unun kaynak dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
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

	// Do�ru kuyru�unun ba��ndan sonuna kadar d���mlerin �ncelikleri kontrol edilir.
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

	// �lk �nce do�ru kuyru�unun bo� olup olmad��� kontrol edilir.
	if (IsEmpty())
		front = back = pointNode;

	// E�er eklenecek noktan�n �nceli�i, do�ru kuyru�unun �n�ndeki noktan�n �nceli�inden b�y�ksek bu �ekilde eklenir.
	else if (*pointNode > *front) {
		pointNode->next = front;
		front = pointNode;
	}

	// E�er eklenecek nokta do�ru kuyru�unun aras�na veya sonuna eklenecek ise bu �ekilde eklenir.
	else {
		PointNode* prev = PreviousPriorityNode(pointNode);
		pointNode->next = prev->next;
		prev->next = pointNode;

		// E�er do�ru kuyru�unun sonuna eleman eklenirse do�ru kuyru�unun arkas�n d�zeltilir.
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

	// E�er do�ru kuyru�u bo� veya sadece bir noktaya sahip ise uzunlu�u 0 olarak hesaplan�r.
	if (this->IsEmpty() || !this->Peek()->next)
		return 0;

	// Kuyruktaki noktalar aras�ndaki t�m uzunluklar hesaplan�p toplan�r.
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
	// Do�ru kuyru�u temizlendikten sonra back hala en son ��kan d���me g�sterdi�i i�in NULL'a e�itlenir.
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