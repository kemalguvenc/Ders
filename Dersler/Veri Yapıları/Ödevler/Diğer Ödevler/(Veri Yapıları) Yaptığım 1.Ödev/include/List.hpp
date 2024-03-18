/**
* @file List.hpp
* @description Liste sınıfının başlık dosyası
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#ifndef LIST_HPP
#define LIST_HPP

#include "Iterator.hpp"
#include <iostream>

using namespace std;

class List{

    private:
    
    Node* head;
    int size;

    public:

    List();
    ~List();

    // Listenin belirtilen indeksine verilen ifadeyi ekler.
    void Add(int, string);
    // Listenin belirtilen indeksindeki veriyi siler.
    void Remove(int);
    // Listenin içindeki verileri listeler.
    friend ostream& operator<< (ostream&, List&);

};

#endif