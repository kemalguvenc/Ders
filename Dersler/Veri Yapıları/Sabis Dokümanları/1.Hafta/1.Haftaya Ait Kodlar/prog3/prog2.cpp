#include <iostream>
#include "Ogrenci.hpp"

using namespace std;


int main(int argc,char **argv){
	Ogrenci ogr1;
	Ogrenci ogr2(10,150);
	cout<<"\n---Program ciktisi---"<<endl;
	cout<<"Ogrenci 1"<<endl;
	cout<<"yas="<<ogr1.getirYas()<<endl;
	cout<<"boy="<<ogr1.getBoy()<<endl;	
	cout<<"Ogrenci 2"<<endl;
	cout<<"yas="<<ogr2.getirYas()<<endl;
	cout<<"boy="<<ogr2.getBoy()<<endl;
	
	ogr1.boyUzat(40);
	ogr1.yasIlerle(5);
	ogr2.boyUzat(30);
	ogr2.yasIlerle(3);
	
    cout<<"\n--boyUzat ve yasIlerle"<<endl;
	cout<<"Ogrenci 1"<<endl;
	cout<<"yas="<<ogr1.getirYas()<<endl;
	cout<<"boy="<<ogr1.getBoy()<<endl;	
	cout<<"Ogrenci 2"<<endl;
	cout<<"yas="<<ogr2.getirYas()<<endl;
	cout<<"boy="<<ogr2.getBoy()<<endl;
	
	
	return 0;
}