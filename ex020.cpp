#include <iostream>

using namespace std;

int bloco(int n) {
    int par = 0;
    int impar = 0;
    int num;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        
        if (num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    if (par == n) {
        return 0; // Todos os números são pares
    } else if (impar == n) {
        return 1; // Todos os números são ímpares
    } else {
        return -1; // Números com paridades diferentes
    }
}

bool verificarPiramidalAlternante(int n) {
    int m = 1; // Tamanho do segmento inicial
    int paridade = bloco(m);
    int segmento = 1;
    
    for (int i = 1; i < n; i++) {
        if (paridade == 0) {
            if (bloco(m + 1) != 1) {
                return false;
            }
        } else if (paridade == 1) {
            if (bloco(m + 1) != 0) {
                return false;
            }
        } else {
            return false;
        }
        
        segmento++;
        
        if (segmento > m) {
            m++;
            segmento = 1;
        }
    }
    
    return true;
}

int main() {
    int n;
    cout << "Digite o tamanho da sequencia: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "A sequencia nao e piramidal m-alternante." << endl;
        return 0;
    }
    
    cout << "Digite os numeros da sequencia: ";
    
    if (verificarPiramidalAlternante(n)) {
        cout << "A sequencia e piramidal m-alternante." << endl;
    } else {
        cout << "A sequencia nao e piramidal m-alternante." << endl;
    }
    
    return 0;
}
