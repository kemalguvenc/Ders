#include "Ogrenci.hpp"

Ogrenci::Ogrenci(){//constructor
	yas=0;
	boy=30;
	kilo=1;
}
Ogrenci::Ogrenci(int y,double boy,double kl){//constructor
	yas=y;
	this->boy=boy;
	kilo=kl;
}
void Ogrenci::yasIlerle(int yas){
	this->yas+=yas;
}
void Ogrenci::boyUzat(double boy){
	this->boy+=boy;
}
int Ogrenci::getYas(){
	return yas;
}
double Ogrenci::getBoy(){
	return boy;
}	
double Ogrenci::getKilo(){
	return kilo;
}
void Ogrenci::yemekYe(Sebze sebze){
	kilo+=sebze.getKalori()/1000;
	
}
void Ogrenci::yemekYe(Meyve meyve){
	kilo+=meyve.getKalori()/1000;
}
