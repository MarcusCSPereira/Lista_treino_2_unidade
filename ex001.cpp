#include <iostream>
using namespace std;

void quadrado (int n1);

int main(){

    int a;
    
    cout << "Digite um numero: ";
    cin >>a;
    quadrado(a);

    
    return 0;
}

void quadrado(int n1){
    cout << "O quadrado desse numero eh: " << n1*n1 << endl;
}