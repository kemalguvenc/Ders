#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "Hatalar.hpp"
#include "Node.hpp"

template <typename Object>
class Iterator{
	public:
		Node<Object> *current; // Listede o anki bulunan konumu ifade eder.
		Iterator(){  // Yapýcý metot
			current=NULL;
		}
		Iterator(Node<Object> *node){  // Yapýcý metot
			current=node;
		}
		bool hasNext(){
			return current == NULL;
		}
		void next() throw(){
			if(hasNext()) throw ListeSonu();
			current = current->next;
		}
		const Object& getCurrent()const{
			return current->item;
		}
};
#endif