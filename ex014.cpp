#include <iostream>

using namespace std;

void funcaoA_B(int a, int b);
void funcaoB_A(int b, int a);
void funcaoIguais();

int main() {
    int valor1, valor2;

    cout << "Digite dois valores inteiros: ";
    cin >> valor1 >> valor2;

    if (valor1 < valor2) {
        funcaoA_B(valor1, valor2);
    } else if (valor1 > valor2) {
        funcaoB_A(valor2, valor1);
    } else {
        funcaoIguais();
    }

    return 0;
}

void funcaoIguais() {
    cout << "valores iguais" << endl;
}

void funcaoB_A(int b, int a) {
    for (int i = a; i >= b; i--) {
        cout << i << " ";
    }
    cout << endl;
}

void funcaoA_B(int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }
    cout << endl;
}