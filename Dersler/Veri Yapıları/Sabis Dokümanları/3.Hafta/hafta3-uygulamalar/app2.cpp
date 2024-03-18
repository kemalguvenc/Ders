#include <iostream>

using namespace std;

int main(){

	int uzunluk;
	cout<<"Dizi Uzunlugu:";
	cin>>uzunluk;
	int sayilar[uzunluk];
	for(int i=0;i<uzunluk;i++){
		sayilar[i]=0;
	}
	
	cout<<"dizinin elamanlari sifirlandi."<<endl;
	
	return 0;

}