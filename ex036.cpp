#include <iostream>

using namespace std;

int positivo(int n1);
int somadivisores(int n1);
int eperfeito(int n1, int& soma);

int main()
{
    int a, sm;
    
        cout << "Digite um numero positivo: ";
        cin >> a;
    while(positivo(a) == 0){
        cout << "\nDado invalido. Digite um numero inteiro positivo: ";
        cin >> a;
    }

    if(eperfeito(a, sm) == 1){
        cout << "O numero que vc digitou eh perfeito" << endl;
    }else{
        cout << "O numero nao eh perfeito, pois a soma dos seus divisores eh igual a: " << sm << endl;
    }
    
    return 0;
}

int positivo(int n1){
    if(n1 >= 0){
        return 1;
    }else{
        return 0;
    }
}

int somadivisores(int n1){
    int soma = 0;
    for(int i = 1; i < n1 ; i++){
        if(n1%i == 0){
            soma += i;
        }
    }
    return soma;
}

int eperfeito(int n1, int& soma){
    soma = somadivisores(n1);
    if(soma == n1){
        return 1;
    }else{
        return 0;
    }
}