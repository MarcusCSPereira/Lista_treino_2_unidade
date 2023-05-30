#include <iostream>
using namespace std;

int testador(int n1);

int main(){
    	
    int a, controle;

    cout << "Digite um numero inteiro: ";
    cin >> a;
    controle = testador(a);

    if(controle == 1){
        cout << "O numero que vc informou eh par" << endl;
    }else{
        cout << "O numero que vc informou eh impar" << endl;
    }

    return 0;
}

int testador(int n1){
    if(n1 % 2 == 0 ){
        return 1;
    }else{
        return 0;
    }
}