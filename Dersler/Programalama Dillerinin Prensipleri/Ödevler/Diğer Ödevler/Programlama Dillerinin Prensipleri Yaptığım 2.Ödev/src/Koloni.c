/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Koloni yapısının kaynak kodları
 */

#include "../include/Koloni.h"

// Kendisine verilen yüzde (örn %10) değeri kadar koloninin popülasyonunu arttırır.
void YuzdeselPopulasyonArttir(Koloni, int);

// Kendisine verilen yüzde (örn %10) değeri kadar koloninin popülasyonunu azaltır.
void YuzdeselPopulasyonAzalt(Koloni, int);

// Kendisine verilen yüzde (örn %10) değeri kadar koloninin yemek miktarını arttırır.
int YuzdeselYemekAzalt(Koloni this, int yuzde);

// Kendisine verilen değer kadar koloninin yemek miktarını arttırır.
void SayisalYemekArttir(Koloni, int);

// Kendisine verilen değer kadar koloninin yemek miktarını azaltır.
void SayisalYemekAzalt(Koloni, int);

Koloni KoloniOlustur(int populasyon, char simge) {
    Koloni this;
    this = malloc(sizeof(struct KOLONI));

    this -> populasyon = populasyon;
    this -> yemek = populasyon * populasyon;
    this -> kazandigiSavasSayisi = 0;
    this -> kaybettigiSavasSayisi = 0;
    this -> simge = (simge + 168);
    this -> taktikTur = rand() % 2;
    this -> uretimTur = rand() % 2;

    this -> Kazan = &Kazan;
    this -> Kaybet = &Kaybet;
    this -> Yenilenme = &Yenilenme;
    this -> YasiyorMu = &YasiyorMu;
    this -> KoloniYokEt = &KoloniYokEt;

    return this;
}

// Eğer koloni bir savaşı kazanırsa parametre olarak aldığı değeri yemek miktarına ekler.
void Kazan(Koloni this, int kazanilanYemek) {
    SayisalYemekArttir(this, kazanilanYemek);
    ++this -> kazandigiSavasSayisi;
}

// Eğer koloni bir savaşı kaybederse parametre olarak aldığı değeri oranın yemek ve popülasyon kaybeder.
// Popülasyonun kaybettiği yemek miktarını diğer kolonin de bilebilmesi için bu değeri döndürür.
int Kaybet(Koloni const this, int savasPuaniFarki) {
    int savasPuaniYuzdesi = savasPuaniFarki / 10;
    int kaybedilenYemek = YuzdeselYemekAzalt(this, savasPuaniYuzdesi);
    YuzdeselPopulasyonAzalt(this, savasPuaniYuzdesi);
    ++this -> kaybettigiSavasSayisi;

    return kaybedilenYemek;
}

// Koloninin savaştan sonra yapması gereken işleri yapar.
// Koloni üretim yapar; popülasyonu artar; yemek tüketir.
void Yenilenme(Koloni const this, int uretilenYemekMiktari) {
    SayisalYemekArttir(this, uretilenYemekMiktari);
    YuzdeselPopulasyonArttir(this, 20);
    SayisalYemekAzalt(this, this -> populasyon * 2);
}

bool YasiyorMu(Koloni const this) {
    if (this -> populasyon <= 0 || this -> yemek <= 0)
        return false;
    else
        return true;
}

void KoloniYokEt(Koloni const this) {
    if (this == NULL)
        return;

    free(this);
}

// Kendisine verilen yüzde (örn %10) değeri kadar koloninin popülasyonunu arttırır.
void YuzdeselPopulasyonArttir(Koloni const this, int yuzde) {
    yuzde += 100;
    this -> populasyon = this -> populasyon * yuzde / 100;
}

// Kendisine verilen yüzde (örn %10) değeri kadar koloninin popülasyonunu azaltır.
void YuzdeselPopulasyonAzalt(Koloni const this, int yuzde) {
    yuzde = 100 - yuzde;
    this -> populasyon = this -> populasyon * yuzde / 100;
}

// Kendisine verilen yüzde (örn %10) değeri kadar koloninin yemek miktarını arttırır.
int YuzdeselYemekAzalt(Koloni const this, int yuzde) {
    int kaybedilenYemek = this -> yemek;
    yuzde = 100 - yuzde;
    this -> yemek = this -> yemek * yuzde / 100;
    kaybedilenYemek -= this -> yemek;

    return kaybedilenYemek;
}

// Kendisine verilen değer kadar koloninin yemek miktarını arttırır.
void SayisalYemekArttir(Koloni const this, int sayi) {
    this -> yemek += sayi;
}

// Kendisine verilen değer kadar koloninin yemek miktarını azaltır.
void SayisalYemekAzalt(Koloni const this, int sayi) {
    this -> yemek -= sayi;
}
