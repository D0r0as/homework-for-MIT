#include <iostream>
using namespace std;

int fib(int n){
	if (n == 1 || n == 2) return 1;
	else return fib(n - 1) + fib(n - 2);
}

int main(){
	int n;
	cout << "Hello, World!" << endl;
	cout << "please, enter number n\n";
	cout << "n = ";
	cin >> n;
	cout << fib (n);
	return 0;
}
