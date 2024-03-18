#include <iostream>
#include "Ogrenci.hpp"
#include "Meyve.hpp"
#include "Sebze.hpp"
using namespace std;


int main(int argc,char **argv){
	Ogrenci o1(5,135,52);
	cout<<"Ogrenci :"<<endl;
	cout<<"Yas :"<<o1.getYas()<<endl;
	cout<<"Boy :"<<o1.getBoy()<<endl;
	cout<<"Kilo :"<<o1.getKilo()<<endl;
	
	Sebze fasulye(1200);
	o1.yemekYe(fasulye);
	Meyve kavun(2000);
	o1.yemekYe(kavun);
	/*
	o1.YemekYe<Sebze>(fasulye);
	Meyve kavun(2000);
	o1.YemekYe<Meyve>(kavun);
	*/
	cout<<"Ogrenci :"<<endl;
	cout<<"Yas :"<<o1.getYas()<<endl;
	cout<<"Boy :"<<o1.getBoy()<<endl;
	cout<<"Kilo :"<<o1.getKilo()<<endl;
	return 0;
	
	
	return 0;
}