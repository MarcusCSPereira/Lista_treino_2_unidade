#include <iostream>
#include <string>
using namespace std;

string divisor(int n1, int n2);

int main(){

    int m, n;

    cout << "Digite o valor de m em inteiro: ";
    cin >> m;
    cout << "Digite o valor de n em inteiro: ";
    cin >> n;

    cout << divisor(m,n);

    return 0;
}

string divisor(int n1, int n2){
    if(n1 % n2 == 0){
        return "true";
    }else{
        return "false";
    }
}