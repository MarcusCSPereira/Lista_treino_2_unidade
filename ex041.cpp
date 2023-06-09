#include <iostream>

using namespace std;

template <class T>
T consecutivo(T x);

int main()
{
    int a;
    char b;

    cout << "Digite um numero inteiro: ";
    cin >> a;
    cout << "Digite um caracter: ";
    cin >> b;
    cout << consecutivo(a) << endl;
    cout << consecutivo(b) << endl;


    return 0;
}

template <class T>
T consecutivo(T x){
    return x+1;
}

