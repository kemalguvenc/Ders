#include "Ogrenci.hpp"
Ogrenci::Ogrenci(){//constructor
	yas=0;
	boy=30;
}
Ogrenci::Ogrenci(int y,double boy){//constructor
	yas=y;
	this->boy=boy;
}
void Ogrenci::yasIlerle(int yas){
	this->yas+=yas;
}
void Ogrenci::boyUzat(double boy){
	this->boy+=boy;
}
int Ogrenci::getirYas(){
	return yas;
}
double Ogrenci::getBoy(){
	return boy;
}	
