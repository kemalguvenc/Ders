#ifndef HATA_HPP
#define HATA_HPP

#include <iostream>
using namespace std;
class Hata{
	private:
		string mesaj;
	public:
		Hata(string);
		string Mesaj() const;
};
#endif