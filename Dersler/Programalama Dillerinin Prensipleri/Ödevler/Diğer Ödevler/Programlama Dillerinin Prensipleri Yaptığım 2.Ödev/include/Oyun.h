/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Oyun yapısı
 */

#ifndef HOMEWORK_OYUN_H
#define HOMEWORK_OYUN_H

#include "Koloni.h"
#include "ATaktik.h"
#include "BTaktik.h"
#include "AUretim.h"
#include "BUretim.h"
#include "stdio.h"
#include "string.h"
#include "time.h"

#define MAX_KOLONI 85

struct OYUN {
    Koloni koloniler[MAX_KOLONI];
    int koloniSayisi;
    ATaktik aTaktik;
    BTaktik bTaktik;
    AUretim aUretim;
    BUretim bUretim;

    void (* Baslat)(struct OYUN*);

    void (* OyunYokEt)(struct OYUN*);
};

typedef struct OYUN* Oyun;

Oyun OyunOlustur(char*);

void Baslat(Oyun);

void OyunYokEt(Oyun);

#endif //HOMEWORK_OYUN_H
