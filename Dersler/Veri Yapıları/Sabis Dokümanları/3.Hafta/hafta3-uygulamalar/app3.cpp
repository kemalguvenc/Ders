#include <iostream>

using namespace std;

	int* DiziOlusturSifirla(int size){
		int sayilar[size];
			for(int i=0;i<size;i++){
			sayilar[i]=0;
			}
		return sayilar;
	}
	
	
	int main(){
		int uzunluk;
		cout<<"Dizi Uzunlugu:";
		cin>>uzunluk;
		int *p=DiziOlusturSifirla(uzunluk);
		cout<<p[0];
	return 0;
	}