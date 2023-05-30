#include <iostream>
using namespace std;

int testador(int n1);

int main(){
    
    int a;

    cout << "Digite um numero: ";
    cin >> a;

    if (testador(a)==1){
        cout << a <<" > 0";
    }else if(testador(a)==-1){
        cout << a << " < 0";
    }else{
        cout << a << " = 0";
    }

    return 0;
}

int testador(int n1){
    if(n1 > 0){
        return 1;
    }else if(n1 < 0){
        return -1;
    }else{
        return 0;
    }
}
