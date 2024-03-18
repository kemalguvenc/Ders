/*
* @file LineNode.h
* @description AVL aðacýnýn düðümünün baþlýk dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#pragma once

#include "LineQueue.h"

class LineNode {
public:
	LineQueue* data;
	LineNode* left;
	LineNode* right;
	LineNode(LineQueue* data);
	~LineNode();
};