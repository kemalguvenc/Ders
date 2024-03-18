// Düğüm kaynak dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#include "../include/Node.h"
#include "stdlib.h"

Node newNode(void* const data) {
    Node this = malloc(sizeof(struct NODE));
    this->data = data;
    this->front = NULL;
    this->back = NULL;

    this->delete = &Node_delete;

    return this;
}

void Node_delete(struct NODE* const node, const dataType type) {
    if (node == NULL)
        return;

    if (type == enumPerson)
        ((Person) node->data)->delete((Person) node->data);
    else if (type == enumInteger)
        free(((int*) node->data));

    free(node);
}