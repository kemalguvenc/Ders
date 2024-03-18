#ifndef OGRENCI_HPP
#define OGRENCI_HPP
#include <iostream>
#include "Meyve.hpp"
#include "Sebze.hpp"
using namespace std;
class Ogrenci{
	private: 
		int yas;
		double boy;
		double kilo;
	public:
		Ogrenci();
		Ogrenci(int,double,double);
		void yasIlerle(int);
		void boyUzat(double);
		int getYas();
		double getBoy();
		double getKilo();
	
		//void yemekYe(Sebze);
		//void yemekYe(Meyve);
		//Yukarıdakilerin yerine ir tane template fonksiyon tanımlanabilir
		
		template <typename YIYECEK>
		void YemekYe(YIYECEK yemek){
			kilo += yemek.getKalori()/1000;
		}
		
		//nesne'nin istenilen alanlarını yazdırmak için
		friend ostream& operator<<(ostream& ekran,Ogrenci& sag){
			ekran<<"Ogrenci :"<<endl;
			ekran<<"Yas :"<<sag.yas<<endl;
			ekran<<"Boy :"<<sag.boy<<endl;
			ekran<<"Kilo :"<<sag.kilo<<endl;
			return ekran;
		}
};
#endif