#include <iostream>
#include <string>
#include <sstream>

using namespace std;

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}

int main() {
    string expressao;
    cout << "Digite a expressao no formato: <operando1>  <operacao>  <operando2>: ";
    getline(cin, expressao);

    stringstream ss(expressao);
    float operando1, operando2;
    string operacao;

    ss >> operando1 >> operacao >> operando2;

    float resultado;
    if (operacao == "+") {
        resultado = soma(operando1, operando2);
    } else if (operacao == "-") {
        resultado = subtracao(operando1, operando2);
    } else if (operacao == "*") {
        resultado = multiplicacao(operando1, operando2);
    } else if (operacao == "/") {
        resultado = divisao(operando1, operando2);
    } else {
        cout << "Operacao invalida!" << endl;
        return 1;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
