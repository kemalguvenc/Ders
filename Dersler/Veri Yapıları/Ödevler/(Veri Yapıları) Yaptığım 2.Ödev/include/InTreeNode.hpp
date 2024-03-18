/**
 * @file            InTreeNode.hpp
 * @description                 InTreeNode'un başlık dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#ifndef InTreeNode_hpp
#define InTreeNode_hpp

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class InTreeNode{
    
public:
    
    InTreeNode *left, *right;
    string worker_name;
    unsigned int year;
    unsigned int height;
    
    InTreeNode(string worker_name, unsigned int year);
    
};

#endif
