#include <iostream>
using namespace std;
bool ikiliArama(int sayilar[],int baslangic,int bitis,int aranan){
		int ortaindis = (baslangic+bitis) / 2;
		if(bitis < baslangic) return false;
		if(sayilar[ortaindis] == aranan) return true;
		if(aranan < sayilar[ortaindis])
			return ikiliArama(sayilar, baslangic, ortaindis-1,aranan);
		if(aranan > sayilar[ortaindis])
			return ikiliArama(sayilar, ortaindis+1, bitis,aranan);
}
int main(){
	int dizi[]={5, 26, 33, 47, 51, 58, 63, 69, 75, 88, 94, 101};
	int x;
	cout<<"Aranan:";
	cin>>x;
	if(ikiliArama(dizi,0,11,x)) cout<<"Sayi var";
	else cout<<"Sayi yok";
	return 0;
}