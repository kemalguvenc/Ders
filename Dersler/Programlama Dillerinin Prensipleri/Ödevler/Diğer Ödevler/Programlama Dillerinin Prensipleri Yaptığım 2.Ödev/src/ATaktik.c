/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * ATaktik yapısının kaynak kodları
 */

#include "../include/ATaktik.h"

ATaktik ATaktikOlustur() {
    ATaktik this;
    this = malloc(sizeof(struct ATAKTIK));
    this -> super = TaktikOlustur();
    this -> super -> Savas = &ASavas;
    this -> ATaktikYokEt = &ATaktikYokEt;

    return this;
}

void ATaktikYokEt(ATaktik const this) {
    if (this == NULL)
        return;
    this -> super -> TaktikYokEt(this -> super);
    free(this);
}

// Bu savaş taktiğinde koloninin popülasyon ve yemek değerleri çarpılır.
// Bu değerin 1000'i geçmemesi için 1000'le modu alınır.
// int değerinin taşmasından korunmak için negatif değer -1 ile çarpılır.
int ASavas(ATaktik const this, int populasyon, int yemek) {
    int deger = (populasyon * yemek) % 1001;
    if (deger < 0)
        deger *= -1;

    return deger;
}
