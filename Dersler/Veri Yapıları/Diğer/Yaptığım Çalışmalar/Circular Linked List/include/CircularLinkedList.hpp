#ifndef CIRCULARLINKEDLIST_HPP
#define CIRCULARLINKEDLIST_HPP

#include "Iterator.hpp"

class CircularLinkedList{
    private:
    Node* head;
    int size;

    Iterator FindPrevByPosition(int index);
    void updateLastNode();

    public:
    CircularLinkedList();
    ~CircularLinkedList();
    bool IsEmpty()const;
    int Count()const;
    void Add(string item);
    void Insert(int index, string item);
    const string& First();
    const string& Last();
    int IndexOf(string& item);
    const string& ElementAt(int index);
    bool Find(string& item);
    void Remove(string item);
    void RemoveAt(int index);
    void Clear();
    friend ostream& operator<<(ostream& display, CircularLinkedList& list);

};

#endif