#ifndef LinkedList_HPP
#define LinkedList_HPP

#include "Iterator.hpp"

template <typename Object>
class LinkedList{
	private:
		Node<Object> *head; // içinde eleman olmayan sadece listenin baþýný tutan düðüm.
		int size;
		
		Iterator<Object> FindPrevByPosition(int Position)const{// const throw(){
			if(Position < 0 || Position > Count()) throw Tasma();
			int index=0;
			Iterator<Object> iterator(head);
			
			while(!iterator.hasNext() && Position != index++) 
				iterator.next();
			
			return iterator;
		}		
		
		/// Listenin ilk düðümünü döndürür
		Iterator<Object> FirstNode() const throw(){
			if(isEmpty()) throw ListeBos();
			return Iterator<Object>(head->next);
		}
		
	public:
		LinkedList(){
			head = new Node<Object>(); //LinkedList'in ilk elemanýna iþaret eder
                         			//Boþ bir düðüm oluþturuluyor	
			size=0;
		}
		bool isEmpty() const{
			return head->next == NULL;
		}
		int Count() const{//eleman sayýsý
			return size;
		}
		/// Listenin ilk elemanýný döndürür
		const Object& first() const throw(){
			if(isEmpty()) throw ListeBos();
			return head->next->item;
		}
		/// Listenin son elemanýný döndürür
		const Object& last() const throw(){
			if(isEmpty()) throw ListeBos();
			return FindPrevByPosition(size).getCurrent();
		}
		/// Listenin sonuna verilen elemaný ekler
		void add(const Object& item){
			insert(Count(),item);
		}
		/// Listenin istenen konumuna verilen elemaný ekler
		void insert(int index,const Object& item) throw(){
			Iterator<Object> iterator;
			try{
				iterator = FindPrevByPosition(index);
			}
			catch(Tasma ts){
				throw ts;
			}
			iterator.current->next = new Node<Object>(item,iterator.current->next);
			size++;
		}
		/// Verilen elemaný listede bulur ve siler.
		void remove(const Object& item) throw(){
			try{
				int position = indexOf(item);
				removeAt(position);
			}
			catch(ElemanYok ey){
				throw ey;
			}
		}
		void removeAt(int index) throw(){
			Iterator<Object> prev;
			try{
				prev = FindPrevByPosition(index);
			}			
			catch(Tasma ts){
				throw ts;
			}
			if(prev.current->next != NULL){
				Node<Object> *del = prev.current->next;
				// silinen elemaný es geç
				prev.current->next = prev.current->next->next;
				delete del;
				size--;
			}
		}
		bool find(const Object& item) const{
			for(Iterator<Object> iterator(head->next);!iterator.hasNext();iterator.next()){
				if(iterator.current->item == item) return true;
			}
			return false;
		}
		int indexOf(const Object& item) const throw(){
			int index=0;
			for(Iterator<Object> iterator(head->next);!iterator.hasNext();iterator.next()){
				if(iterator.current->item == item) return index;
				index++;
			}
			throw ElemanYok();
		}
		friend ostream& operator<<(ostream& screen, LinkedList &right){
			if(right.isEmpty()) screen<<"Liste bos";
			else{
				for(Iterator<Object> iterator = right.FirstNode();!iterator.hasNext();iterator.next())
					screen<<iterator.getCurrent()<<" ";
				screen<<endl;
			}
			return screen;
		}
		/// Listedeki elemanlarý temizler
		void clear(){
			while(!isEmpty())
				remove(FirstNode().getCurrent());			
		}
		~LinkedList(){
			clear();
			delete head;
		}
};
#endif