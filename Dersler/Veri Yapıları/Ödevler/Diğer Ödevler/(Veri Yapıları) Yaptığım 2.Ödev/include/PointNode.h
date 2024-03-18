/*
* @file PointNode.h
* @description Doðru kuyruðunun düðümlerinin baþlýk dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
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
	// Noktanýn orijine olan uzaklýðýnýn negatifi priority olarak saklanýr.
	// Uzaktaki noktalarýn uzaklýðý fazla, öncelikleri düþük olacaðýndan dolayý uzaklýk negatif olarak saklanýr.
	int priority;

	friend class LineQueue;
	// Noktanýn orijine olan deðerini ekrana yazar.
	friend ostream& operator<< (ostream& display, PointNode& pointNode);
	// Ýki noktanýn öncelikleri kýyaslar.
	friend bool operator> (const PointNode& leftPointNode, const PointNode& rightPointNode);

	PointNode(const int& x, const int& y, const int& z);
	// Noktanýn önceliðini hesaplar.
	int CalculatePriority();
};