#ifndef OGRENCI_HPP
#define OGRENCI_HPP
#include <iostream>
#include "Meyve.hpp"
#include "Sebze.hpp"
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
		void yemekYe(Sebze);
		void yemekYe(Meyve);
};
#endif