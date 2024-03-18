/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * BUretim yapısının kaynak kodları
 */

#include "../include/BUretim.h"

BUretim BUretimOlustur() {
    BUretim this;
    this = malloc(sizeof(struct BURETIM));
    this -> super = UretimOlustur();
    this -> super -> Uret = &BUret;
    this -> BUretimYokEt = &BUretimYokEt;

    return this;
}

void BUretimYokEt(BUretim const this) {
    if (this == NULL)
        return;

    this -> super -> UretimYokEt(this -> super);
    free(this);
}

// Bu üretim taktiğinde koloninin popülasyon ve yemek değerleri birbiriyle toplanır.
// Bu değerin 10'u geçmemesi için 10'la modu alınır.
// int değerinin taşmasından korunmak için negatif değer -1 ile çarpılır.
int BUret(BUretim const this, int populasyon, int yemek) {
    int deger = (populasyon + yemek) % 10;
    if (deger < 0)
        deger *= -1;

    return deger;
}
