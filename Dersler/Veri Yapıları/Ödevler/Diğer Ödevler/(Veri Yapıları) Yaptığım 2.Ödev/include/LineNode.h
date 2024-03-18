/*
* @file LineNode.h
* @description AVL a�ac�n�n d���m�n�n ba�l�k dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
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