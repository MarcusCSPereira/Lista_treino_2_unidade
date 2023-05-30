#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double aritmedica(double n1, double n2, double n3);
double ponderada(double n1, double n2, double n3);
double harmonica(double n1, double n2, double n3);

int main(){

    double x, y, z, result;
    char opc;
    string media_type;

    cout.precision(2);
    cout << "Digite a primeira media: ";
    cin >> x;
    cout << "Digite a segunda media: ";
    cin >> y;
    cout << "Digite a terceira media: ";
    cin >> z;
    cout << "Digite o tipo de media que vc deseja realizar: [A]/[P]/[H]: ";
    cin >> opc;
   
    switch(opc){
        case 'a':
        case 'A':
        result = aritmedica(x,y,z);
        media_type = "Aritmetica";
        break;
        case 'p':
        case 'P':
        result = ponderada(x,y,z);
        media_type = "Ponderada";
        break;
        case 'h':
        case 'H':
        result = harmonica(x,y,z);
        media_type = "Harmonica";
        break;
        default:
        cout << "Voce digitou um tipo de media errado..." << endl;
        break;
    }

    cout << "A media " << media_type << " dos valores foi: "  << fixed << result;
    

    return 0;
}

double aritmedica(double n1, double n2, double n3){
    return (n1+n2+n3)/3;
}

double ponderada(double n1, double n2, double n3){
    return ((n1*5) + (n2*3) + (n3*2))/10;
}

double harmonica(double n1, double n2, double n3){
    return 3/(1/n1 + 1/n2 + 1/n3);
}

