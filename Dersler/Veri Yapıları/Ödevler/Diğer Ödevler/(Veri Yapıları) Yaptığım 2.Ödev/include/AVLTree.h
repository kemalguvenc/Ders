/*
* @file AVLTree.h
* @description AVL a�ac�n�n ba�l�k dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
*/

#pragma once

#include "LineNode.h"

class AVLTree {
private:
	LineNode* root;
	// A�aca do�ru kuyru�u eklenmesini sa�lar.
	LineNode* Add(LineQueue* data, LineNode* LineNode);
	// A�ac�n i�indeki t�m do�ru kuyruklar�n� temizler.
	void Clear(LineNode* lineNode);
	// A�ac� postorder �ekilde gezip do�ru kuyruklar�n� ekrana yazar.
	void PostOrder(LineNode* LineNode);

	// A�ac� ekrana yazar.
	friend ostream& operator<< (ostream& display, AVLTree& avlTree);

public:
	AVLTree();
	~AVLTree();
	// A�ac� sa�a d�nd�r�r.
	LineNode* TurnRight(LineNode* parent);
	// A�ac� sola d�nd�r�r.
	LineNode* TurnLeft(LineNode* parent);
	// A�aca do�ru kuyru�u eklenmesini sa�lar.
	void Add(LineQueue* data);
	// Verilen d���me ait y�ksekli�i bulur.
	int Height(LineNode* LineNode);
};