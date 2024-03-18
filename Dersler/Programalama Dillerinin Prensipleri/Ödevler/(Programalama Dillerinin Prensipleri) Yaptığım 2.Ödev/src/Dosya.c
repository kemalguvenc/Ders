// Dosya kaynak dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#include "../include/Dosya.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

MyFile newMyFile(const char* const filePath) {
    MyFile this = malloc(sizeof(struct MYFILE));

    *(char**) &(this->filePath) = strdup(filePath);
    this->read = &MyFile_read;
    this->delete = &MyFile_delete;

    return this;
}

DoublyLinkedList MyFile_read(const struct MYFILE* const myFile, const dataType type) {
    FILE* file = fopen(myFile->filePath, "r");
    DoublyLinkedList doublyLinkedList = newDoublyLinkedList(type);
    char* readedLine = malloc(sizeof(char) * 50);
    if (type == enumPerson) {
        while (fgets(readedLine, 50, file)) {
            Person person = newPerson(readedLine);
            doublyLinkedList->append(doublyLinkedList, person);
        }
    } else if (type == enumInteger) {
        while (fgets(readedLine, 50, file)) {
            int* number = malloc(sizeof(int));
            *number = strtol(readedLine, NULL, 10);
            doublyLinkedList->append(doublyLinkedList, number);
        }
    }
    free(readedLine);
    fclose(file);
    return doublyLinkedList;
}

void MyFile_delete(MyFile const myFile) {
    free(myFile->filePath);
    free(myFile);
}