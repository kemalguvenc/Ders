#include "DoublyLinkedList.hpp"

Iterator DoublyLinkedList::FindPrevByPosition(int index){
    if(index>size && index<0)
        throw("Hata");

    Iterator iterator(head);

    for(int i=-1;i<index-1;i++){
        iterator.Next();
    }

    return iterator;
}

DoublyLinkedList::DoublyLinkedList(){
    head=new Node(NULL,NULL,"");
    size=0;
}

DoublyLinkedList::~DoublyLinkedList(){
    Clear();
    delete head;
}

bool DoublyLinkedList::IsEmpty()const{
    return size==0;
}

int DoublyLinkedList::Count()const{
    return size;
}

void DoublyLinkedList::Add(string item){
    Insert(size, item);
}

void DoublyLinkedList::Insert(int index, string item){
    Iterator iterator=FindPrevByPosition(index);

    Node* tmp=new Node(iterator.current->next, iterator.current, item);
    iterator.current->next=tmp;
    if(iterator.current==head)
        tmp->back=NULL;

    ++size;
}

const string& DoublyLinkedList::First(){
    return size==0 ? head->item:head->next->item;
}

const string& DoublyLinkedList::Last(){
    Iterator iterator(head);
    while(iterator.HasNext())
        iterator.Next();
    return iterator.Get_Item();
}

int DoublyLinkedList::IndexOf(string& item){
    Iterator iterator(head->next);
    for(int i=0;i<size;i++){
        if(iterator.Get_Item()==item)
            return i;
        iterator.Next();
    }
    return -1;
}

const string& DoublyLinkedList::ElementAt(int index){    
    if(index>=size && index<0)
        throw("Hata");

    Iterator iterator(head->next);

    for(int i=0;i<index;i++){
        iterator.Next();
    }

    return iterator.Get_Item();
}

bool DoublyLinkedList::Find(string& item){
    return IndexOf(item)==-1 ? false:true;
}

void DoublyLinkedList::Remove(string item){
    RemoveAt(IndexOf(item));
}

void DoublyLinkedList::RemoveAt(int index){
    Iterator iterator=FindPrevByPosition(index);
    Node* tmp=iterator.current->next;
    iterator.current->next=tmp->next;
    if(tmp->next!=NULL)
        tmp->next->back=iterator.current;
    delete tmp;
    --size;
}

void DoublyLinkedList::Clear(){
    while(!IsEmpty())
        RemoveAt(size-1);
}

ostream& operator<<(ostream& display, DoublyLinkedList& list){
    Iterator iterator(list.head->next);
    
    for(int i=0; i<list.size; i++){
        display << i << ":" << iterator.Get_Item() << endl;
        iterator.Next();
    }
    return display;
}