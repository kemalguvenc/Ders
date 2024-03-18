//Meyve.cpp
#include <Meyve.hpp>
Meyve::Meyve(double kalori){
	//kalori = kl;
    this->kalori=kalori;
}
double Meyve::getKalori()const{
	return kalori;
}