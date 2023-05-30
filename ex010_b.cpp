#include <iostream>

using namespace std;

int contadigitos(int n, int d);

bool verificaPermutacao(int a, int b);

int main() {
    int a, b;
    cout << "Digite dois inteiros positivos (a e b): ";
    cin >> a;
    cin >> b;

    if (verificaPermutacao(a, b))
        cout << "a eh uma permutacaoo de b." << endl;
    else
        cout << "a nao eh uma permutacao de b." << endl;

    return 0;
}

bool verificaPermutacao(int a, int b) {
    int numDigitsA = 0, numDigitsB = 0;
    int tempA = a, tempB = b;
    while (tempA != 0) {
        tempA /= 10;
        numDigitsA++;
    }
    while (tempB != 0) {
        tempB /= 10;
        numDigitsB++;
    }
    if (numDigitsA != numDigitsB)
        return false;
    
    for (int i = 1; i <= 9; i++) {
        int countA = contadigitos(a, i);
        int countB = contadigitos(b, i);
        if (countA != countB)
            return false;
    }
    
    return true;
}

int contadigitos(int n, int d) {
    int count = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == d)
            count++;
        n /= 10;
    }
    return count;
}

