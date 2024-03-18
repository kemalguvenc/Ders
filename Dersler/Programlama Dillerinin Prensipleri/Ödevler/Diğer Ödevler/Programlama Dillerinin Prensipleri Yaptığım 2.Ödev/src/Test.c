/*
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 21.05.2023
 * Program
 */

#include "../include/Oyun.h"

#define MAX_LENGTH 500

int main(int argc, char** argv) {

    if (argc == 1) {
        printf("Lutfen parametre giriniz!");
        return 0;
    }

    char* string = malloc(sizeof(char) * MAX_LENGTH);

    // Verilen bilgiler bir string içinde toplanır.
    strcpy(string, argv[1]);
    for (int i = 2; i < argc; ++i) {
        strcat(string, " ");
        strcat(string, argv[i]);
    }

    Oyun oyun = OyunOlustur(string);
    oyun -> Baslat(oyun);
    oyun -> OyunYokEt(oyun);
    return 0;
}
