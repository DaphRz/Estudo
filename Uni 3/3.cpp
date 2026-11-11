// Calcula a Média entre dois Números e a Raiz Quadrada dessa Média

#include <iostream>
#include <cmath>

double calcularMedia(double a, double b) {
    double media = (a + b) / 2;
    return media;
}

int main () {
    double x = 10., y= 6.;
    double resultado = calcularMedia(x,y);

    std::cout << "Raiz da Media: " << std::sqrt(resultado) << std::endl;

    return 0;
}