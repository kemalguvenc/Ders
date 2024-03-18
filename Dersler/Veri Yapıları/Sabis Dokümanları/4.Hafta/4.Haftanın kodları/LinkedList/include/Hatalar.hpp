#ifndef HATALAR_HPP
#define HATALAR_HPP
#include "Hata.hpp"
class ListeSonu : public Hata{
	public:
		ListeSonu(string msg="Listenin sonu") : Hata(msg) { }
};

class NullHatasi : public Hata{
	public:
		NullHatasi(string msg="NULL hatasi") : Hata(msg) { }
};

class ListeBos : public Hata{
	public:
		ListeBos(string msg="Liste bos") : Hata(msg) { }
};

class Tasma : public Hata{
	public:
		Tasma(string msg="Tasma hatasi") : Hata(msg) { }
};

class ElemanYok : public Hata{
	public:
		ElemanYok(string msg="Listede eleman bulunamadi") : Hata(msg) { }
};
#endif