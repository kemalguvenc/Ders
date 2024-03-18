#ifndef OGRENCI_HPP
#define OGRENCI_HPP
class Ogrenci{
	private: 
		int yas;
		double boy;
		
		double kilo;
	public:
		Ogrenci();
		Ogrenci(int,double);
		void yasIlerle(int);
		void boyUzat(double);
		int getirYas();
		double getBoy();
		
		void yemekYe(Sebze);
		void yemekYe(Meyve);
};
#endif