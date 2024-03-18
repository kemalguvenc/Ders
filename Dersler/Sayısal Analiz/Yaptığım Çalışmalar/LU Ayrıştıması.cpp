#include <iostream>

using namespace std;

// Matrisi gösterme fonksiyonu

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

    int satir,sutun;                // Girilecek matrisi satır ve sutunu.
    long double **matris;           // Girilecek matris.
    long double **l_matris;         // L matrisi.
    long double **u_matris;         // U matrisi.
    bool hata=1;

    while(hata==1){

        cout << "Gireceğiniz matrisin boyutlarini giriniz.\n";
        cout << "Satir: ";
        cin >> satir;
        cout << "Sutun: ";
        cin >> sutun;

        if(satir+1==sutun) hata=0;

    }
    
    // Matris oluşturuluyor.
    matris = new long double *[satir];
    for(int i = 0; i <satir; i++) matris[i] = new long double[sutun];

    //Matrise gerekli bilgiler kullanıcı tarafından giriliyor.
    for(int i=0;i<satir;i++){
        for(int j=0;j<sutun;j++){
            cin >> matris[i][j];
        }
    }
    
    // L matrisi oluşturuluyor.
    l_matris=new long double *[satir];
    for(int i=0;i<satir;i++) l_matris[i]=new long double [sutun-1];
    
    // L matrisi birim matris olarak dolduruluyor.
    for(int i=0;i<satir;i++){
        for(int j=0;j<sutun-1;j++){
            if(i==j) l_matris[i][j]=1;
            else l_matris[i][j]=0;
        }
    }
    
    // U matrisi oluşturuluyor.
    u_matris=new long double *[satir];
    for(int i=0;i<satir;i++) u_matris[i]=new long double [sutun-1];
    
    // U matrisi elementer satır işlemleri için kullanıcıdan alınan matrise eşitleniyor.
    for(int i=0;i<satir;i++){
        for(int j=0;j<sutun-1;j++){
            u_matris[i][j]=matris[i][j];
        }
    }

    // Girilen matris kontrol edilmek için gösteriliyor.
    cout << endl << "--- Girdiginiz matris ---"<< endl;
    goster(matris,satir,sutun);

    // Matrisin ilk elemanı ilk pivot olarak belirleniyor ve satır işlemlerinde kullanmak için geçici satır ve geçici sutun değişkenleri oluşturuluyor.
    int pivot_satir=0;
    int pivot_sutun=0;
    int temp_satir;
    int temp_sutun;

    // Matrisin ilk sütunundan başlanıp pivotun altındaki değerler elementer satır işlemleri ile sıfıra eşitlenir.
    // Girilen matrisin son sütunu sonuçları içerdiğinden dolayı sutun sayısının 1 eksiğine kadar döngü ilerler.
    while(pivot_sutun<sutun-1){

        temp_satir=pivot_satir+1;
        long double katsayi;

        // Pivotun altındaki değerler tek tek kontrol ediliyor.
        // Eğer altındaki değer sıfıra eşitse o satır direk geçiliyor.
        // Eğer altındaki değer sıfıra eşit değilse o satıra elementer satır işlemleri yapılıyor. Ayrıca L matrisini dolduruyor.
        while(temp_satir<satir){

            // Elemanın sıfır olup olmadığı kontrol ediliyor.
            if(u_matris[temp_satir][pivot_sutun]==0) {
                temp_satir=temp_satir+1;
                continue;
            }
            
            // Eleman sıfır değilse burası devreye girip, elementer satır işlemleri için hazırlık yapılıyor.
            // Bunun yaparken de L matrisi dolduruluyor.
            temp_sutun=pivot_sutun;
            katsayi=-1*(u_matris[temp_satir][pivot_sutun]/u_matris[pivot_satir][pivot_sutun]);
            l_matris[temp_satir][pivot_sutun]=-1*katsayi;

            // Elde edilen katsayı ile elementer satır işlemi yapılıyor.
            while(temp_sutun<sutun){
                u_matris[temp_satir][temp_sutun]=(katsayi*u_matris[pivot_satir][temp_sutun])+u_matris[temp_satir][temp_sutun];
                temp_sutun=temp_sutun+1;
            }
            
            temp_satir=temp_satir+1;
        }
        
        // Bir sonraki pivota geçilir.
        pivot_satir=pivot_satir+1;
        pivot_sutun=pivot_sutun+1;

}

    cout << endl << "--- L Matrisi ---"<< endl;
    goster(l_matris,satir,sutun-1);
    
    cout << endl << "--- U Matrisi ---" << endl;
    goster(u_matris,satir,sutun-1);

    // U matrisi ile sonuc matrisinin çarpımı sonucu oluşacak matris oluşturulur.
    long double *aracozum_matrisi;
    aracozum_matrisi=new long double[sutun-1];
    int aracozum_matrisi_eleman_sayaci=0;
    
    temp_satir=0;
    
    while(temp_satir<satir){
        long double katsayi=0;
        temp_sutun=0;
        
        while(temp_sutun<temp_satir){
            katsayi=katsayi+l_matris[temp_satir][temp_sutun]*aracozum_matrisi[temp_sutun];
            temp_sutun=temp_sutun+1;
        }
        
        aracozum_matrisi[aracozum_matrisi_eleman_sayaci]=matris[temp_satir][sutun-1]-katsayi;
        aracozum_matrisi_eleman_sayaci=aracozum_matrisi_eleman_sayaci+1;
        temp_satir=temp_satir+1;
    }
    
    for(int i=0;i<satir;i++) cout << "x" << i+1 << ": " << aracozum_matrisi[i] << endl;
    
    // Sonuç matrisi oluşturulur.
    long double *sonuc_matrisi;
    sonuc_matrisi=new long double[sutun-1];
    int sonuc_matrisi_eleman_sayaci=sutun-2;
    
    temp_satir=satir-1;
    
    while(temp_satir>=0){
        long double katsayi=0;
        temp_sutun=sutun-2;
        
        while(temp_sutun>temp_satir){
            katsayi=katsayi+u_matris[temp_satir][temp_sutun]*sonuc_matrisi[temp_sutun];
            temp_sutun=temp_sutun-1;
        }
        
        sonuc_matrisi[sonuc_matrisi_eleman_sayaci]=(aracozum_matrisi[temp_satir]-katsayi)/u_matris[temp_satir][temp_sutun];
        sonuc_matrisi_eleman_sayaci=sonuc_matrisi_eleman_sayaci-1;
        temp_satir=temp_satir-1;
    }
    
    for(int i=0;i<satir;i++) cout << "x" << i+1 << ": " << sonuc_matrisi[i] << endl;
    
    return 0;

}
