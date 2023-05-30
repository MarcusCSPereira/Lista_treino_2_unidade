#include <iostream>
using namespace std;

void timer();

int main(){
    	
    int a;

    cout << "Digite um valor: ";
    cin >> a;
    timer();

    cout << "O valor que vc digitou eh... " << a;

    return 0;
}

void timer(){
    for(int cont = 1; cont <= 1000000000;){
        cont++;
    }
}