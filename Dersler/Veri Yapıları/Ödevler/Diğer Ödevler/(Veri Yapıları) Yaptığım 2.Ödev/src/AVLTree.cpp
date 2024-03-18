/*
* @file AVLTree.cpp
* @description AVL aðacýnýn kaynak dosyasý
* @course 1.Öðretim - A grubu
* @assignment 2.Ödev
* @date 25.12.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "AVLTree.h"

AVLTree::AVLTree() {
	root = NULL;
}

AVLTree::~AVLTree() {
	Clear(root);
	root = NULL;
}

void AVLTree::Clear(LineNode* lineNode) {
	// Aðacý postorder olarak gezip bütün doðru kuyruklarýný siler.
	if (lineNode) {
		Clear(lineNode->left);
		Clear(lineNode->right);
		delete lineNode;
	}
}

LineNode* AVLTree::TurnRight(LineNode* parent) {
	LineNode* child = parent->left;
	parent->left = child->right;
	child->right = parent;
	return child;
}

LineNode* AVLTree::TurnLeft(LineNode* parent) {
	LineNode* child = parent->right;
	parent->right = child->left;
	child->left = parent;
	return child;
}

LineNode* AVLTree::Add(LineQueue* data, LineNode* lineNode) {
	if (!lineNode)
		return new LineNode(data);

	if (*data > *lineNode->data) {
		lineNode->right = Add(data, lineNode->right);
		if (Height(lineNode->right) - Height(lineNode->left) > 1) {
			if (*data > *lineNode->right->data)
				lineNode = TurnLeft(lineNode);
			else {
				lineNode->right = TurnRight(lineNode->right);
				lineNode = TurnLeft(lineNode);
			}
		}
	}

	else if (*data <= *lineNode->data) {
		lineNode->left = Add(data, lineNode->left);
		if (Height(lineNode->left) - Height(lineNode->right) > 1) {
			if (*data <= *lineNode->left->data)
				lineNode = TurnRight(lineNode);
			else {
				lineNode->left = TurnLeft(lineNode->left);
				lineNode = TurnRight(lineNode);
			}
		}
	}

	return lineNode;
}

void AVLTree::Add(LineQueue* data) {
	root = Add(data, root);
}

int AVLTree::Height(LineNode* lineNode) {
	if (lineNode)
		return 1 + max(Height(lineNode->left), Height(lineNode->right));
	return -1;
}

void AVLTree::PostOrder(LineNode* lineNode) {
	if (lineNode) {
		PostOrder(lineNode->left);
		PostOrder(lineNode->right);
		cout << *lineNode->data << endl;
	}
}

ostream& operator<< (ostream& display, AVLTree& avlTree) {
	avlTree.PostOrder(avlTree.root);
	return display;
}