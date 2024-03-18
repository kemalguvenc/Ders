// Oyun kaynak dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#include "../include/Oyun.h"
#include "windows.h"
#include "stdio.h"

Game newGame(const char* peoplePath, const char* numbersPath) {
    Game this = malloc(sizeof(struct GAME));

    MyFile peopleFile = newMyFile(peoplePath);
    MyFile numbersFile = newMyFile(numbersPath);

    this->people = peopleFile->read(peopleFile, enumPerson);
    this->numbers = numbersFile->read(numbersFile, enumInteger);
    this->tour = 0;
    this->luckyNumber = 0;
    this->balance = 0;
    this->theRichest = NULL;

    this->start = &Game_start;
    this->delete = &Game_delete;

    peopleFile->delete(peopleFile);
    numbersFile->delete(numbersFile);

    return this;
}

void gotoXY(const short x, const short y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

Person whoIsTheRichest(const struct DOUBLYLINKEDLIST* const people) {
    if (people->size == 0)
        return NULL;
    Node node = people->head->front;
    Person theRichest = node->data;
    node = node->front;
    for (int i = 0; i < people->size - 1; ++i) {
        if (theRichest->money < ((Person) node->data)->money)
            theRichest = node->data;
        node = node->front;
    }
    return theRichest;
}

void drawTop(Game const this, short x, short y) {
    gotoXY(x, y);
    printf("#############################################");
    gotoXY(x, ++y);
    printf("##               SANSLI SAYI: %-2i           ##", this->luckyNumber);
    gotoXY(x, ++y);
    printf("#############################################");
}

void drawBotoom(Game const this, short x, short y) {
    gotoXY(x, y++);
    printf("#############################################");
    gotoXY(x, y++);
    printf("##               TUR: %-5i                ##", this->tour);
    gotoXY(x, y++);
    printf("##       MASA BAKIYE: %-10.0fTL         ##", this->balance);
    gotoXY(x, y++);
    printf("##                                         ##");
    gotoXY(x, y++);
    printf("##-----------------------------------------##");
    gotoXY(x, y++);
    printf("##               EN ZENGIN KISI            ##");
    gotoXY(x, y++);
    printf("##               %-20s      ##", this->theRichest->nameSurname);
    gotoXY(x, y++);
    printf("##       BAKIYESI: %-10.0f              ##", this->theRichest->money);
    gotoXY(x, y++);
    printf("##                                         ##");
    gotoXY(x, y);
    printf("#############################################");
}

void draw(Game const this, short x, short y) {
    if (this->theRichest == NULL)
        return;
    drawTop(this, x, y);
    y += 3;
    drawBotoom(this, x, y);
}

void finish(Game const this, short x, short y) {
    gotoXY(x, y++);
    printf("#############################################");
    gotoXY(x, y++);
    printf("##               TUR: %-5i                ##", this->tour);
    gotoXY(x, y++);
    printf("##       MASA BAKIYE: %-10.0fTL         ##", this->balance);
    gotoXY(x, y++);
    printf("##                                         ##");
    gotoXY(x, y++);
    printf("##-----------------------------------------##");
    gotoXY(x, y++);
    printf("##               OYUN BITTI                ##");
    gotoXY(x, y++);
    printf("##                                         ##");
    gotoXY(x, y++);
    printf("##                                         ##");
    gotoXY(x, y++);
    printf("##                                         ##");
    gotoXY(x, y);
    printf("#############################################");
}

void nextTour(Game const this) {
    ++(this->tour);
    Node node = this->people->getFirst(this->people);
    Person person;
    while (node != this->people->head) {
        person = (Person) node->data;
        if (person->number == this->luckyNumber)
            this->balance -= person->win(person);
        else
            this->balance += person->lost(person);

        if (person->money < 1000) {
            node = node->back;
            this->people->remove(this->people, node->front);
        }
        node = node->front;
    }
    this->theRichest = whoIsTheRichest(this->people);
}

void Game_start(Game const this) {
    Node node = this->numbers->getFirst(this->numbers);
    while (this->people->size) {
        system("cls");
        this->luckyNumber = *((int*) node->data);
        nextTour(this);
        draw(this, 40, 5);
        node = node->front;
    }
    system("cls");
    finish(this, 40, 8);
}

void Game_delete(Game const this) {
    this->people->delete(this->people);
    this->numbers->delete(this->numbers);
    free(this);
}