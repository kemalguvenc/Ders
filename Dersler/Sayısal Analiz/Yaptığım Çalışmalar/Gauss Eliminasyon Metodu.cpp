#include <iostream>

using namespace std;

void goster(long double **matris, int satir, int sutun){

for(int i=0;i<satir;i++){

	for(int j=0;j<sutun;j++){

		cout << matris[i][j] << " ";

		}

	cout << endl;

	}

cout << endl;

}

int main(){

int satir,sutun;
long double **matris;
bool hata=1;

while(hata==1){

cout << "Gireceğiniz matrisin boyutlarini giriniz.\n";
cout << "Satir: ";
cin >> satir;
cout << "Sutun: ";
cin >> sutun;

if(satir+1==sutun) hata=0;

}

matris = new long double *[satir];
for(int i = 0; i <satir; i++)
matris[i] = new long double[sutun];

for(int i=0;i<satir;i++){

	for(int j=0;j<sutun;j++){

	cin >> matris[i][j];

	}

}

cout << endl << "--- Girdiginiz matris ---"<< endl;
goster(matris,satir,sutun);

int i=0;
int j=0;

while(matris[i][j]==0){

i++;

	if(i==satir){

	cout << "Girdiginiz matrisin ilk elemanlarinin hepsi sifir oldugu icin cozumu hesaplanamaz.";

	return 0;

	}

}

if(i!=0){

long double temp;

	while(j<sutun){

	temp=matris[0][j];
	matris[0][j]=matris[i][j];
	matris[i][j]=temp;
	j=j+1;

	}

}

cout << endl << "--- Duzeltilmis Matris ---"<< endl;
goster(matris,satir,sutun);

i=0;
j=0;
int k;
int t;

while(j<(sutun-1)){

k=i;
t=j;
long double katsayi_1=matris[i][j];
long double katsayi_2;

	if(matris[i][j]!=1){
	
		while(t<sutun){
		
		matris[i][t]=matris[i][t]/katsayi_1;
		t=t+1;

		}

		goster(matris,satir,sutun);

	}

k=k+1;

	while(k<satir){

		if(matris[k][j]==0) {k=k+1; continue;}

	t=j;
	katsayi_2=-1*(matris[k][j]/matris[i][j]);

		while(t<sutun){

			matris[k][t]=(katsayi_2*matris[i][t])+matris[k][t];
			t=t+1;

		}

	k=k+1;

	}

i=i+1;
j=j+1;

}

cout << endl << "--- Ust Ucgensel Matris ---"<< endl;
goster(matris,satir,sutun);

long double *cozum_matrisi;
cozum_matrisi=new long double[sutun-1];

i=0;
k=satir-1;
t=sutun-1;
cozum_matrisi[i]=matris[k][t];
i=i+1;
k=k-1;
j=i;

while(i<satir){

	while(j>0){

	matris[k][t]=matris[k][t]-(matris[k][t-j]*cozum_matrisi[j-1]);
	j=j-1;

	}

	cozum_matrisi[i]=matris[k][t];
	i=i+1;
	k=k-1;
	j=i;

}

cout << endl << endl;

i=sutun-2;

while(i>=0){

cout << "x"<< sutun-1-i << "= " << cozum_matrisi[i] << endl;
i=i-1;

}

return 0;

}