#include <iostream>

using namespace std;	

    bool Esitmi(int d1[],int d2[],int u1,int u2){
			if(u1 != u2) return false;
				for(int i=0;i<u1;i++){
					if(d1[i] != d2[i]) return false;
					}
				return true;
			}
	int main(){
		// dizi ataması hatalı
		/*
		int a[]={3,7,9};
		int b[3];
		b=a;
		
		cout<<b<<endl;
		*/
		//**********************
		// doğru atama
		/*	
		int a[]={3,7,9};
		int b[3];
		for(int i=0;i<3;i++) b[i]=a[i];
		cout<<a<<endl;
		cout<<b<<endl;
		*/
		//********************************
	// diziler eşit mi?
		/*
		int a[]={3,7,9};
		int b[]={3,7,9};
		if(a == b) cout<<"diziler esit";
		else cout<<"diziler esit degil";
		*/
		// değerb olarak karşılaştırma
		
		
		int a[]={3,7,9};
		int b[]={3,7,9};
		if(Esitmi(a,b,3,3)) cout<<"diziler esit";
		else cout<<"diziler esit degil";
		
		
	return 0;
	}