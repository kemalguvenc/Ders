#include "Node.hpp"

Node::Node(Node* next=NULL, Node* back=NULL, string item=""){
    this->next=next;
    this->back=back;
    this->item=item;
}