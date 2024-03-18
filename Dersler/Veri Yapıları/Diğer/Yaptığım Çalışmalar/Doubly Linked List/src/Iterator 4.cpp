#include <Iterator.hpp>

Iterator::Iterator(Node* current=NULL){
    this->current=current;
}

bool Iterator::HasNext(){
    return current->next!=NULL;
}

void Iterator::Next(){
    current=current->next;
}

const string& Iterator::Get_Item(){
    return current->item;
}