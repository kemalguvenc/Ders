/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Koloni yapısı
 */

#ifndef HOMEWORK_KOLONI_H
#define HOMEWORK_KOLONI_H

#include "stdlib.h"
#include "stdbool.h"

enum TaktikTur {
    ATaktikTur, BTaktikTur
};
enum UretimTur {
    AUretimTur, BUretimTur
};

struct KOLONI {
    int populasyon;
    int yemek;
    int kazandigiSavasSayisi;
    int kaybettigiSavasSayisi;
    char simge;
    enum TaktikTur taktikTur;
    enum UretimTur uretimTur;

    void (* Kazan)(struct KOLONI*, int);

    int (* Kaybet)(struct KOLONI*, int);

    void (* Yenilenme)(struct KOLONI*, int);

    bool (* YasiyorMu)(struct KOLONI*);

    void (* KoloniYokEt)(struct KOLONI*);
};

typedef struct KOLONI* Koloni;

Koloni KoloniOlustur(int, char);

// Eğer koloni bir savaşı kazanırsa parametre olarak aldığı değeri yemek miktarına ekler.
void Kazan(Koloni, int);

// Eğer koloni bir savaşı kaybederse parametre olarak aldığı değeri oranın yemek ve popülasyon kaybeder.
// Popülasyonun kaybettiği yemek miktarını diğer kolonin de bilebilmesi için bu değeri döndürür.
int Kaybet(Koloni, int);

// Koloninin savaştan sonra yapması gereken işleri yapar.
// Koloni üretim yapar; popülasyonu artar; yemek tüketir.
void Yenilenme(Koloni, int);

bool YasiyorMu(Koloni);

void KoloniYokEt(Koloni);

#endif
