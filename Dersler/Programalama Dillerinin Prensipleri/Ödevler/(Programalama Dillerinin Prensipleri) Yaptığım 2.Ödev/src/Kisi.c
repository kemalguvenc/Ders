// Kişi kaynak dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#include "../include/Kisi.h"
#include "stdlib.h"
#include "string.h"

Person newPerson(const char* const informations) {
    Person this = malloc(sizeof(struct PERSON));

    char* tempInformations = strdup(informations);
    char* token;

    token = strtok(tempInformations, "#");
    this->nameSurname = strdup(token);
    token = strtok(NULL, "#");
    this->money = strtof(token, NULL);
    token = strtok(NULL, "#");
    this->percent = strtof(token, NULL);
    token = strtok(NULL, "#");
    this->number = strtol(token, NULL, 10);
    token = strtok(NULL, "#");

    free(tempInformations);

    this->win = &Person_win;
    this->lost = &Person_lost;
    this->delete = &Person_delete;

    return this;
}

double Person_win(Person const this) {
    double giveMoney = this->money * this->percent;
    this->money += (giveMoney * 9);
    return giveMoney * 9;
}

double Person_lost(Person const this) {
    double giveMoney = this->money * this->percent;
    this->money -= giveMoney;
    return giveMoney;
}

void Person_delete(Person const this) {
    if (this == NULL)
        return;

    free(this->nameSurname);
    free(this);
}