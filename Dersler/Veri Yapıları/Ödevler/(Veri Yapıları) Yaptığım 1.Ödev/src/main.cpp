/**
 * @file            main.cpp
 * @description                 Programın ana kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                1.Ödev
 * @date            22.11.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include "List.hpp"
#include <fstream>

int main(){
    
    // Eğer program makefile üzerinden derlenip çalıştırılırsa veriler dosyasına bu şekilde erişiliyor.
    ifstream r_file("./doc/Sayilar.txt");
    
    // Eğer program main.exe üzerinden çalıştırılırsa veriler dosyasına bu şekilde erişiliyor.
    if(!r_file.is_open())
        r_file.open("../doc/Sayilar.txt");
    
    // Dosyanın açılıp açılmadığı kontrol ediliyor. Eğer açılmadıysa program hata gösterip, kendini kapatıyor.
    if(r_file.is_open()){
        // Veriler dosyasının ilk satırından kaç tane dizi olduğunu öğreniyor.
        int list_number=-1;
        r_file >> list_number;
        
        if(list_number==-1){
            cout << "Dosya bos oldugu icin program kapatiliyor..." << endl;
            r_file.close();
            return 0;
        }
        
        List lists[list_number];
        
        int item_number;
        
        // Satırların başındaki değerden satırda kaç tane değer olduğunu öğreniyor.
        for(int i=0;i<list_number;i++){
            r_file >> item_number;
            int list_array[item_number];
            
            for(int j=0;j<item_number;j++){
                r_file >> list_array[j];
            }
            
            lists[i].add_array(list_array, item_number);
            
        }
        
        r_file.close();
        
        cout << "--- Olusturulan Listeler ---" << endl;
        
        for (int i=0; i<list_number; i++) {
            cout << i+1 << ".Liste=> ";
            lists[i].show();
            cout << endl;
        }
        
        // İlk listeyi, hem en küçük hem de en büyük liste olarak varsayıp sonra diğerleri karşılaştırıyor.
        List *big_list=&lists[0];
        List *small_list=&lists[0];
        
        for(int i=1;i<list_number;i++){
            if(lists[i].is_big(big_list))           // Büyükse
                big_list=&lists[i];
            else if(!lists[i].is_big(small_list))   //Küçükse
                small_list=&lists[i];
        }
        
        cout << endl;
        
        cout << "En Buyuk Liste Degerler: ";
        big_list->show();
        cout << endl;
        cout << "En Kucuk Liste Degerler: ";
        small_list->show();
        cout << endl;
        
        big_list->cross_lists(small_list);
        
        cout << endl << "--- Caprazlama Olduktan Sonra ---" << endl;
        cout << "En Buyuk Liste Orta Dugum Adres: " << big_list->get_middle_node() << endl;
        cout << "En Buyuk Liste Degerler: " << endl;
        big_list->show();
        cout << endl << endl;
        cout << "En Kucuk Liste Orta Dugum Adres: " << small_list->get_middle_node() << endl;
        cout << "En Kucuk Liste Degerler: " << endl;
        small_list->show();
        cout << endl;
        
    }
    
    else
        cout << "Sayilar.txt dosyasi acilamadigi icin program kapatiliyor...";
    
    system("PAUSE");
    
    return 0;
}
