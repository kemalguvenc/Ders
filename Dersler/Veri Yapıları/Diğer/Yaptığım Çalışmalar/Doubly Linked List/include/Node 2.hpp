#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>

using namespace std;

class Node{
    public:
    Node* next;
    Node* back;
    string item;

    Node(Node*, Node*, string);
};

#endif