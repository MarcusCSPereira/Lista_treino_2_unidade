#include <iostream>

using namespace std;

bool eprimo(int n1);
void testadora(int n1, int& maiom, int& menorm);

int main()
{
    
    int m, maior = 0, menor = 0;
    cout << "Digite um numero para saber se eh primo ou n: ";
    cin >> m;
    testadora(m, maior, menor);
    cout << maior << endl;
    cout << menor;


    return 0;
}

void testadora(int n1, int& maiom, int& menorm){
    for(int i = 1; i <= n1; i++){
        if(eprimo(i)== 1){
            maiom = i;
        }
    }
    int c = n1 + 1;
    while(true){
        if(eprimo(c) == 1){
            menorm = c;
            break;
        }
        c++;
    }
}


bool eprimo(int n1){
    int cont = 0;
    for(int i = 1;i <= n1; i++){
        if(n1%i == 0){
            cont++;
        }
    }
    if(cont == 2 or n1 == 1){
        return true;
    }else{
        return false;
    }
}