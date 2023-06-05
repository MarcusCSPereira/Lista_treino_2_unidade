#include <iostream>
using namespace std;

string encaixa(int n1, int n2);
int inverte(int n);

int main(){
    
    int a,b;

    cout << "Digite os valores para a: ";
    cin >> a;
    cout << "\nDigite os valores para b: ";
    cin >> b;

    cout << encaixa(a,b);



    return 0;
}

string encaixa(int n1, int n2){
        int aux = 0, aux2 =0;
        
        while(n1 > 0){
            
            aux = aux*10 + n1%10;
            aux2 = inverte(aux);
            n1 = n1/10;
            
            if(aux2 == n2){
                return "Encaixa";
                break;
            }
        }
        return "Nao encaixa";
    }

int inverte(int n) {
int digito = 0;
while (n > 0) {
    digito = digito*10 + n % 10;
    n /= 10;
}
    
return digito;
}