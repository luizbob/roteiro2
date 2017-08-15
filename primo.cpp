#include <iostream>

using namespace std;

int ehDivisivel(int n, int x){
		if (n / x == true){
			return 1;
		} else {
			return 0;
		}
}
int ehPrimo(int n){
	int i, c = 0;

	for (i = 0; i < n; i++){
		if (ehDivisivel(n,i)){
			c++;

	}

	if (c ==2){
		return 1;
	} else {
		return 0;
	}
	

}

int main(int argc, char const *argv[])
{
	int n, a;

	cout << "Digite o numero para ser testado e o numero para testa-lo " << endl;
	cin << n << a;

	if (ehPrimo(n)){
		cout << "O numero eh primo" << endl;
	} else {
		cout << "O numero nao eh primo" << endl;
	}

	return 0;
}