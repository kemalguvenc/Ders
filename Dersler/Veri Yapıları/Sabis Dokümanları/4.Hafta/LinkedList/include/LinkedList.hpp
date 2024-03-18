#ifndef LinkedList_HPP
#define LinkedList_HPP

#include "Iterator.hpp"

template <typename Object>
class LinkedList{
	private:
		Node<Object> *head; // i�inde eleman olmayan sadece listenin ba��n� tutan d���m.
		int size;
		
		Iterator<Object> FindPrevByPosition(int Position)const{// const throw(){
			if(Position < 0 || Position > Count()) throw Tasma();
			int index=0;
			Iterator<Object> iterator(head);
			
			while(!iterator.hasNext() && Position != index++) 
				iterator.next();
			
			return iterator;
		}		
		
		/// Listenin ilk d���m�n� d�nd�r�r
		Iterator<Object> FirstNode() const throw(){
			if(isEmpty()) throw ListeBos();
			return Iterator<Object>(head->next);
		}
		
	public:
		LinkedList(){
			head = new Node<Object>(); //LinkedList'in ilk eleman�na i�aret eder
                         			//Bo� bir d���m olu�turuluyor	
			size=0;
		}
		bool isEmpty() const{
			return head->next == NULL;
		}
		int Count() const{//eleman say�s�
			return size;
		}
		/// Listenin ilk eleman�n� d�nd�r�r
		const Object& first() const throw(){
			if(isEmpty()) throw ListeBos();
			return head->next->item;
		}
		/// Listenin son eleman�n� d�nd�r�r
		const Object& last() const throw(){
			if(isEmpty()) throw ListeBos();
			return FindPrevByPosition(size).getCurrent();
		}
		/// Listenin sonuna verilen eleman� ekler
		void add(const Object& item){
			insert(Count(),item);
		}
		/// Listenin istenen konumuna verilen eleman� ekler
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
		/// Verilen eleman� listede bulur ve siler.
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
				// silinen eleman� es ge�
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
		/// Listedeki elemanlar� temizler
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