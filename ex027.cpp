#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int cara_coroa();
void lancamentos(int n1, double* co, double* ca);

int main()
{

    srand(time(0));

    int n;
    double rca = 0, rco = 0;

    cout << "Quantas vezes voce deseja jogar a moeda: ";
    cin >> n;
    lancamentos(n, &rco, &rca);
    cout << "A porcentagem de vezes que caiu coroa foi: " << rco << "%" << endl;
    cout << "A porcentagem de vezes que caiu cara foi: " << rca << "%" << endl;

    return 0;
}

void lancamentos(int n1, double* co, double* ca){
    int moeda = 0;
    float cara = 0, coroa = 0, base = 0;
    for(int i = 0; i < n1; i++){
        moeda = cara_coroa();
        if(moeda == 1){
            cara++;
        }else if(moeda == 2){
            coroa++;
        }
        base++;
    }
    *co = (coroa/base) * 100;
    *ca = (cara/base) * 100;
}

int cara_coroa(){
    int random;
    random = 1 + rand()%2;
    if (random == 1){
        return 1;
    }else{
        return 2;
    }
}