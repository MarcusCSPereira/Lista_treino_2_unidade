#include <iostream>
#include <cstdlib>
#include <ctime>

char jogo();
void linha();
int numero_computador();
void placar();

using namespace std;

int main()
{
    srand(time(0));
    
    char opcao;
    do{
        placar();
        cout << "\nDeseja Jogar novamente: ";
        cin>> opcao;
        system("cls");
    }while(opcao == 'S' or opcao == 's');
    

    return 0;
}
char jogo(){
    int escolha, jogada, jogada_comp, resultado;
    linha();
    do{
        cout << "Par ou impar ?" << endl;
        cout << "0 para par" << endl;
        cout << "1 para impar" << endl;
        cin >> escolha;
        if(escolha == 0 or escolha == 1){
            break;
        }else{
            cout << "Voce digitou um valor diferente de [0]/[1], tente novamente" << endl;
        }
    }while(true);
    do{
        cout << "Digite sua jogada: ";
        cin >> jogada;
        if(jogada < 10 and jogada >= 0){
            break;
        }else{
            cout << "Voce diggitou um valor maior que 10, tente novamente" << endl;
        }
    }while(true);
    jogada_comp = numero_computador();
    cout << "\nComputador jogou: " << jogada_comp << endl;
    resultado = jogada + jogada_comp;
    linha();
    if (resultado % 2 == 0 and escolha == 0){
        return 'j';
    }else if (resultado % 2 == 0 and escolha == 1){
        return 'c';
    }else if (resultado % 2 == 1 and escolha == 0){
        return 'c';
    }else{
        return 'j';
    }
    
}

int numero_computador(){
   int random = rand()%10;
   return random; 
}

void linha(){
    cout << "---------------------------------------------------"<< endl;
}

void placar(){
    int static j = 0, c = 0;
    if(jogo() == 'j'){
        j++;
    }else{
        c++;
    }
    cout << "==========PLACAR==========" << endl;
    cout << "  Voce: " << j << "     Computador: " << c << endl;
    cout << "==========================" << endl;
}