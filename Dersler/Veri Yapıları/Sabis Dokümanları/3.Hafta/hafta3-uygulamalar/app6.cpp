#include <cstdlib>
#include <iostream>

using namespace std;
/*
 * 2 boyutlu diziler
 */
void yaz(int **A,int N,int M){
    cout<<"2 boyutlu dizi elemanlari:"<<endl;
    for (int i=0;i<N;i++){ 

        for (int j=0;j<M;j++){
            cout<<"\t"<<A[i][j];
        }
           cout<<endl;
    }
}
void rand(int **A,int N,int M){
    for (int i=0;i<N;i++){        
        for (int j=0;j<M;j++){
            A[i][j]=rand()%99;
        }         
    }
}

int main(int argc, char** argv) {
    int N,M;
    N=5;M=4;
    int B[N][M];//stack alani
    
    //B ile saklanan adres ilk satir ve ilk sutundaki elemanin adresi
    cout<<"B="<<B<<endl;  
    
    cout<<"Satir adresleri (Stack)"<<endl;
    for (int i=0;i<N;i++)
        cout<<"&B["<<i<<"]="<<B[i]<<endl; 
    
    int **A=new int*[N];//heap alani
    for (int i=0;i<N;i++)
        A[i]=new int[M]; //satirlarin herbiri icin yer ayrilir
    //A[0]=new int[4];//satirlar farkli uzunluklarda olabilir
    //A[1]=new int[10];
    cout<<"A="<<A<<endl;    
    cout<<"Satir adresleri (Heap)"<<endl;
    for (int i=0;i<N;i++)
        cout<<"&A["<<i<<"]="<<A[i]<<endl; 
    
    //yazdir
    
    rand(A,N,M);// matrisi random sayilarla doldur
    yaz(A,N,M);    
    
    //2 boyutlu dizinin heap uzerinden kaldirilmasi
    for (int i=0;i<N;i++)
        delete[] A[i];
    delete[] A;
    
    A=new int*[N];//heap alani
    for (int i=0;i<N;i++)
        A[i]=new int[M];

    return 0;
}

