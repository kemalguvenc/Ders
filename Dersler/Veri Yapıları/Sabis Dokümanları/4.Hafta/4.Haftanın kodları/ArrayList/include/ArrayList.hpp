#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include "ElemanYok.hpp"
#include "ListeBos.hpp"
#include "Tasma.hpp"

template <typename Object>
class ArrayList{
	private:
		Object *items;
		int length;
		int capacity;
		void reserve(int newCapacity)
		{
			 if(capacity>=newCapacity) return; // O kadar yer zaten var
			 Object *tmp = new Object[newCapacity];
			 for(int j=0;j<length;j++) tmp[j]= items[j];
			 if(items != NULL) delete [] items;
			 items = tmp;
			 capacity = newCapacity;
		}
	public:
		ArrayList() //Varsayýlan Yapýcý metot
		{
			length = 0;
			capacity=0;
			items = NULL;
		}
		ArrayList(const ArrayList &right) // Copy constructor
		{
			length = 0;
			items = new Object[right->length()];
			for(int i=0;i<right.size();i++){
				insert(i,right.at(i));
			}
			capacity=length;
		}
		int size() const
		{
			return length;
		}
		bool isEmpty() const
		{
			return size() == 0;
		}
		int indexOf(const Object& item) const throw()
		{
			for(int i=0;i<length;i++){
				if(items[i] == item)return i;
			}
			throw ElemanYok("item bulunamadi"); 
		}
		const Object& elementAt(int i) const throw()
		{
			if(i<0 || i>=length) throw ElemanYok("item bulunamadi"); 
			return items[i]; 
		}
		void remove(const Object& item) throw()
		{
			for(int i=0;i<length;i++){
				if(items[i] == item){
					removeAt(i);
					return;
				}
			}
			throw ElemanYok("item bulunamadi"); 
		}
		void removeAt(int i) throw()
		{
			if(i<0 || i>=length) throw ElemanYok("item bulunamadi"); 
			for(int j=i+1;j<length;j++) items[j - 1] = items[j];
			length--;
		}
		void add(const Object& yeni) //En sona ekler
		{			
			insert(length,yeni);				
		}
		void insert(int i,const Object& yeni) throw()
		{
			if(i<0 || i>length) throw Tasma("Indeks sinirlar disinda"); 
			if(length >= capacity) reserve(max(1,2*capacity)); //Yer yoksa 2 kat yer ayýr.
			for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
			items[i] = yeni;
			length++;					
		}
		const Object& first() const throw()
		{
			if(length == 0) throw ListeBos("Liste bos"); 
			return items[0];
		}
		const Object& last() const throw(){
			if(length == 0) throw ListeBos("Liste bos"); 
			return items[length-1];
		}
		void clear()
		{
			length = 0;
		}
		friend ostream& operator<<(ostream& screen,ArrayList<Object>& right){
			screen<<endl;
			for(int i=0;i<right.length;i++){
				screen<<right.items[i];
				if(i+1!=right.length)screen<<" || ";
			}
			return screen;
		}
		~ArrayList()
		{
			if(items != NULL) delete [] items;
		}
};

#endif