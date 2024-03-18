#include "Hata.hpp"

Hata::Hata(string msg){
	mesaj=msg;
}
string Hata::Mesaj() const{
	return mesaj;
}