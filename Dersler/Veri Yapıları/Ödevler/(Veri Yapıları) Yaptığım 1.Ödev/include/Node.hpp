#ifndef Node_hpp
#define Node_hpp

#include <iostream>

using namespace std;

class Node{
    
private:
    
    int item;
    Node *next_node;
    Node *back_node;
    
    Node(int, Node *, Node *);
    
    // Düğüme eleman atamayı sağlar.
    void set_item(int);
    // Düğümdeki elemanın değerini döndürür.
    int get_item() const;
    
    // Düğümdeki bir sonraki elemanı gösteren göstericiye atama yapılmasını sağlar.
    void set_next_node(Node *);
    // Düğümdeki bir sonraki elemanı gösteren göstericiyi döndürür.
    Node* get_next_node() const;
    
    // Düğümdeki bir önceki elemanı gösteren göstericiye atama yapılmasını sağlar.
    void set_back_node(Node *);
    // Düğümdeki bir önceki elemanı gösteren göstericiyi döndürür.
    Node* get_back_node() const;
    
    friend class Iterator;
    friend class List;
    
};

#endif
