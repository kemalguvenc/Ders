/**
* @file Node.cpp
* @description Node sınıfının kaynak dosyası
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "Node.hpp"

Node::Node(Node* back_node){
    this->back_node=back_node;
    // Düğümler hep listenin sonunda oluşacağı için düğümün ilerisi otomatik olarak NULL'a eşitlenir.
    this->next_node=NULL;
}

Node* Node::Get_next_node()const{
    return next_node;
}

Node* Node::Get_back_node()const{
    return back_node;
}

string Node::Get_item()const{
    return item;
}

void Node::Set_next_node(Node* next_node){
    this->next_node=next_node;
}

void Node::Set_item(string item){
    this->item=item;
}