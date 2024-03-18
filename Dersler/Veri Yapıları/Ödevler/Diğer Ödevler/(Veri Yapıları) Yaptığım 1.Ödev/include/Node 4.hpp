/**
* @file Node.hpp
* @description Node sınıfının başlık dosyası
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#ifndef NODE_HPP
#define NODE_HPP

#include <string>

using namespace std;

class Node{

private:

Node *next_node;
Node *back_node;
string item;

public:

Node(Node*);

// Düğümün ilerisindeki düğümü döndürür.
Node* Get_next_node()const;
// Düğümün gerisindeki düğümü döndürür.
Node* Get_back_node()const;
// Düğümün içindeki değeri döndürür.
string Get_item()const;

// Düğümün ilerisindeki düğümü değiştirir.
void Set_next_node(Node*);
// Düğümün içerisindeki değeri değiştirir.
void Set_item(string);

};

#endif
 