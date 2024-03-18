/*
* @file LineNode.cpp
* @description AVL a�ac�n�n d���mlerinin kaynak dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "LineNode.h"

LineNode::LineNode(LineQueue* data) {
	this->data = data;
	left = right = NULL;
}

LineNode::~LineNode() {
	delete data;
}