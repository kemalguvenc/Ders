/*
* @file LineNode.cpp
* @description AVL aðacýnýn düðümlerinin kaynak dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "LineNode.h"

LineNode::LineNode(LineQueue* data) {
	this->data = data;
	left = right = NULL;
}

LineNode::~LineNode() {
	delete data;
}