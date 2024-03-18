/**
* @file List.cpp
* @description Liste sınıfının kaynak dosyası
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include "List.hpp"

// Listenin ilk başlangıcında 'head' bir düğüm olarak oluşturulur. 
List::List(){
    head=new Node(NULL);
    size=0;
}

List::~List(){
    // Liste temizlenir.
    while(size!=0){
        Remove(size);
    }
    delete head;
}

void List::Add(int index, string item){
    // Eğer gönderilen indeks listenin boyutundan ya da sıfırdan küçükse listenin başına ekleme yapmak için indekse listenin boyutu atanır.
    if(index > size || index < 0){
        index=size;
    }

    // Iterator listenin başına konumlandırılır sonra listenin sonuna götürülür
    Iterator iterator(head, -1);
    while(iterator.Has_next()){
        iterator.Next();
    }
    
    // Listeye yeni düğüm eklenir ve Iterator o düğüme ilerletilir.
    iterator.Get_node()->Set_next_node(new Node(iterator.Get_node()));
    iterator.Next();

    // Iterator, ekleme yapılacak indekse götürülür. Bunu yaparkende bir yandan düğümlerin içerisindeki veriler kaydırılır.
    while(iterator.Get_index()!=index){
        iterator.Get_node()->Set_item(iterator.Get_node()->Get_back_node()->Get_item());
        iterator.Back();
    }

    // Ekleme yapılacak indeksteki düğüme veri yazılır ve listenin boyutu 1 arttırlır.
    iterator.Get_node()->Set_item(item);
    size++;
}

void List::Remove(int index){
    // Eğer gönderilen indeks listenin boyutundan ya da sıfırdan küçükse listenin başından eleman silmek için indekse listenin boyutu atanır.
    if(index > size || index < 0){
        index=size;
    }

    // Iterator listenin başına konumlandırılır sonra silinecek verinin indeksine götürülür
    Iterator iterator(head, -1);
    while(iterator.Has_next() && iterator.Get_index()!=index){
        iterator.Next();
    }

    // Iterator, listenin sonuna götürülür. Bunu yaparkende bir yandan düğümlerin içerisindeki veriler kaydırılır.
    while(iterator.Has_next()){
        iterator.Get_node()->Set_item(iterator.Get_node()->Get_next_node()->Get_item());
        iterator.Next();
    }

    // Iterator listenin sonuna gelince yani silinecek düğüme geldiği için bir adım geriletilir.
    iterator.Back();

    // Listenin sonundaki düğüm silinir ve listenin boyutu bir azaltılır.
    delete iterator.Get_node()->Get_next_node();
    iterator.Get_node()->Set_next_node(NULL);
    size--;

}

ostream& operator<<(ostream& console, List& list){

    // Iterator listenin başına konumlandırılır.
    Iterator iterator(list.head, -1);

    // Iterator bütün listeyi gezer ve bunu yaparkende düğümlerin içindeki değerleri gösterir.
    while (iterator.Has_next())
    {
        iterator.Next();
        cout << iterator.Get_node()->Get_item();
        if(iterator.Has_next()){
            cout << " <--> ";
        }
    }
    cout << endl;
}