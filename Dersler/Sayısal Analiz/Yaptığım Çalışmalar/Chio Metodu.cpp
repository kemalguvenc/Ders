#include <iostream>

using namespace std;

void goster(long double **matris, int mertebe){

for(int i=0;i<mertebe;i++){

	for(int j=0;j<mertebe;j++){

		cout << matris[i][j] << " ";

		}

	cout << endl;

	}

cout << endl;

}

long double us_alma(long double sayi, int us){

for(int i=1;i<us;i++) sayi*=sayi;

return sayi;

}

int main(){

int mertebe;
long double katsayi=1;
long double **matris;

cout << "Gireceğiniz matrisin mertebesini giriniz: ";
cin >> mertebe;

matris = new long double *[mertebe];
for(int i = 0; i <mertebe; i++)
matris[i] = new long double[mertebe];

for(int i=0;i<mertebe;i++){

	for(int j=0;j<mertebe;j++){

	cin >> matris[i][j];

	}

}

cout << endl << "--- Girdiginiz matris ---"<< endl;
goster(matris,mertebe);

cout << "----- Cozum Asamalari -----" << endl << endl;

while(mertebe>2){

if(matris[0][0]==0) {

cout << "Oluşan matrisin ilk elemanı 0 olduğu için bu matrisin determinantını bu yöntemle hesaplayamayız";
return 0;

}

katsayi*=(1.0/us_alma(matris[0][0],mertebe-2));
mertebe--;

long double **gecici_matris;
gecici_matris = new long double *[mertebe];
for(int i = 0; i <mertebe; i++)
gecici_matris[i] = new long double [mertebe];

for(int i=0;i<mertebe;i++){

	for(int j=0;j<mertebe;j++){

		gecici_matris[i][j]=(matris[0][0]*matris[i+1][j+1])-(matris[0][j+1]*matris[i+1][0]);

	}

}

matris=gecici_matris;

cout << "--- " << mertebe << ". mertebe matris ---" << endl;
goster(matris,mertebe);
cout << "Katsayi= " << katsayi << endl << endl;


}

long double determinant=(matris[0][0]*matris[1][1])-(matris[1][0]*matris[0][1]);

cout << "Girdiginiz matrisin determinantı= " << katsayi << "*" << determinant << "= " << (katsayi* determinant);

return 0;

}