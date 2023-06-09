#include <iostream>

using namespace std;

template <class T>
void troca (T& n1, T& n2);

int main()
{
    
    int ai, bi;
    float af, bf;
    char ac, bc;
    
    cout << "Digite um valor int: ";
    cin >> ai;
    cout << "Digite outro valor int: ";
    cin >> bi;
    cout << "Digite um valor float: ";
    cin >> af;
    cout << "Digite outro valor float: ";
    cin >> bf;
    cout << "Digite um valor char: ";
    cin >> ac;
    cout << "Digite outro valor char: ";
    cin >> bc;
    cout << "Valores int antes da funcao: " << ai << " " << bi << endl;
    troca(ai,bi);
    cout << "Valores int depois da funcao: " << ai << " " << bi << endl;
    cout << "Valores float antes da funcao: " << af << " " << bf << endl;
    troca(af,bf);
    cout << "Valores float depois da funcao: " << af << " " << bf << endl;
    cout << "Valores char antes da funcao: " << ac << " " << bc << endl;
    troca(ac,bc);
    cout << "Valores char depois da funcao: " << ac << " " << bc << endl;

    return 0;
}

template <class T>
void troca (T& n1, T& n2){
    T n3;
    n3 = n2;
    n2 = n1;
    n1 = n3;
}