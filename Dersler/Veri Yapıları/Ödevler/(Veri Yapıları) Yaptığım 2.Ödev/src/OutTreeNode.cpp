/**
 * @file            OutTreeNode.cpp
 * @description                 OutTreeNode'un kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "OutTreeNode.hpp"

OutTreeNode::OutTreeNode(string company_name, InTree *workers){
    this->company_name=company_name;
    this->workers=workers;
    left=right=NULL;
    count_worker=1;
    height=1;
}

void OutTreeNode::add_worker(string worker_name, unsigned int year){
    workers->root=workers->add(workers->root, worker_name, year);
    count_worker++;
}
