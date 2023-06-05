#include <iostream>
#include <cstdlib>
using namespace std;

int primo(int n1);
int somaprimo(int n1);

int main(){
    	
    int a;
    do{
    cout<< "Digite um valor para A positivo: ";
    cin >> a;
    if(a > 0){
        system("cls");
        break;
    }
    }while(true);
    cout << "A soma dos numeros primos ate o num " << a << " foi: " << somaprimo(a);


    return 0;
}

int primo(int n1){
    int cont =0;
    for(int i= 1; i <= n1; i++){
        if(n1%i == 0){
            cont++;
        }
    }
    if(cont == 2 or cont == 1){
        return 1;
    }else{
        return 2;
    }
    
}

int somaprimo(int n1){
        int soma = 0;
    for(int i = 1; i <= n1; i++){
        if(primo(i) == 1){
            soma += i;
        }
    }
    return soma;
}
