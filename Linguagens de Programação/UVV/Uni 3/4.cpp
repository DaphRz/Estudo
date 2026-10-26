#include <iostream>
#include <cmath>

// Constante p Conversão de Angulos
const double PI = 3.141592653589793;

double grausRadianos (double graus) {
    double radianos = graus * (PI/180.);
    return radianos;
}

int main () {
    double distancia = 50.;
    double graus = 30.;
    double altura = distancia * std::tan(grausRadianos(graus));

    std::cout << "Altura = " << altura << "m" << std::endl;
    
    return 0;
}