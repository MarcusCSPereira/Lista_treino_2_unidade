#include <iostream>
using namespace std;

int jogo(int n1, int n2);

int main(){

    int h1, m1, h2, m2, duracao_min, duracao_horas;

    cout << "Digite a h1: ";
    cin >> h1;
    cout << "Digite o m1: ";
    cin >> m1;
    cout << endl;
    cout << "Digite a h2: ";
    cin >> h2;
    cout << "Digite o m2: ";
    cin >> m2;
    cout << endl;

    h1= h1*60 + m1;
    h2= h2*60 + m2;

    duracao_horas=jogo(h1,h2)/60;
    duracao_min=jogo(h1,h2)%60;

    if(duracao_min > 0 and duracao_min < 10){
    cout << "O jogo durou: " << duracao_horas << ":0" << duracao_min << " hrs" << endl;
    }else if(duracao_min > 0){
    cout << "O jogo durou: " << duracao_horas << ":" << duracao_min << " hrs" << endl;
    }else{
    cout << "O jogo durou: " << duracao_horas << " Horas" << endl;
    }
    return 0;

    }


int jogo(int n1, int n2){
        if(n2 < n1){
        n2 = n2 + 24*60;
    }
    return n2-n1;
}
