/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * ATaktik yapısı
 */

#ifndef HOMEWORK_ATAKTIK_H
#define HOMEWORK_ATAKTIK_H

#include "Taktik.h"

struct ATAKTIK {
    Taktik super;

    void (* ATaktikYokEt)(struct ATAKTIK*);
};

typedef struct ATAKTIK* ATaktik;

ATaktik ATaktikOlustur();

void ATaktikYokEt(ATaktik);

int ASavas(ATaktik, int populasyon, int yemek);

#endif //HOMEWORK_ATAKTIK_H
