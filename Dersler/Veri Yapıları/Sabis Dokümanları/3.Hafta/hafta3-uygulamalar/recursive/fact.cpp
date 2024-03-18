#include <iostream>
using namespace std;
int Faktoriyel(int sayi){
	if(sayi <= 1) return 1;
	return sayi*Faktoriyel(sayi-1);
}
int Seri(int sayi){
	int sonuc=1;
	for(int i=2;i<=sayi;i++)sonuc*=i;
	return sonuc;
}
int main(){
	int sayi;
	cout<<"Sayi:";
	cin>>sayi;
	cout<<sayi<<"!="<<Faktoriyel(sayi)<<endl;
return 0;
}