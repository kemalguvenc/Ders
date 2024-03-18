// Liste kaynak dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#include "../include/DoublyLinkedList.h"
#include "stdlib.h"

DoublyLinkedList newDoublyLinkedList(const dataType type) {
    DoublyLinkedList this = malloc(sizeof(struct DOUBLYLINKEDLIST));

    this->head = newNode(NULL);
    this->head->front = this->head;
    this->head->back = this->head;
    this->size = 0;
    *(dataType*) &(this->type) = type;

    this->getFirst = &DoublyLinkedList_getFirst;
    this->append = &DoublyLinkedList_append;
    this->remove = &DoublyLinkedList_remove;
    this->delete = &DoublyLinkedList_delete;

    return this;
}

Node DoublyLinkedList_getFirst(const struct DOUBLYLINKEDLIST* const doublyLinkedList) {
    if (doublyLinkedList->head->front == doublyLinkedList->head)
        return NULL;
    return doublyLinkedList->head->front;
}

void DoublyLinkedList_append(struct DOUBLYLINKEDLIST* const doublyLinkedList, void* const data) {
    Node last = doublyLinkedList->head->back;
    Node node = newNode(data);
    node->front = doublyLinkedList->head;
    node->back = last;
    last->front = node;
    doublyLinkedList->head->back = node;
    ++(doublyLinkedList->size);
}

void DoublyLinkedList_remove(struct DOUBLYLINKEDLIST* const doublyLinkedList, Node const node) {
    if (doublyLinkedList->size == 0)
        return;

    node->back->front = node->front;
    node->front->back = node->back;
    --(doublyLinkedList->size);

    node->delete(node, doublyLinkedList->type);
}

void DoublyLinkedList_delete(struct DOUBLYLINKEDLIST* const doublyLinkedList) {
    while (doublyLinkedList->size != 0) {
        Node node = doublyLinkedList->head->front;
        doublyLinkedList->remove(doublyLinkedList, node);
    }

    free(doublyLinkedList->head);
    free(doublyLinkedList);
}