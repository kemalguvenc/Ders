/*
* @file PointNode.cpp
* @description Do�ru kuyru�unun d���mlerinin kaynak dosyas�
* @course 1.��retim - A grubu
* @assignment 2.�dev
* @date 25.12.2021
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "PointNode.h"

PointNode::PointNode(const int& x, const int& y, const int& z) {
	this->next = NULL;
	this->x = x;
	this->y = y;
	this->z = z;
	priority = -1 * CalculatePriority();
}

int PointNode::CalculatePriority() {
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

bool operator> (const PointNode& leftPointNode, const PointNode& rightPointNode) {
	if (leftPointNode.priority > rightPointNode.priority)
		return true;
	else
		return false;
}

ostream& operator<< (ostream& display, PointNode& pointNode) {
	display << -1 * pointNode.priority;
	return display;
}