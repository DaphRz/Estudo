// Cálculo da Distância Euclidiana entre dois Pontos Bidimensionais

#include <iostream>
#include <cmath>     // std::sqrt e std::pow

int main() {
    double x = 1., y = 2.;
    double x1 = 4., y1 = 6.;

    // Cálculo da Distância Euclidiana
    double distancia = std::sqrt(std::pow(x1 - x, 2) + std::pow(y1 - y, 2));

    // Forma Alternativa Otimizada
    double distancia1 = std::hypot(x1 - x, y1- y);

    std::cout << "Distancia: " << distancia << std::endl;
    std::cout << "Distancia via hypot: " << distancia1 << std::endl;

    double teste = std::log(-5);

    std::cout << "\n" << teste << "\n";

    return 0;
}