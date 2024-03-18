/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Temel taktik yapısının kaynak kodları
 */

#include "../include/Taktik.h"

Taktik TaktikOlustur() {
    Taktik this = malloc(sizeof(struct TAKTIK));
    this -> TaktikYokEt = &TaktikYokEt;
    return this;
}

void TaktikYokEt(Taktik const this) {
    if (this == NULL)
        return;
    free(this);
}
