/*
* @file PointNode.h
* @description Do�ru kuyru�unun d���mlerinin ba�l�k dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
*/

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstring>
#include <sstream>

using namespace std;

class PointNode {

public:

	PointNode* next;
	int x, y, z;
	// Noktan�n orijine olan uzakl���n�n negatifi priority olarak saklan�r.
	// Uzaktaki noktalar�n uzakl��� fazla, �ncelikleri d���k olaca��ndan dolay� uzakl�k negatif olarak saklan�r.
	int priority;

	friend class LineQueue;
	// Noktan�n orijine olan de�erini ekrana yazar.
	friend ostream& operator<< (ostream& display, PointNode& pointNode);
	// �ki noktan�n �ncelikleri k�yaslar.
	friend bool operator> (const PointNode& leftPointNode, const PointNode& rightPointNode);

	PointNode(const int& x, const int& y, const int& z);
	// Noktan�n �nceli�ini hesaplar.
	int CalculatePriority();
};