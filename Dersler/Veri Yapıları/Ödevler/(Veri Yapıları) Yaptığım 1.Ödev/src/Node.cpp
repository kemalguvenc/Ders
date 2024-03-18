/**
 * @file            Node.cpp
 * @description                 Node.hpp'de yazan Node sınıfına ait fonksiyonların gövdelerinin bulunduğu kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                1.Ödev
 * @date            22.11.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "Node.hpp"

Node::Node(int item, Node *next_node, Node *back_node){
    set_item(item);
    set_next_node(next_node);
    set_back_node(back_node);
}

void Node::set_item(int item){
    this->item=item;
}
int Node::get_item() const{
    return item;
}

void Node::set_next_node(Node *next_node){
    this->next_node=next_node;
}
Node* Node::get_next_node() const{
    return next_node;
}

void Node::set_back_node(Node *back_node){
    this->back_node=back_node;
}
Node* Node::get_back_node() const{
    return back_node;
}
