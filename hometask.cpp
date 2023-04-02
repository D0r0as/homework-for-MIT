#include <iostream>
using namespace std;

int fib(int n){
	int k = 2, f0 = 0, f1 = 1, f2;
	if (n == 1) return 0;
	else if (n == 2) return 1;
	while (k < n){
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		k++;
	}
	return f2;
}

int main(){
	int n;
	cout << "Hello, World!" << endl;
	cout << "please, enter number n\n";
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		cout << fib (i) << endl;
	return 0;
}
