#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int gerador();

int main()
{
    
    srand(time(0));

    int a, b, cont = 0, contmaior = 10000;
    char opc;
    
    do{

    b = gerador();
    
        do{
            
            cout << "\nDigite um valor [1,50] que vc acha que eh o correto: ";
            cin >> a;

            if(a > b){
                if(a - b > 20 ){
                    cout << "\nCongelando" << endl;
                }else if(a - b > 15 and a- b < 20){
                    cout << "\nMuito Frio" << endl;
                }else if(a - b > 10 and a - b < 15){
                    cout << "\nFrio" << endl;
                }else if( a - b > 5 and a-b < 10 ){
                    cout << "\nQuente" << endl;
                }else if(a - b <= 5){
                    cout << "\nFervendo" << endl;
                }
            }
            if(a < b){
                if(b - a > 20 ){
                    cout << "\nCongelando" << endl;
                }else if(b - a > 15 and a- b < 20){
                    cout << "\nMuito Frio" << endl;
                }else if(b - a > 10 and a - b < 15){
                    cout << "\nFrio" << endl;
                }else if( b - a > 5 and a-b < 10 ){
                    cout << "\nQuente" << endl;
                }else if(b - a <= 5){
                    cout << "\nFervendo" << endl;
                }
            }
            cont ++;
        }while (b != a);
    
    system("cls");
    cout << "\nVoce acertou em " << cont << " tentativas, o numero era: " << a << endl;
    if (cont < contmaior){
        contmaior = cont;
    }
    cont = 0;
    cout << "\nO recorde ate agora eh de: " << contmaior << endl;
    cout << "\nDeseja jogar novamente [S]/[N]: ";
    cin >> opc;

    }while(opc == 'S' or opc== 's');

    cout << "\nO recorde final foi de: " << contmaior;

    return 0;
}

int gerador(){
    int random;
    random = 1 + rand()%50;
    return random;
}