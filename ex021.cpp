#include <iostream>
#include <cmath>

double arctan(double x);

double angulo(double x, double y) {
    if (x == 0 && y == 0) {
        return 0.0;  // Ângulo indefinido para o ponto (0, 0)
    }
    
    if (x == 0) {
        return M_PI / 2;  // Ângulo de 90 graus para pontos no eixo y
    }
    
    if (y == 0) {
        return 0.0;  // Ângulo de 0 grau para pontos no eixo x
    }
    
    double arctan_x = arctan(x);
    double arctan_y = arctan(y);
    
    if (y < x) {
        return arctan_y;  // Ângulo para pontos abaixo da reta y = x
    } else {
        return M_PI / 2 - arctan_x;  // Ângulo para pontos acima da reta y = x
    }
}

double arctan(double x) {
    double arctan = x;
    double term = x;
    double k = 3;
    
    while (fabs(term) >= 0.0001) {
        term = (pow(-1, k / 2) * pow(x, k)) / k;
        arctan += term;
        k += 2;
    }
    
    return arctan;
}

int main() {
    double x, y;
    std::cout << "Digite as coordenadas cartesianas (x, y): ";
    std::cin >> x >> y;
    
    if (x <= 0 || y <= 0) {
        std::cout << "Coordenadas inválidas. Ambas devem ser maiores que 0." << std::endl;
        return 0;
    }
    
    double result = angulo(x, y);
    double graus = result * 180 / M_PI;
    
    std::cout << "O ângulo formado pelo vetor (" << x << ", " << y << ") e o eixo horizontal é aproximadamente: " << graus << " graus." << std::endl;
    
    return 0;
}
