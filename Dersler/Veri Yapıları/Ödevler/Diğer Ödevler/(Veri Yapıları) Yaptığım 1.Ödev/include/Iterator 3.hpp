/**
* @file Iterator.hpp
* @description Iterator sınıfının başlık dosyası
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "Node.hpp"

class Iterator{

    private:
    
    // Iterator'ün listenin hangi indeksinde olduğunu tutar.
    int index;
    Node* node;

    public:

    // Iterator ilk oluşturulduğunda verilen düğümün listenin hangi indeksinde olduğu bilgisini de ister.
    Iterator(Node*, int);

    // Iterator'ün üzerinde bulunduğu düğümün ilerisinde düğüm olup olmadığını döndürür.
    bool Has_next()const;
    // Iterator'ü bir sonraki düğüme ilerletir.
    void Next();
    // Iterator'ü bir önceki düğüme geriletir.
    void Back();
    // Iterator'ün listenin hangi indeksinde olduğunu döndürür.
    int Get_index()const;
    // Iterator'ün üzerinde bulunduğu düğümü döndürür.
    Node* Get_node()const;

};

#endif