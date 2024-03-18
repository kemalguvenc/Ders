/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Oyun yapısının kaynak kodları
 */

#include "../include/Oyun.h"

int tur = 0;

// Dosyadaki metni ayrıştır. Her bir sayıyı bir string olarak saklar.
char** Ayristir(char* string);

// Ayrıştırılmış olan stringlerden popülasyon bilgilerini alıp koloniler oluşturur.
void KolonilerOlustur(Oyun, char*);

// Kolonileri savaştırır.
void Muharebe(Oyun this);

// Tur bittikten sonra yapılması gerekenleri yapar.
// Koloni üretim yapar; popülasyonu artar; yemek tüketir.
void TurBitir(Oyun this);

// Kolonilere ait bilgileri ekrana yazar.
void Ciz(Oyun this);

bool OyunBittiMi(Oyun this);

Oyun OyunOlustur(char* veri) {
    srand(time(NULL));
    Oyun this = malloc(sizeof(struct OYUN));
    this -> koloniSayisi = 0;
    this -> aTaktik = ATaktikOlustur();
    this -> bTaktik = BTaktikOlustur();
    this -> aUretim = AUretimOlustur();
    this -> bUretim = BUretimOlustur();
    this -> Baslat = &Baslat;
    this -> OyunYokEt = &OyunYokEt;
    KolonilerOlustur(this, veri);

    return this;
}

void Baslat(Oyun const this) {
    while (!OyunBittiMi(this)) {
        Ciz(this);
        Muharebe(this);
        TurBitir(this);
    }
    Ciz(this);
}

void OyunYokEt(Oyun const this) {
    for (int i = 0; i < this -> koloniSayisi; ++i) {
        Koloni koloni = this -> koloniler[i];
        koloni -> KoloniYokEt(koloni);
    }
    this -> aTaktik -> ATaktikYokEt(this -> aTaktik);
    this -> bTaktik -> BTaktikYokEt(this -> bTaktik);
    this -> aUretim -> AUretimYokEt(this -> aUretim);
    this -> bUretim -> BUretimYokEt(this -> bUretim);
}

// Ayrıştırılmış olan stringlerden popülasyon bilgilerini alıp koloniler oluşturur.
void KolonilerOlustur(Oyun this, char* veri) {
    char** koloniPopulasyonu = Ayristir(veri);
    for (int i = 0; koloniPopulasyonu[i] != NULL; ++i) {
        int populasyon = atoi(koloniPopulasyonu[i]);
        free(koloniPopulasyonu[i]);
        this -> koloniler[this -> koloniSayisi++] = KoloniOlustur(populasyon, this -> koloniSayisi);
    }
    free(koloniPopulasyonu);
}

// Dosyadaki metni ayrıştır. Her bir sayıyı bir string olarak saklar.
char** Ayristir(char* string) {
    const char delimiters[] = " ";
    char* token;
    char** koloniPopulasyonu = malloc(sizeof(char*) * MAX_KOLONI);

    for (int i = 0; i < MAX_KOLONI; ++i)
        koloniPopulasyonu[i] = NULL;

    token = strtok(string, delimiters);

    for (int i = 0; token != NULL; ++i) {
        koloniPopulasyonu[i] = strdup(token);
        token = strtok(NULL, delimiters);
    }
    free(string);
    return koloniPopulasyonu;
}

// Kolonileri savaştırır.
void Muharebe(Oyun const this) {
    Koloni koloni1;
    Koloni koloni2;
    int kazanilanYemek;
    // Bütün koloniler sırayla birbiriyle savaşır.
    for (int i = 0; i < this -> koloniSayisi; ++i) {
        koloni1 = this -> koloniler[i];
        // Koloni yaşamıyorsa diğer koloniye geçilir.
        if (!koloni1 -> YasiyorMu(koloni1))
            continue;
        for (int j = i + 1; j < this -> koloniSayisi; ++j) {
            koloni2 = this -> koloniler[j];
            // Koloni yaşamıyorsa diğer koloniye geçilir.
            if (!koloni2 -> YasiyorMu(koloni2))
                continue;
            // Savaş puanları kolonilerin taktik türüne göre hesaplanır.
            int savasPuani1 = (koloni1 -> taktikTur) ? (this -> aTaktik -> super -> Savas(this -> aTaktik,
                                                                                          koloni1 -> populasyon,
                                                                                          koloni1 -> yemek))
                                                     : (this -> bTaktik -> super -> Savas(this -> bTaktik,
                                                                                          koloni1 -> populasyon,
                                                                                          koloni1 -> yemek));
            int savasPuani2 = (koloni2 -> taktikTur) ? (this -> aTaktik -> super -> Savas(this -> aTaktik,
                                                                                          koloni2 -> populasyon,
                                                                                          koloni2 -> yemek))
                                                     : (this -> bTaktik -> super -> Savas(this -> bTaktik,
                                                                                          koloni2 -> populasyon,
                                                                                          koloni2 -> yemek));
            int sonuc = savasPuani1 - savasPuani2;
            // Savaş puanı büyük olan kazanır.
            if (sonuc > 0) {
                kazanilanYemek = koloni2 -> Kaybet(koloni2, sonuc);
                koloni1 -> Kazan(koloni1, kazanilanYemek);
            }
            else if (sonuc < 0) {
                kazanilanYemek = koloni1 -> Kaybet(koloni1, -1 * sonuc);
                koloni2 -> Kazan(koloni2, kazanilanYemek);
            }
                // Eğer savaş puanları eşitse popülasyonu büyük olan kazanır.
            else {
                sonuc = koloni1 -> populasyon - koloni2 -> populasyon;
                if (sonuc > 0) {
                    kazanilanYemek = koloni2 -> Kaybet(koloni2, 0);
                    koloni1 -> Kazan(koloni1, kazanilanYemek);
                }
                else if (sonuc < 0) {
                    kazanilanYemek = koloni1 -> Kaybet(koloni1, 0);
                    koloni2 -> Kazan(koloni2, kazanilanYemek);
                }
                    // Eğer popülasyonları da eşitse rastgele biri kazanır.
                else {
                    sonuc = rand() % 2;
                    if (sonuc == 0) {
                        kazanilanYemek = koloni2 -> Kaybet(koloni2, 0);
                        koloni1 -> Kazan(koloni1, kazanilanYemek);
                    }
                    else if (sonuc == 1) {
                        kazanilanYemek = koloni1 -> Kaybet(koloni1, 0);
                        koloni2 -> Kazan(koloni2, kazanilanYemek);
                    }
                }
            }
        }
    }
}

// Tur bittikten sonra yapılması gerekenleri yapar.
// Koloni üretim yapar; popülasyonu artar; yemek tüketir.
void TurBitir(Oyun const this) {
    // Koloniler savaştan sonra yemek üretimi yaparlar.
    // Ayrıca popülasyonları artar ve yemek tüketimi yaparlar.
    for (int i = 0; i < this -> koloniSayisi; ++i) {
        Koloni koloni = this -> koloniler[i];
        // Ölü koloniler ayıklanır.
        if (koloni -> YasiyorMu(koloni)) {
            int uretilenYemekMiktari = (koloni -> uretimTur) ? (this -> aUretim -> super -> Uret(this -> aUretim,
                                                                                                 koloni -> populasyon,
                                                                                                 koloni -> yemek))
                                                             : (this -> bUretim -> super -> Uret(this -> bUretim,
                                                                                                 koloni -> populasyon,
                                                                                                 koloni -> yemek));
            koloni -> Yenilenme(koloni, uretilenYemekMiktari);
        }
    }
}

// Kolonilere ait bilgileri ekrana yazar.
void Ciz(Oyun const this) {
    printf("-----------------------------------------------------------------------------------\n");
    printf("Tur Sayisi: %d\n", tur++);
    printf("Koloni          Populasyon          Yemek Stogu          Kazanma          Kaybetme\n");
    for (int i = 0; i < this -> koloniSayisi; ++i) {
        Koloni koloni = this -> koloniler[i];
        if (koloni -> YasiyorMu(koloni)) {
            printf("  %c                %-10d          %-10d          %-10d       %-10d\n", koloni -> simge,
                   koloni -> populasyon,
                   koloni -> yemek,
                   koloni -> kazandigiSavasSayisi, koloni -> kaybettigiSavasSayisi);
        }
        else {
            printf("  %c                --                  --                  --               --     \n",
                   koloni -> simge);
        }
    }
}

bool OyunBittiMi(Oyun const this) {
    int yasayanKoloniSayisi = 0;
    Koloni koloni;
    for (int i = 0; i < this -> koloniSayisi; ++i) {
        koloni = this -> koloniler[i];
        if (koloni -> YasiyorMu(koloni))
            ++yasayanKoloniSayisi;
        if (yasayanKoloniSayisi > 1)
            return false;
    }
    return true;
}