#include <iostream>
using namespace std;

float dec(float n1);
float cent(float n1);
float mili(float n1);

int main(){
    
    float a;

    cout << "Digite um valor em metros: ";
    cin >> a;
    cout << dec(a);
    cout << cent(a);
    cout << mili(a);


    return 0;
}

float dec(float n1){
    return n1 * 10;
}

float cent(float n1){
    return n1 * 100;
}

float mili(float n1){
    return n1 * 1000;
}