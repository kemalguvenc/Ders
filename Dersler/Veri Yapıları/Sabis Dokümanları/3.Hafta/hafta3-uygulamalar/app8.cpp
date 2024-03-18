#include <iostream>

using namespace std;

int Uzunluk(char *str){
	int u=0;
	for(int i=0;str[i] != '\0';i++) u++;
return u;
}

int main(){
	char* str = "Kelaynak";
	cout<<*str<<endl; // sadece K harfini yazar
	cout<<str<<endl; // Bütün bir string'i ekrana yazar.
	cout<<Uzunluk(str)<<endl;
return 0;
}

