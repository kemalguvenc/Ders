#include <iostream>
using namespace std;

int Fib(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return Fib(n-1)+Fib(n-2);
}

int main(){
	int n;
	cout<<"n:";
	cin>>n;
	cout<<"Fib("<<n<<"):"<<Fib(n);
	return 0;
}