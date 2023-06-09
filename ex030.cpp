#include <iostream>
#include <cstdlib>
#include <ctime>

char jogo();
void placar();
int jogada_computador();
void mao(int n);

using namespace std;

int main()
{
    srand(time(0));

    char opc;


    do{
        system("cls");
        placar();
        cout << "\nDeseja Jogar novamente: ";
        cin >> opc;
        if(opc == 'N' or opc == 'n'){
            break;
        }
    }while(true);
    return 0;
}

int jogada_computador(){
    int random = 1 + rand()%3;
    return random;
}

char jogo(){
    int escolha, computador;
    cout << "Digite a sua jogada [1]= Tesoura / [2]= Papel / [3]= Pedra: ";
    cin >> escolha;
    computador = jogada_computador();
    cout << "\nO jogador joga: ";
    mao(escolha); 
    cout << "O computador joga: ";
    mao(computador);

    if(escolha == 1 and computador == 2){
        return 'j';
    }else if(escolha == 1 and computador == 3){
        return 'c';
    }else if(escolha == 1 and computador == 1){
        return 'e';
    }else if(escolha == 2 and computador == 2){
        return 'e';
    }else if(escolha == 2 and computador == 3){
        return 'j';
    }else if(escolha == 2 and computador == 1){
        return 'c';
    }else if(escolha == 3 and computador == 1){
        return 'j';
    }else if(escolha == 3 and computador == 2){
        return 'c';
    }else{
        return 'e';
    }

}

void placar(){
    int static j = 0, c = 0;
    char ganhador;
    ganhador = jogo();
    if(ganhador == 'j'){
        j++;
        cout << "\nO Jogador ganhou" << endl;
    }else if(ganhador == 'c'){
        c++;
        cout << "\nO Computador ganhou" << endl;
    }else {
        cout << "\nEmpate ngm ganhou pontos" << endl;
    }
    cout << "\n==========PLACAR==========" << endl;
    cout << "  Voce: " << j << "     Computador: " << c << endl;
    cout << "==========================" << endl;
}

void mao( int n){
    if (n == 1){
        cout << "Tesoura" << endl;
    }else if( n == 2){
        cout << "Papel" << endl;
    }else{
        cout << "Pedra" << endl;
    }
}