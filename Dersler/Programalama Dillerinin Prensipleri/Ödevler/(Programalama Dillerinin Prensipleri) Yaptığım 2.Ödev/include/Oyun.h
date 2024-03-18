// Oyun başlık dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#ifndef HOMEWORK_OYUN_H
#define HOMEWORK_OYUN_H

#include "Dosya.h"

struct GAME {
    DoublyLinkedList people;
    DoublyLinkedList numbers;
    unsigned int tour;
    unsigned int luckyNumber;
    double balance;
    Person theRichest;

    void (* start)(struct GAME* this);

    void (* delete)(struct GAME* this);
};

typedef struct GAME* Game;

Game newGame(const char* peoplePath, const char* numbersPath);

void Game_start(Game this);

void Game_delete(Game this);

#endif //HOMEWORK_OYUN_H