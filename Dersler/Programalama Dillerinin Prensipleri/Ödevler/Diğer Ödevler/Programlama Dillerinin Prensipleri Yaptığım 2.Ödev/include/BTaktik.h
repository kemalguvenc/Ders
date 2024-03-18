/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * BTaktik yapısı
 */

#ifndef HOMEWORK_BTAKTIK_H
#define HOMEWORK_BTAKTIK_H

#include "Taktik.h"

struct BTAKTIK {
    Taktik super;

    void (* BTaktikYokEt)(struct BTAKTIK*);
};

typedef struct BTAKTIK* BTaktik;

BTaktik BTaktikOlustur();

void BTaktikYokEt(BTaktik);

int BSavas(BTaktik this, int populasyon, int yemek);

#endif //HOMEWORK_BTAKTIK_H
