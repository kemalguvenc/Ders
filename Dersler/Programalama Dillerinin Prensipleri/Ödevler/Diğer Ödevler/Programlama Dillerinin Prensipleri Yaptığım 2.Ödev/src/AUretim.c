/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * AUretim yapısının kaynak kodları
 */

#include "../include/AUretim.h"

AUretim AUretimOlustur() {
    AUretim this;
    this = malloc(sizeof(struct AURETIM));
    this -> super = UretimOlustur();
    this -> super -> Uret = &AUret;
    this -> AUretimYokEt = &AUretimYokEt;

    return this;
}

void AUretimYokEt(AUretim const this) {
    if (this == NULL)
        return;

    this -> super -> UretimYokEt(this -> super);
    free(this);
}

// Bu üretim taktiğinde koloninin popülasyon ve yemek değerleri birbirinden çıkarılır.
// Bu değerin 10'u geçmemesi için 10'la modu alınır.
int AUret(AUretim const this, int populasyon, int yemek) {
    int deger = (populasyon - yemek) % 10;

    return deger;
}
