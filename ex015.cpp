#include <iostream>
using namespace std;

int absolut(int n1);

int main(){
    
    int a;

    for(int i = 1; i <=50; i++){
        cout << "Digite um valor inteiro: ";
        cin >> a;
        cout << "O valor absoluto desse numero eh: " << absolut(a) << endl;
    }



    return 0;
}

int absolut(int n1){
    if(n1>=0){
        return n1;
    }else{
        return n1*-1;
    }
}