#ifndef List_hpp
#define List_hpp

#include "Iterator.hpp"

class List{
    
private:
    Node *middle_node;
    int size;
    
    // Listenin boyutunu değiştirmeyi sağlar.
    void set_size(int);
    // Listenin orta düğümünün değiştirmeyi sağlar.
    void set_middle_node(Node *);
    // Listenin boyutunu 1 arttırır.
    void increase_size();
        
public:
    
    List();
    
    // Listenin boyutunu döndürür.
    int get_size() const;
    // Listenin orta düğümünün adresini döndürür.
    Node* get_middle_node() const;
    
    // Listeye, tek sayıda eleman içeren diziyi ekler.
    void add_array(int [],int);
    // Listenin elemanlarını gösterir.
    void show() const;
    // Listenin orta düğümündeki elemanını gösterir.
    int middle_item() const;
    // Listedeki elemanların yerlerini ters olacak şekilde sıralar.
    void invert();
    // İki listeyi çaprazlar.
    void cross_lists(List *);
    // Parametre olarak girilen liste ile metodu çağıran listeyi büyükluk olarak karşılaştırır.
    // Listeleri orta düğümlerindeki değerleri ile karşılaştırır.
    // Eğer metodu çağıran nesne büyükse true, değilse false döndürür.  Eğer ikisi aynı büyüklükte ise true döndürür.
    bool is_big(List *) const;
    
};

#endif
