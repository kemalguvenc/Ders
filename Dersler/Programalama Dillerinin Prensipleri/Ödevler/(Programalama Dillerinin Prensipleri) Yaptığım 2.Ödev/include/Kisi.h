// Kişi başlık dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#ifndef HOMEWORK_KISI_H
#define HOMEWORK_KISI_H

struct PERSON {
    char* nameSurname;
    double money;
    double percent;
    int number;

    double (* win)(struct PERSON* this);

    double (* lost)(struct PERSON* this);

    void (* delete)(struct PERSON* this);
};

typedef struct PERSON* Person;

Person newPerson(const char* informations);

double Person_win(Person this);

double Person_lost(Person this);

void Person_delete(Person this);

#endif //HOMEWORK_KISI_H
