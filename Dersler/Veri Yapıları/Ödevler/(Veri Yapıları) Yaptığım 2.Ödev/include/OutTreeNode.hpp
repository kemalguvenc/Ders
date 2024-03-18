/**
 * @file            OutTreeNode.hpp
 * @description                 OutTreeNode'un başlık dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#ifndef OutTreeNode_hpp
#define OutTreeNode_hpp

#include "InTree.hpp"

class OutTreeNode{
    
public:
    
    OutTreeNode *left, *right;
    InTree *workers;
    string company_name;
    int count_worker;
    int height;
        
    OutTreeNode(string company_name, InTree *workers);
    
    void add_worker(string worker_name, unsigned int year);
    
};

#endif
