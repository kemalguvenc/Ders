#include "Node.hpp"

Node::Node(Node* next=NULL, string item=""){
    this->next=next;
    this->item=item;
}