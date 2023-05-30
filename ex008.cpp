#include <iostream>
using namespace std;

int power(int n1, int n2);

int main() {
    
    int n, b,c;
    
    cout << "Digite um numero inteiro positivo (n): ";
    cin >> n;
    
    cout << "Digite o expoente desse numero: ";
    cin >> b;

    c=power(n,b);

    cout << "Resultado: " << c << endl;
    
    return 0;
}

int power(int n1, int n2) {
    int final = n1;
    for(int i=1; i < n2; i++ ){
        final= final*n1;
    }
    
    return final;
}