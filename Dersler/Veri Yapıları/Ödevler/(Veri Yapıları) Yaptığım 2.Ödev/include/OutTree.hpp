/**
 * @file            OutTree.hpp
 * @description                 OutTree'nin başlık dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#ifndef OutTree_hpp
#define OutTree_hpp

#include "OutTreeNode.hpp"

class OutTree{
    
public:

    OutTreeNode* root;
    
    OutTree();
    
    OutTreeNode* find(OutTreeNode *node, string company_name) const;
    unsigned int height(OutTreeNode *node) const;
    OutTreeNode* left_rotate(OutTreeNode *node) const;
    OutTreeNode* right_rotate(OutTreeNode *node) const;
    int get_balance(OutTreeNode *node) const;
    OutTreeNode* add(OutTreeNode *node, string company_name, string worker_name, unsigned year) const;
    void post_order(OutTreeNode *node) const;

};

#endif
