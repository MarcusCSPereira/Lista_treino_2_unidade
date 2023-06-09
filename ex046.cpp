#include <iostream>
#include <iomanip>

using namespace std;

float salario(int n1);
float salario(int n1, int n2);

int main()
{
    int a, b;
    char opc;
    float salarioreal;
    cout.precision(2);

    cout << "Qual eh seu cargo na empresa senhor [1] = Vendedor / [2] = Chefe de Setor / [3] = Gerente: ";
    cin >> a;
    while(true){
        if(a == 1 or a ==2 or a==3){
            break;
        }else{
            cout << "Voce digitou um cargo errado tente novamente" << endl;
            cout << "Qual eh seu cargo na empresa senhor [1] = Vendedor / [2] = Chefe de Setor / [3] = Gerente: ";
            cin >> a;
        }
    }
    cout << "Trabalhou Horas extras esse mes: [S]/[N]: ";
    cin >> opc;
    if(opc == 'S' or opc == 's'){
        cout << "Quantas horas extras o senhor fez esse mes: ";
        cin >> b;
        salarioreal=salario(a,b);
    }else{
        salarioreal=salario(a);
    }
    cout << fixed << "O seu salario esse mes eh de: " << salarioreal << " R$" << endl;

    return 0;
}

float salario(int n1){
    if(n1 == 1){
        return 2000;
    }else if( n1 == 2){
        return 2500;
    }else{
        return 4000;
    }
}

float salario(int n1, int n2){
    float salario;
    if(n1 == 1){
        salario = 2000 + (n2 * 17.05);
        return salario;
    }else if(n1 == 2){
        salario = 2500 + (n2 * 21.31);
        return salario;
    }else{
        salario = 4000 + (n2 * 34.10);
        return salario;
    }
}