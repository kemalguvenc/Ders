/**
 * @file            Iterator.cpp
 * @description                 Iterator.hpp'de yazan Iterator sınıfına ait fonksiyonların gövdelerinin bulunduğu kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                1.Ödev
 * @date            22.11.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "Iterator.hpp"

Iterator::Iterator(Node *node){
    set_node(node);
}

Node* Iterator::get_node() const{
    return node;
}

void Iterator::set_node(Node *node){
    this->node=node;
}

void Iterator::next(){
    set_node(get_node()->get_next_node());
}

void Iterator::back(){
    set_node(get_node()->get_back_node());
}
