#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "Node.hpp"

class Iterator{
    public:
    Node* current;

    Iterator(Node*);
    bool HasNext();
    void Next();
    const string& Get_Item();
};

#endif