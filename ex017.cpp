#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

double distancia(double x1, double y1, double x2, double y2);

using namespace std;

int main(){
    
    string x, y;
    double result;

    cout << "Digite os pontos de A(x,y) da seguinte forma: <x><\" \"><y>: ";
    getline(cin, x);

    istringstream issA(x);
    double xa, ya;
    if (!(issA >> xa >> ya)) {
        cout << "Entrada inválida!" << endl;
        return 1;
    }
    
    cout << "Digite os pontos de B(x,y) da seguinte forma: <x><\" \"><y>: ";
    getline(cin, y);

    istringstream issB(y);
    double xb, yb;
    if (!(issB >> xb >> yb)) {
        cout << "Entrada inválida!" << endl;
        return 1;
    }

    result = distancia(xa,ya,xb,yb);
    cout << "A distancia desses 2 pontos eh: " << result;

    return 0;
}

double distancia(double x1, double y1, double x2, double y2){
    double d= sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    return d;
}

