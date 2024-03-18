// Binary Search algoritmasının yinelemeli olarak arayan program.

#include <iostream>
using namespace std;

bool binary_searching(int *dizi, int baslangic, int son, int aranan){
    if(son<baslangic) return false;
    
    int orta=(baslangic+son)/2;
    
    if(dizi[orta]==aranan) return true;
    if(dizi[orta]<aranan) return binary_searching(dizi, orta+1, son, aranan);
    return binary_searching(dizi, baslangic, orta-1, aranan);
}

int main(int argc, char** argv) {
    
    int dizi[]={0,3,6,9,23,34,45,59,68,76,77,85,97};
    
    int aranan;
    
    cout << "Aradiginiz sayiyi giriniz: ";
    cin >> aranan;
    
    bool sonuc=binary_searching(dizi, 0, 12, aranan);
    
    if(sonuc==true) cout << "Aradiginiz sayi dizide var.";
    else cout << "Aradiginiz sayi dizide yok.";
    
    return 0;
}
