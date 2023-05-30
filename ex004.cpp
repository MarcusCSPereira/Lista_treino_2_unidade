#include <iostream>
using namespace std;

int testadorpar(int n1);
bool multiplo(int n1);

int main(){
    	
    int a, controle;
    bool controle2;

    cout << "Digite um numero inteiro: ";
    cin >> a;
    controle = testadorpar(a);
    
    if(controle == 1){
        cout << "O numero que vc informou eh par" << endl;
    }else{
        cout << "O numero que vc informou eh impar" << endl;
    }

    controle2 = multiplo(a);
    if (controle2 == true){
        cout << "Esse numero tambem eh multiplo de 5" << endl;
    }else {
        cout << "Esse numero nao eh multiplo de 5" << endl;
    }

    return 0;
}

bool multiplo(int n1){
    if (n1 % 5 == 0){
        return true;
    }else{
        return 0;
    }
}



int testadorpar(int n1){
    if(n1 % 2 == 0 ){
        return 1;
    }else{
        return 0;
    }
}