/**
* @file main.cpp
* @description Ana Program
* @course 1.Öğretim - A grubu
* @assignment 1.Ödev
* @date 09.11.2021
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
*/

#include <fstream>
#include "List.hpp"

int main(){

    // Eğer program makefile üzerinden derlenip çalıştırılırsa veriler dosyasına bu şekilde erişiliyor.
    ifstream r_file("./Veri.txt");
    
    // Eğer program main.exe üzerinden çalıştırılırsa veriler dosyasına bu şekilde erişiliyor.
    if(!r_file.is_open())
        r_file.open("../Veri.txt");
    
    // Dosyanın açılıp açılmadığı kontrol ediliyor. Eğer açılmadıysa program hata gösterip, kendini kapatıyor.
    if(r_file.is_open()){

        List list;
        string command;
        
        // Dosya okunur.
        while(!r_file.eof()){
            // İlk satır okunur.
            getline(r_file, command);

            // Eğer okunulan satır boşsa o satır otomatik olarak atlanır.
            if (command.size()==0){
                continue;
            }

            // Okunulan komuttaki indeks bilgisinin almak için "(" ile "#" işaretleri arasındaki alan bulunur ve sayıya dönüştürülür.
            size_t bracket_left = command.find('(');
            size_t sharp = command.find('#');
            int index=stoi(command.substr(bracket_left+1,sharp-bracket_left-1));

            // Komutun ilk harfinin durumu ekleme ya da silme yapılacağını söyler.
            switch (command.front())
            {
            case 'E':
            case 'e':
                {
                    // Okunulan komuttan eklenecek ifadeyi almak için "#" ile ")" işaretleri arasındaki alan bulunur ve listeye eklenir.
                    size_t brack_right = command.find(')');
                    string item=command.substr(sharp+1,brack_right-sharp-1);
                    list.Add(index, item);
                    break;
                }
            case 'S':
            case 's':
                {
                    // Verilen indeksteki veri listeden silinir.
                    list.Remove(index);
                    break;
                }
            }

        }

        // Dosya kapatılır.
        r_file.close();

        // Liste gösterilir.
        cout << list;
    }
    
    else{
        cout << "Veri.txt dosyasi bulunamadi. Veri.txt dosyasının \"makefile\" dosyasinin yaninda oldugundan emin olun. Program kapatiliyor...";
    }

    system("PAUSE");

    return 0;
}