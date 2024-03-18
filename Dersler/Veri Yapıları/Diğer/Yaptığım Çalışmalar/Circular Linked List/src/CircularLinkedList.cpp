#include "CircularLinkedList.hpp"

Iterator CircularLinkedList::FindPrevByPosition(int index){
    if(index>size && index<0)
        throw("Hata");

    Iterator iterator(head);

    for(int i=-1;i<index-1;i++){
        iterator.Next();
    }

    return iterator;
}

void CircularLinkedList::updateLastNode(){
    Iterator iterator = FindPrevByPosition(size);
    iterator.current->next=head->next;
}

CircularLinkedList::CircularLinkedList(){
    head=new Node(NULL,"");
    size=0;
}

CircularLinkedList::~CircularLinkedList(){
    Clear();
    delete head;
}

bool CircularLinkedList::IsEmpty()const{
    return size==0;
}

int CircularLinkedList::Count()const{
    return size;
}

void CircularLinkedList::Add(string item){
    Insert(size, item);
}

void CircularLinkedList::Insert(int index, string item){
    Iterator iterator=FindPrevByPosition(index);
    iterator.current->next=new Node(iterator.current->next, item);
    ++size;
    if(index==0)
        updateLastNode();
}

const string& CircularLinkedList::First(){
    return size==0 ? head->item:head->next->item;
}

const string& CircularLinkedList::Last(){
    Iterator iterator(head);
    while(iterator.HasNext())
        iterator.Next();
    return iterator.Get_Item();
}

int CircularLinkedList::IndexOf(string& item){
    Iterator iterator(head->next);
    for(int i=0;i<size;i++){
        if(iterator.Get_Item()==item)
            return i;
        iterator.Next();
    }
    return -1;
}

const string& CircularLinkedList::ElementAt(int index){    
    if(index>=size && index<0)
        throw("Hata");

    Iterator iterator(head->next);

    for(int i=0;i<index;i++){
        iterator.Next();
    }

    return iterator.Get_Item();
}

bool CircularLinkedList::Find(string& item){
    return IndexOf(item)==-1 ? false:true;
}

void CircularLinkedList::Remove(string item){
    RemoveAt(IndexOf(item));
}

void CircularLinkedList::RemoveAt(int index){
    Iterator iterator=FindPrevByPosition(index);
    Node* tmp=iterator.current->next;
    iterator.current->next=tmp->next;
    delete tmp;
    --size;
    if(index==0)
        updateLastNode();    
}

void CircularLinkedList::Clear(){
    while(!IsEmpty())
        RemoveAt(size-1);
}

ostream& operator<<(ostream& display, CircularLinkedList& list){
    Iterator iterator(list.head->next);
    
    for(int i=0; i<list.size; i++){
        display << i << ":" << iterator.Get_Item() << endl;
        iterator.Next();
    }
    return display;
}