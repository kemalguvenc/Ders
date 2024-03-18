/**
 * @file            InTreeNode.cpp
 * @description                 InTreeNode'un kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            27.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "InTreeNode.hpp"

InTreeNode::InTreeNode(string worker_name, unsigned int year){
    this->worker_name=worker_name;
    this->year=year;
    left=right=NULL;
    height=1;
}
