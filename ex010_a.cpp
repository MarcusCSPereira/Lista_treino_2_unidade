#include <iostream>
using namespace std;

int contadigt(int n1, int n2);

int main(){
    	
    int n, d, result;

    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Digite um numero [0,9]: ";
    cin >> d;
    result = contadigt(n,d);
    
    cout << "O numero de vezes que o digito: " << d << " aparece em " << n << " eh igual a: " << result << endl;

    return 0;
}

int contadigt(int n1, int n2){
    int cont = 0;
    while(n1 > 0){
        if(n1 % 10 == n2){
            cont++;
        }
        n1/=10;
    }
    return cont;
}