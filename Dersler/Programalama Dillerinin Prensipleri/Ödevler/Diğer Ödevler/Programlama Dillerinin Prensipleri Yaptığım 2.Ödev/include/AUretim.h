/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * AUretim yapısı
 */

#ifndef UNTITLED_AURETIM_H
#define UNTITLED_AURETIM_H

#include "Uretim.h"

struct AURETIM {
    Uretim super;

    void (* AUretimYokEt)(struct AURETIM*);
};

typedef struct AURETIM* AUretim;

AUretim AUretimOlustur();

void AUretimYokEt(AUretim);

int AUret(AUretim this, int populasyon, int yemek);

#endif //UNTITLED_AURETIM_H
