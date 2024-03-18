// Liste başlık dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#ifndef HOMEWORK_DOUBLYLINKEDLIST_H
#define HOMEWORK_DOUBLYLINKEDLIST_H

#include "Node.h"

struct DOUBLYLINKEDLIST {
    Node head;
    int size;
    const dataType type;

    Node (* getFirst)(const struct DOUBLYLINKEDLIST* doublyLinkedList);

    void (* append)(struct DOUBLYLINKEDLIST* doublyLinkedList, void* data);

    void (* remove)(struct DOUBLYLINKEDLIST* doublyLinkedList, struct NODE* node);

    void (* delete)(struct DOUBLYLINKEDLIST* doublyLinkedList);
};

typedef struct DOUBLYLINKEDLIST* DoublyLinkedList;

DoublyLinkedList newDoublyLinkedList(dataType type);

Node DoublyLinkedList_getFirst(const struct DOUBLYLINKEDLIST* doublyLinkedList);

void DoublyLinkedList_append(struct DOUBLYLINKEDLIST* doublyLinkedList, void* data);

void DoublyLinkedList_remove(struct DOUBLYLINKEDLIST* doublyLinkedList, struct NODE* node);

void DoublyLinkedList_delete(struct DOUBLYLINKEDLIST* doublyLinkedList);

#endif //HOMEWORK_DOUBLYLINKEDLIST_H