// Düğüm başlık dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#ifndef HOMEWORK_NODE_H
#define HOMEWORK_NODE_H

#include "Kisi.h"

typedef enum DATATYPE {
    enumInteger, enumPerson
}dataType;

struct NODE {
    void* data;
    struct NODE* front;
    struct NODE* back;

    void (* delete)(struct NODE* node, dataType type);
};

typedef struct NODE* Node;

Node newNode(void* data);

void Node_delete(Node node, dataType type);

#endif //HOMEWORK_NODE_H