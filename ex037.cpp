#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void lancadado(int& d1, int& d2, int& d3, int&soma);
int soma3dados(int n1, int n2, int n3);

int main()
{
    
    srand(time(0));

    int dad1, dad2, dad3, somatot, recorde = 0, cont = 0;
    char opc;
    string att;

    cout << "\nDeseja Jogar os dados: ";
    cin >> opc;
    cont++;
    while(opc =='S' or opc == 's'){
        lancadado(dad1, dad2, dad3, somatot);
        if(somatot > recorde){
            recorde = somatot;
            att = "New record";
        }else{
            att = "Not a new record";
        }
        cout << "Sua melhor pontuacao ate agora: " << recorde << endl;
        cout << "d1 = " << dad1 << " d2 = " << dad2 << " d3 = " << dad3 << " ==> " << somatot << " pontos" << endl;
        cout << att << endl;
        cont++;
        if(cont > 8){
            break;
        }
        cout << "\nDeseja Jogar os dados: ";
        cin >> opc;
    }

    return 0;
}

void lancadado(int& d1, int& d2, int& d3, int&soma){
    d1 = 1+rand()%6;
    d2 = 1+rand()%6;
    d3 = 1+rand()%6;
    soma= soma3dados(d1, d2, d3);
}

int soma3dados(int n1, int n2, int n3){
    return n1+n2+n3;
}



