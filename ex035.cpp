#include <iostream>

void medias(float n1, float n2, float n3, float& m1, float& m2, float& m3);

using namespace std;

int main()
{
    char opc;
    float a, b, c, ma, mp, mh;

    while(true){
        
        cout << "Digite o primeiro valor: ";
        cin >> a;
        cout << "Digite o segundo valor: ";
        cin >> b;
        cout << "Digite o terceiro valor: ";
        cin >> c;

        
        medias(a, b, c, ma, mp, mh);
        cout << "MA = " << ma << endl;
        cout << "MP = " << mp << endl;
        cout << "MH = " << mh << endl;

        cout << "Quer calcular as Medias de novo [S]/[N]: ";
        cin >> opc;

        if(opc == 'n' or opc == 'N'){
            break;
        }

    }

    return 0;
}

void medias(float n1, float n2, float n3, float& m1, float& m2, float& m3){
    m1 = (n1 + n2 + n3) /3;
    m2 = ((n1)+(n2 * 3)+(n3 * 6))/10;
    m3 = 3/((1/n1)+(1/n2)+(1/n3));
}