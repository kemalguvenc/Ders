/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Temel üretim yapısı
 */

#ifndef HOMEWORK_URETIM_H
#define HOMEWORK_URETIM_H

#include "stdlib.h"

struct URETIM {
    void (* UretimYokEt)(struct URETIM*);

    int (* Uret)();
};

typedef struct URETIM* Uretim;

Uretim UretimOlustur();

void UretimYokEt(Uretim);

#endif //HOMEWORK_URETIM_H
