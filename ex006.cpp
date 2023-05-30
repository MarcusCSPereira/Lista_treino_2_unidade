#include <iostream>
#include <cmath>

using namespace std;

float raizquadrada(float num) {
    float raiz = num / 2.0;
    float erro_maximo = num * 0.0001;

    while (fabs(raiz * raiz - num) > erro_maximo) {
        raiz = (raiz + num / raiz) / 2.0;
    }

    return raiz;
}

int main() {
    float num;
    cout << "Digite um número: ";
    cin >> num;

    float resultado = raizquadrada(num);
    cout << "Raiz quadrada: " << resultado << endl;

    return 0;
}
