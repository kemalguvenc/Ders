/*
* @file AVLTree.h
* @description AVL aðacýnýn baþlýk dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#pragma once

#include "LineNode.h"

class AVLTree {
private:
	LineNode* root;
	// Aðaca doðru kuyruðu eklenmesini saðlar.
	LineNode* Add(LineQueue* data, LineNode* LineNode);
	// Aðacýn içindeki tüm doðru kuyruklarýný temizler.
	void Clear(LineNode* lineNode);
	// Aðacý postorder þekilde gezip doðru kuyruklarýný ekrana yazar.
	void PostOrder(LineNode* LineNode);

	// Aðacý ekrana yazar.
	friend ostream& operator<< (ostream& display, AVLTree& avlTree);

public:
	AVLTree();
	~AVLTree();
	// Aðacý saða döndürür.
	LineNode* TurnRight(LineNode* parent);
	// Aðacý sola döndürür.
	LineNode* TurnLeft(LineNode* parent);
	// Aðaca doðru kuyruðu eklenmesini saðlar.
	void Add(LineQueue* data);
	// Verilen düðüme ait yüksekliði bulur.
	int Height(LineNode* LineNode);
};