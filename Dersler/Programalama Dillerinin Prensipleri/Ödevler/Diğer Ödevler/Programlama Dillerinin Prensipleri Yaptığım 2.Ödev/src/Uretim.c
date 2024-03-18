/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Temel üretim yapısının kaynak kodları
 */

#include "../include/Uretim.h"

Uretim UretimOlustur() {
    Uretim this;
    this = malloc(sizeof(struct URETIM));
    this -> UretimYokEt = &UretimYokEt;
    return this;
}

void UretimYokEt(Uretim this) {
    if (this == NULL)
        return;
    free(this);
}
