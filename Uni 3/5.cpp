// Coordenadas

#include <iostream>
#include <cmath>

int main() {
    double x, y, x1, y1;

    std::cout << "Digite as coordenadas x e y: ";
    std::cin >> x >> y;

    std::cout << "Digite as coordenadas x1 e y1: ";
    std::cin >> x1 >> y1;

    // Cálculo da Distância Euclidiana
    double distancia = std::hypot(x-x1, y-y1);

    std::cout << "\nDistancia Exata: " << distancia << std::endl;
    std::cout << "Arredondamento para Cima (ceil): " << std::ceil(distancia) << std::endl;
    std::cout << "Arredondamento para Baixo (floor): " << std::floor(distancia) << std::endl;

    return 0;
}