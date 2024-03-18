/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * BUretim yapısı
 */

#ifndef UNTITLED_BURETIM_H
#define UNTITLED_BURETIM_H

#include "Uretim.h"

struct BURETIM {
    Uretim super;

    void (* BUretimYokEt)(struct BURETIM*);
};

typedef struct BURETIM* BUretim;

BUretim BUretimOlustur();

void BUretimYokEt(BUretim);

int BUret(BUretim this, int populasyon, int yemek);

#endif //UNTITLED_BURETIM_H
