// Fibonacci sayılarını yinelemeli ve normal şekilde bulan program.

#include <iostream>
using namespace std;

int fibonacci_yinelemeli(int x){
    
    if(x==0) return 0;
    if(x==1) return 1;
    return x=fibonacci_yinelemeli(x-1)+fibonacci_yinelemeli(x-2);
    
}

int fibonacci_normal(int x){
    
    int back=0;
    int front=1;
    
    if(x==0) return back;
    if(x==1) return front;
    
    int temp;
    
    for(int i=0;i<(x-1);i++){
        temp=front;
        front+=back;
        back=temp;
    }
    
    return front;
    
}

int main(int argc, char** argv) {

    int x;
    
    cin >> x;
    
    for(int i=0;i<x;i++){
        cout << "Sıra: " << i+1 << "---> " << fibonacci_yinelemeli(i);
        cout << " --- ";
        cout << fibonacci_normal(i) << endl;
    }
    
    return 0;
}
