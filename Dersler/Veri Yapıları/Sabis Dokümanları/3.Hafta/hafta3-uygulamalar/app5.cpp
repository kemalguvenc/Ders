
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * Stack ve heap uzerinde diziler
 */

void yaz(int B[],int N){
    cout<<"Dizi elemanlari ve adresleri"<<endl;
      for (int i = 0; i < N; i++) {             
       cout<<"\tB["<<i<<"]="<<B[i]; 
       cout<<" "<<&B[i]<<endl;
    }
}
int main(int argc, char** argv) {
    int A[]={5,6,7,9,3,4,5};// stack uzerinde dizi
    //veya: int A[7];A[0]=5;A[1]=6;....    
    
    
    int N= sizeof(A)/sizeof(int);   
    
    cout<<"N="<<N<<endl;
    cout<<"A="<<A<<endl;
     
   //Dizi elemanlarini ve adreslerini yazdir
    for (int i = 0; i < N; i++) {
        cout<<"A["<<i<<"]="<<A[i];
        cout<<" "<<&A[i]<<endl;
    }
      
    cout<<"-----------"<<endl;
    // * ile elemanlari yazdir
    for (int i = 0; i < N; i++) {
        cout<<"*(A+"<<i<<")="<<*(A+i);
        cout<<" "<<A+i<<endl;
    }
   
    
     int *B=new int[N];// hea uzerinde dizi
     // A ve B dizilerinin adreslerini karsilastir
     cout<<"stack  heap"<<endl;
     for (int i = 0; i < N; i++) {
       B[i]=A[i];
       cout<<&A[i];
       cout<<" "<<&B[i]<<endl;
       
    }
     
   
      yaz(B,N);
      
      delete[] B;
      
      
      cout<<"delete sonrasi"<<endl;
      cout<<"B="<<B<<endl;      
      yaz(B,N);
      
      //delete sonrasi tekrar ayni degisken ile yeni bir dizi olusturulabilir
      B=new int[N];
      
      
    return 0;
}

