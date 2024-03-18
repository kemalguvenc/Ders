/**
 * @file            List.cpp
 * @description                 List.hpp'de yazan List sınıfına ait fonksiyonların gövdelerinin bulunduğu kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                1.Ödev
 * @date            22.11.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "List.hpp"

List::List(){
    middle_node=NULL;
    set_size(0);
}

int List::get_size() const{
    return size;
}

void List::set_middle_node(Node *middle_node){
    this->middle_node=middle_node;
}

Node* List::get_middle_node() const{
    return middle_node;
}

void List::set_size(int size){
    this->size=size;
}

void List::increase_size(){
    size++;
}

int List::middle_item() const{
    return get_middle_node()->get_item();
}

void List::add_array(int items[], int item_number){
    
    // Orta düğüm oluşturuluyor
    set_middle_node(new Node(items[0],NULL,NULL));
    get_middle_node()->set_next_node(middle_node);
    get_middle_node()->set_back_node(middle_node);
    increase_size();
    Iterator iterator(get_middle_node());
    
    // Listenin sol tarafına düğümler oluşturulup, değerleri atanıyor.
    for(int i=0;i<item_number/2;i++){
        iterator.get_node()->set_back_node(new Node (items[get_size()],iterator.get_node(),iterator.get_node()->get_back_node()));
        iterator.back();
        increase_size();
    }
    
    // Sol taraf bittikten sonra orta düğüm en sola bağlanıyor.
    iterator.get_node()->get_back_node()->set_next_node(iterator.get_node());
    // Orta düğüme geliyor.
    iterator.back();
    
    // Listenin sağ tarafına düğümler oluşturulup, değerleri atanıyor.
    for(int i=0;i<item_number/2;i++){
        iterator.get_node()->set_next_node(new Node (items[get_size()],iterator.get_node()->get_next_node(),iterator.get_node()));
        iterator.next();
        increase_size();
    }
}

void List::show() const{
    // Iterator orta düğüme getirilir sonra listenin en başına götürülür.
    Iterator iterator(get_middle_node());
    for(int i=0;i<get_size()/2;i++) iterator.back();
    
    // Listenin en başından itibaren tek tek ilerlenerek listedeki bütün değerler gösterilir.
    for(int i=0;i<get_size();i++){
        cout << iterator.get_node()->get_item() << " ";
        iterator.next();
    }
}

void List::invert(){
    // Listenin solundan ve sağından gitmesi için 2 tane iterator oluşturulur.
    Iterator iterator_left(middle_node);
    Iterator iterator_right(middle_node);
    int temp;
    
    // Bir iterator geri bir iterator ileri gider. Sonra iterator'lerin gösterdiği düğümlerdeki elemanlar karşılıklı olarak değiştirilir.
    for(int i=0;i<get_size()/2;i++){
        iterator_left.back();
        iterator_right.next();
        
        temp=iterator_left.get_node()->get_item();
        iterator_left.get_node()->set_item(iterator_right.get_node()->get_item());
        iterator_right.get_node()->set_item(temp);
    }
}

void List::cross_lists(List *list){

    // İki listenin de elemanları ters çevriliyor.
    this->invert();
    list->invert();
    
    // İki listenin orta düğümlerindeki elemanlarını karşılıklı değiştirtiyor.
    int temp_item=this->middle_item();
    this->get_middle_node()->set_item(list->middle_item());
    list->get_middle_node()->set_item(temp_item);
    
    // İki listenin orta düğümlerini karşılıklı değiştiriyor.
    Node *temp_node=this->get_middle_node();
    this->set_middle_node(list->get_middle_node());
    list->set_middle_node(temp_node);
    
    // İki listenin boyutlarını karşılıklı değiştiriyor.
    int temp_size=this->get_size();
    this->set_size(list->get_size());
    list->set_size(temp_size);
    
}

bool List::is_big(List * list) const{
    if(this->middle_item() >= list->middle_item())
        return true;
    else return false;
}
