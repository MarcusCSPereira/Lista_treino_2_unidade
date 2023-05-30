#include <iostream>
using namespace std;

int inverte(int n);

int main() {
    
    int n, b;
    
    cout << "Digite um numero inteiro positivo (n): ";
    cin >> n;
    
    
    b = inverte(n);
    cout << "O numero invertido eh: " << b << endl;

    
    return 0;
}

int inverte(int n) {
    int digito = 0;
    while (n > 0) {
        digito = digito*10 + n % 10;
        n /= 10;
    }
    
    return digito;
}