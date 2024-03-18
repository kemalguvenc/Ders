#ifndef Iterator_hpp
#define Iterator_hpp

#include "Node.hpp"

class Iterator{
    
private:
    
    Node *node;
    
    Iterator(Node *);
    
    // Iterator'ün bağlı olduğu düğümün adresini döndürür.
    Node* get_node() const;
    // Iterator'ün bağlu olduğu düğümü değiştirmeyi sağlar.
    void set_node(Node *node);
    
    // Iterator'ü bağlı olduğu düğümden bir sonraki düğüme bağlar.
    void next();
    // Iterator'ü bağlı olduğu düğümden bir önceki düğüme bağlar.
    void back();
    
    friend class List;
    
};

#endif
