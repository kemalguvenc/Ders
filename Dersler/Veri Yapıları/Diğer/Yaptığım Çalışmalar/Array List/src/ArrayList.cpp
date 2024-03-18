#include "ArrayList.hpp"

ArrayList::ArrayList(){
    items=new int[5];
    size=0;
    capacity=5;
}

ArrayList::~ArrayList(){
    delete [] items;
}

void ArrayList::Reserve(){
    int *tmp=new int[capacity*2];

    for(int i=0;i<size;size++){
        tmp[i]=items[i];
    }

    delete [] items;
    items=tmp;
}

int ArrayList::Size()const{
    return size;
}

bool ArrayList::IsEmpty()const{
    return size==0;
}

int ArrayList::IndexOf(const int& item){
    for(int i=0;i<size;++i){
        if(items[i]==item)
            return i;
    }
    return -1;
}

const int& ArrayList::ElementAt(int index)throw(){
    if(index<size || index>=0)
        return items[index];
}

void ArrayList::Remove(const int& item){
    int index=IndexOf(item);
    for(int i=index;i<size-1;i++){
        items[i]=items[i+1];
    }
    --size;
}

void ArrayList::RemoveAt(int index){
    int item=ElementAt(index);
    Remove(item);
}

void ArrayList::Add(const int& item){
    Insert(item, size);
}

void ArrayList::Insert(const int& item, int index){
    if(size==capacity)
        Reserve();
    for(int i=size;i>index;--i){
        items[i]=items[i-1];
    }
    items[index]=item;
    ++size;
}

const int& ArrayList::First(){
    return items[0];
}
const int& ArrayList::Last(){
    return items[size-1];
}
void ArrayList::Clear(){
    size=0;
}
ostream& operator<< (ostream& display, ArrayList& List){
    for(int i=0;i<List.Size();i++)
        cout << List.ElementAt(i) << " ";
    return display;
}