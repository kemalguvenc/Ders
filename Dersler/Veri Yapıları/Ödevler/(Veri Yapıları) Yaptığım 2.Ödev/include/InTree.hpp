/**
 * @file            InTree.hpp
 * @description                 InTree'nin başlık dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#ifndef InTree_hpp
#define InTree_hpp

#include "InTreeNode.hpp"

class InTree{
    
public:
    
    InTreeNode* root;
    
    InTree(string worker_name, unsigned int year);
    
    unsigned int height(InTreeNode*) const;
    InTreeNode* left_rotate(InTreeNode *node) const;
    InTreeNode* right_rotate(InTreeNode *node) const;
    int get_balance(InTreeNode *node) const;
    InTreeNode* add(InTreeNode *node, string worker_name, unsigned int year) const;
    void post_order(InTreeNode *node) const;
    
};

#endif
