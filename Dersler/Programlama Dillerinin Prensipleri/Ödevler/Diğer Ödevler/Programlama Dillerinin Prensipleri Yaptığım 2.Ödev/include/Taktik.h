/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Temel taktik yapısı
 */

#ifndef HOMEWORK_TAKTIK_H
#define HOMEWORK_TAKTIK_H

#include "stdlib.h"

struct TAKTIK {
    void (* TaktikYokEt)(struct TAKTIK*);

    int (* Savas)();
};

typedef struct TAKTIK* Taktik;

Taktik TaktikOlustur();

void TaktikYokEt(Taktik);

#endif //HOMEWORK_TAKTIK_H
