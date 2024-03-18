#include "LinkedList.hpp"

Iterator LinkedList::FindPrevByPosition(int index){
    if(index>size && index<0)
        throw("Hata");

    Iterator iterator(head);

    for(int i=-1;i<index-1;i++){
        iterator.Next();
    }

    return iterator;
}

LinkedList::LinkedList(){
    head=new Node(NULL,"");
    size=0;
}

LinkedList::~LinkedList(){
    cout << "Yikici" << endl;
    Clear();
    delete head;
}

bool LinkedList::IsEmpty()const{
    return size==0;
}

int LinkedList::Count()const{
    return size;
}

void LinkedList::Add(string item){
    Insert(size, item);
}

void LinkedList::Insert(int index, string item){
    Iterator iterator=FindPrevByPosition(index);
    iterator.current->next=new Node(iterator.current->next, item);
    ++size;
}

const string& LinkedList::First(){
    return size==0 ? head->item:head->next->item;
}

const string& LinkedList::Last(){
    Iterator iterator(head);
    while(iterator.HasNext())
        iterator.Next();
    return iterator.Get_Item();
}

int LinkedList::IndexOf(string& item){
    Iterator iterator(head->next);
    for(int i=0;i<size;i++){
        if(iterator.Get_Item()==item)
            return i;
        iterator.Next();
    }
    return -1;
}

const string& LinkedList::ElementAt(int index){    
    if(index>=size && index<0)
        throw("Hata");

    Iterator iterator(head->next);

    for(int i=0;i<index;i++){
        iterator.Next();
    }

    return iterator.Get_Item();
}

bool LinkedList::Find(string& item){
    return IndexOf(item)==-1 ? false:true;
}

void LinkedList::Remove(string item){
    RemoveAt(IndexOf(item));
}

void LinkedList::RemoveAt(int index){
    Iterator iterator=FindPrevByPosition(index);
    cout << "asdasd ::::" << index << endl;
    Node* tmp=iterator.current->next;
    iterator.current->next=tmp->next;
    delete tmp;
    --size;
}

void LinkedList::Clear(){
    cout << "asdasdmkldsfkldsflk" << endl;
    while(!IsEmpty())
        RemoveAt(size-1);
}

ostream& operator<<(ostream& display, LinkedList& list){
    Iterator iterator(list.head->next);
    
    for(int i=0; i<list.size; i++){
        display << i << ":" << iterator.Get_Item() << endl;
        iterator.Next();
    }
    return display;
}