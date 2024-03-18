#include <iostream>
#include "Ogrenci.hpp"
#include "Meyve.hpp"
#include "Sebze.hpp"
using namespace std;


int main(int argc,char **argv){
	Ogrenci o1(5,135,52);
	
	//Nesneyi ekrana yazdır
	cout<<o1<<endl;

	Sebze fasulye(1200);
	o1.YemekYe<Sebze>(fasulye);
	Meyve kavun(2000);
	o1.YemekYe<Meyve>(kavun);
	
	//Nesneyi ekrana yazdır
	cout<<o1<<endl;
	
	return 0;
}