/**
* @file Iterator.cpp
* @description Iterator sınıfının kaynak dosyası
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "Iterator.hpp"

Iterator::Iterator(Node* node, int index){
    this->node=node;
    this->index=index;
}
bool Iterator::Has_next()const{
    return node->Get_next_node()!=NULL;
}
void Iterator::Next(){
    node=node->Get_next_node();
    index++;
}
void Iterator::Back(){
    node=node->Get_back_node();
    index--;
}
int Iterator::Get_index()const{
    return index;
}
Node* Iterator::Get_node()const{
    return node;
}