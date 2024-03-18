/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * BTaktik yapısının kaynak kodları
 */

#include "../include/BTaktik.h"

BTaktik BTaktikOlustur() {
    BTaktik this;
    this = malloc(sizeof(struct BTAKTIK));
    this -> super = TaktikOlustur();
    this -> super -> Savas = &BSavas;
    this -> BTaktikYokEt = &BTaktikYokEt;

    return this;
}

void BTaktikYokEt(BTaktik const this) {
    if (this == NULL)
        return;
    this -> super -> TaktikYokEt(this -> super);
    free(this);
}

// Bu savaş taktiğinde koloninin popülasyon ve yemek değerlerinin kareleri alınıp toplanır.
// Bu değerin 1000'i geçmemesi için 1000'le modu alınır.
// int değerinin taşmasından korunmak için negatif değer -1 ile çarpılır.
int BSavas(BTaktik const this, int populasyon, int yemek) {
    int deger = ((populasyon * populasyon) + (yemek * yemek)) % 1001;
    if (deger < 0)
        deger *= -1;

    return deger;
}
