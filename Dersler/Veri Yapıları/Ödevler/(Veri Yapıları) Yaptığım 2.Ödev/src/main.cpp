/**
 * @file            main.cpp
 * @description                 Programın ana kaynak dosyası.
 * @course                       1.Öğretim - C grubu
 * @assignment                2.Ödev
 * @date            25.12.2020
 * @author          Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
 */

#include <iostream>
#include <fstream>
#include "OutTree.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream reader;
    OutTree companies;
    
    reader.open("./doc/Veri.txt");
    if(!reader.is_open())
        reader.open("../doc/Veri.txt");
        
    if(reader.is_open()){
        string readed;
        size_t tmp;
        string company_name;
        string worker_name;
        unsigned int year;
        while(!reader.eof()){
            reader>>readed;
            tmp=readed.find("#");
            company_name=readed.substr(0,tmp);
            worker_name=readed.substr(tmp+1);
            worker_name+=" ";
            reader>>readed;
            tmp=readed.find("#");
            worker_name+=readed.substr(0,tmp);
            year=stoi(readed.substr(tmp+1));
            
            companies.root=companies.add(companies.root, company_name, worker_name, year);
        }
        companies.post_order(companies.root);
    }
    else
        cout << "Dosya bulunamadi. Program kapatiliyor..." << endl;
    
    return 0;
}
