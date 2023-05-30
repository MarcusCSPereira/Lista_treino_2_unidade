#include <iostream>
using namespace std;

int quadrado (int n1);

int main(){

    int a, b;
    
    cout << "Digite um numero: ";
    cin >>a;
    
    b = quadrado(a);
    cout << "O quadrado do numero que vc digitou eh: " << b << endl;

    
    return 0;
}

int quadrado(int n1){
    return n1*n1;
}