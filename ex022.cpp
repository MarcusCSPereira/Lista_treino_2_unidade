#include <iostream>
using namespace std;

string primo(int a);

int main(){
    	
    int a;

    cout<< "Digite um valor para a: ";
    cin >> a;
    cout << "O numero: " << a << primo(a);


    return 0;
}

string primo(int n1){
    int cont =0;
    for(int i= 1; i <= n1; i++){
        if(n1%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        return " Eh primo";
    }else{
        return " N eh primo";
    }
    
}
