// Dosya başlık dosyası
// Muhammet Kemal Güvenç - B181210076 - 1/B

#ifndef HOMEWORK_DOSYA_H
#define HOMEWORK_DOSYA_H

#include "DoublyLinkedList.h"

struct MYFILE {
    char* const filePath;

    DoublyLinkedList (* read)(const struct MYFILE* myFile, dataType type);

    void (* delete)(struct MYFILE* myFile);
};

typedef struct MYFILE* MyFile;

MyFile newMyFile(const char* filePath);

DoublyLinkedList MyFile_read(const struct MYFILE* myFile, dataType type);

void MyFile_delete(MyFile myFile);

#endif //HOMEWORK_DOSYA_H
