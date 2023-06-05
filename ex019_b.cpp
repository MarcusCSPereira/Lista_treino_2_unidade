#include <iostream>
#include <string>
using namespace std;

bool encaixa(int n1, int n2);

int main() {
    int a, b;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    bool resultado = false;

    if (a < b) {
        resultado = encaixa(a, b);
    } else if (b < a) {
        resultado = encaixa(b, a);
    }

    if (resultado) {
        cout << "O menor número é um segmento do outro." << endl;
    } else {
        cout << "O menor número não é um segmento do outro." << endl;
    }

    return 0;
}

bool encaixa(int n1, int n2) {
    string str1 = to_string(n1);
    string str2 = to_string(n2);

    // Verifica se str2 está no final de str1
    if (str1.length() >= str2.length() && str1.substr(str1.length() - str2.length()) == str2) {
        return true;
    } else {
        return false;
    }
}
