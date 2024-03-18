#include <iostream>

using namespace std;
class Kisi{
	public:
		string isim;
		int yas;
	public:
		Kisi(string ism){
			isim=ism;
			yas=0;
		}
};
int main(){
	
	// hatalı tanımlama
	//Kisi kisiler[10];
	//dogru tanımalama
	Kisi **kisiler = new Kisi*[10]; 
	
		for(int i=0;i<10;i++){ 
			kisiler[i] = new Kisi("Mehmet"); 
			cout<<kisiler[i]<<endl;
		    cout<<kisiler[i]->isim<<endl;
		}
		for(int i=0;i<10;i++) 
			delete kisiler[i];
	
	
	
	
	
	
	
	return 0;
}